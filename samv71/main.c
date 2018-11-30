/*
 * Copyright (c) 2015, Alex Taradov <alex@taradov.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

//-----------------------------------------------------------------------------
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "samv71.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED,      A, 23)
HAL_GPIO_PIN(BUTTON,   A, 9)
HAL_GPIO_PIN(UART_TX,  B, 4)
HAL_GPIO_PIN(UART_RX,  A, 21)

//-----------------------------------------------------------------------------
static void timer_set_period(uint16_t i)
{
  TC0->TC_CHANNEL[0].TC_RC = 32768ul * i / 1000ul;
  TC0->TC_CHANNEL[0].TC_CCR = TC_CCR_CLKEN | TC_CCR_SWTRG;
}

//-----------------------------------------------------------------------------
void irq_handler_tc0(void)
{
  if (TC0->TC_CHANNEL[0].TC_SR & TC_SR_CPCS)
  {
    HAL_GPIO_LED_toggle();
  }
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  PMC->PMC_PCER0 = PMC_PCER0_PID23;

  TC0->TC_CHANNEL[0].TC_CMR = TC_CMR_TCCLKS_TIMER_CLOCK5 | TC_CMR_CPCTRG;
  timer_set_period(PERIOD_SLOW);
  TC0->TC_CHANNEL[0].TC_IER = TC_IER_CPCS;
  TC0->TC_CHANNEL[0].TC_CCR = TC_CCR_CLKEN | TC_CCR_SWTRG;

  NVIC_EnableIRQ(TC0_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_TX_abcd(3);
  HAL_GPIO_UART_RX_abcd(0);

  PMC->PMC_PCER0 = PMC_PCER0_PID14;

  USART1->US_CR = US_CR_RXEN | US_CR_TXEN;
  USART1->US_MR = US_MR_USART_MODE_NORMAL | US_MR_CHRL_8_BIT | US_MR_PAR_NO |
      US_MR_NBSTOP_1_BIT;
  USART1->US_BRGR = US_BRGR_CD(F_CPU / 16 / baud);
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (0 == (USART1->US_CSR & US_CSR_TXEMPTY));
  USART1->US_THR = c;
}

//-----------------------------------------------------------------------------
static void uart_puts(char *s)
{
  while (*s)
    uart_putc(*s++);
}

//-----------------------------------------------------------------------------
static void sys_init(void)
{
  // Disable watchdog
  WDT->WDT_MR = WDT_MR_WDDIS;

  // Set flash wait states to maximum for 150 MHz operation
  EFC->EEFC_FMR = EEFC_FMR_FWS(5) | EEFC_FMR_CLOE;

  // Enable 32 kHz Xtal
  SUPC->SUPC_CR |= SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL;

  // Enable 12 MHz Xtal
  PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTST(8) |
      CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN;
  while (!(PMC->PMC_SR & PMC_SR_MOSCXTS));
    
  PMC->CKGR_MOR = CKGR_MOR_KEY_PASSWD | CKGR_MOR_MOSCXTST(8) |
      CKGR_MOR_MOSCRCEN | CKGR_MOR_MOSCXTEN | CKGR_MOR_MOSCSEL;
  while (!(PMC->PMC_SR & PMC_SR_MOSCSELS));

  // Setup PLL (12 MHz * 25 = 300 MHz)
  PMC->CKGR_PLLAR = CKGR_PLLAR_ONE | CKGR_PLLAR_MULA(25-1) |
      CKGR_PLLAR_PLLACOUNT(0x3f) | CKGR_PLLAR_DIVA(1);
  while (!(PMC->PMC_SR & PMC_SR_LOCKA));

  // Switch main clock to PLL (two step process)
  PMC->PMC_MCKR = PMC_MCKR_CSS_MAIN_CLK | PMC_MCKR_MDIV_PCK_DIV2;
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

  PMC->PMC_MCKR = PMC_MCKR_CSS_PLLA_CLK | PMC_MCKR_MDIV_PCK_DIV2;
  while (!(PMC->PMC_SR & PMC_SR_MCKRDY));

  // Enable PIOA, PIOB, PIOC, PIOD and PIOE
  PMC->PMC_PCER0 = PMC_PCER0_PID10 | PMC_PCER0_PID11 | PMC_PCER0_PID12 |
      PMC_PCER0_PID16 | PMC_PCER0_PID17;

  // Disable altenate functions on some pins
  MATRIX->CCFG_SYSIO |= CCFG_SYSIO_SYSIO4;
}

//-----------------------------------------------------------------------------
int main(void)
{
  uint32_t cnt = 0;
  bool fast = false;

  sys_init();
  timer_init();
  uart_init(115200);

  uart_puts("\r\nHello, world!\r\n");

  HAL_GPIO_LED_out();
  HAL_GPIO_LED_clr();

  HAL_GPIO_BUTTON_in();
  HAL_GPIO_BUTTON_pullup();

  while (1)
  {
    if (HAL_GPIO_BUTTON_read())
      cnt = 0;
    else if (cnt < 5001)
      cnt++;

    if (5000 == cnt)
    {
      fast = !fast;
      timer_set_period(fast ? PERIOD_FAST : PERIOD_SLOW);
      uart_putc('.');
    }
  }

  return 0;
}

