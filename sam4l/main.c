/*
 * Copyright (c) 2019, Alex Taradov <alex@taradov.com>
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
#include "sam4l.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST    100
#define PERIOD_SLOW    500

HAL_GPIO_PIN(LED,      C, 7)
HAL_GPIO_PIN(BUTTON,   C, 24)
HAL_GPIO_PIN(UART_TX,  C, 27)
HAL_GPIO_PIN(UART_RX,  C, 26)

//-----------------------------------------------------------------------------
static void timer_set_period(int i)
{
  TC0->TC_CHANNEL[0].TC_RC = 32768ul * i / 1000ul;
  TC0->TC_CHANNEL[0].TC_CCR = TC_CCR_CLKEN | TC_CCR_SWTRG;
}

//-----------------------------------------------------------------------------
void irq_handler_tc00(void)
{
  if (TC0->TC_CHANNEL[0].TC_SR & TC_SR_CPCS)
  {
    HAL_GPIO_LED_toggle();
  }
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  PM->PM_PBAMASK |= PM_PBAMASK_TC0;

  TC0->TC_CHANNEL[0].TC_CMR = TC_CMR_TCCLKS_TIMER_CLOCK1 | TC_CMR_CPCTRG;
  timer_set_period(PERIOD_SLOW);
  TC0->TC_CHANNEL[0].TC_IER = TC_IER_CPCS;
  TC0->TC_CHANNEL[0].TC_CCR = TC_CCR_CLKEN | TC_CCR_SWTRG;

  NVIC_EnableIRQ(TC00_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  int cd_fp = F_CPU / (2 * baud);

  HAL_GPIO_UART_TX_pmr(HAL_GPIO_PMR_A);
  HAL_GPIO_UART_RX_pmr(HAL_GPIO_PMR_A);

  PM->PM_PBAMASK |= PM_PBAMASK_USART1;

  USART1->US_CR = US_CR_RXEN | US_CR_TXEN;
  USART1->US_MR = US_MR_USART_MODE_NORMAL | US_MR_USART_USCLKS_MCK |
      US_MR_USART_CHRL_8 | US_MR_USART_PAR_NONE | US_MR_USART_NBSTOP_1;
  USART1->US_BRGR = US_BRGR_CD(cd_fp / 8) | US_BRGR_FP(cd_fp % 8);
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (0 == (USART1->US_CSR & US_CSR_TXRDY));
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
  // Enable 12 MHz Xtal
  SCIF->SCIF_OSCCTRL0 = SCIF_OSCCTRL0_OSCEN | SCIF_OSCCTRL0_MODE | SCIF_OSCCTRL0_AGC |
      SCIF_OSCCTRL0_STARTUP(8) | SCIF_OSCCTRL0_GAIN(3);
  while (0 == (SCIF->SCIF_PCLKSR & SCIF_PCLKSR_OSC0RDY));

  // Enable 32 kHz Xtal
  BSCIF->BSCIF_OSCCTRL32 = BSCIF_OSCCTRL32_OSC32EN | BSCIF_OSCCTRL32_EN32K |
      BSCIF_OSCCTRL32_STARTUP(3) | BSCIF_OSCCTRL32_MODE(1) | BSCIF_OSCCTRL32_SELCURR(12);
  while (0 == (BSCIF->BSCIF_PCLKSR & BSCIF_PCLKSR_OSC32RDY));

  // Switch to 12 MHz RC oscillator
  PM->PM_MCCTRL = PM_MCCTRL_MCSEL(PM_MCCTRL_MCSEL_OSC0);

  // Enable cloc for the timer
  SCIF->SCIF_GCCTRL[5].SCIF_GCCTRL = SCIF_GCCTRL_OSCSEL(SCIF_GC_USES_CLK_32) | SCIF_GCCTRL_CEN;
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

