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
#include "samg55.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED,      A, 6)
HAL_GPIO_PIN(BUTTON,   A, 2)
HAL_GPIO_PIN(UART_TX,  A, 28)
HAL_GPIO_PIN(UART_RX,  A, 27)

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

  PMC->PMC_SCDR = PMC_SCDR_PCK3;
  PMC->PMC_PCK[3] = PMC_PCK_CSS_SLOW_CLK | PMC_PCK_PRES_CLK_1;
  PMC->PMC_SCER = PMC_SCER_PCK3;

  TC0->TC_CHANNEL[0].TC_CMR = TC_CMR_TCCLKS_TIMER_CLOCK5 | TC_CMR_CPCTRG;
  timer_set_period(PERIOD_SLOW);
  TC0->TC_CHANNEL[0].TC_IER = TC_IER_CPCS;
  TC0->TC_CHANNEL[0].TC_CCR = TC_CCR_CLKEN | TC_CCR_SWTRG;

  NVIC_EnableIRQ(TC0_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_TX_abcd(1);
  HAL_GPIO_UART_RX_abcd(1);

  PMC->PMC_PCER0 = (1 << 7/*USART7*/);

  FLEXCOM7->FLEXCOM_MR = FLEXCOM_MR_OPMODE_USART;

  USART7->US_CR = US_CR_RXEN | US_CR_TXEN;
  USART7->US_MR = US_MR_USART_MODE_NORMAL | US_MR_CHRL_8_BIT | US_MR_PAR_NO |
      US_MR_NBSTOP_1_BIT;

  USART7->US_BRGR = US_BRGR_CD(F_CPU / 16 / baud);
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (0 == (USART7->US_CSR & US_CSR_TXRDY));
  USART7->US_THR = c;
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

  // Set flash wait states to maximum for 120 MHz operation
  EFC->EEFC_FMR = EEFC_FMR_FWS(8) | EEFC_FMR_CLOE;

  // Enable 32 kHz Xtal
  SUPC->SUPC_CR |= SUPC_CR_KEY_PASSWD | SUPC_CR_XTALSEL;

  // Setup PLLA to generate 120 MHz (32768 * 3662 = 119996416)
  PMC->CKGR_PLLAR = CKGR_PLLAR_MULA(3662-1) | CKGR_PLLAR_PLLACOUNT(0x3f) | CKGR_PLLAR_PLLAEN(1);
  while (0 == (PMC->PMC_SR & PMC_SR_LOCKA));

  // Switch main system clock to PLLA
  PMC->PMC_MCKR = PMC_MCKR_PRES_CLK_1 | PMC_MCKR_CSS_PLLA_CLK;
  while (0 == (PMC->PMC_SR & PMC_SR_MCKRDY));

  // Enable PIOA and PIOB
  PMC->PMC_PCER0 = PMC_PCER0_PID11 | PMC_PCER0_PID12;
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

