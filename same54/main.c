/*
 * Copyright (c) 2017, Alex Taradov <alex@taradov.com>
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
#include "same54.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST    100
#define PERIOD_SLOW    500

HAL_GPIO_PIN(LED,      C, 18)
HAL_GPIO_PIN(BUTTON,   B, 31)
HAL_GPIO_PIN(UART_TX,  B, 25)
HAL_GPIO_PIN(UART_RX,  B, 24)

//-----------------------------------------------------------------------------
static void timer_set_period(uint16_t i)
{
  TC0->COUNT16.CC[0].reg = (F_CPU / 1000ul / 1024) * i;
  TC0->COUNT16.COUNT.reg = 0;
}

//-----------------------------------------------------------------------------
void irq_handler_tc0(void)
{
  if (TC0->COUNT16.INTFLAG.reg & TC_INTFLAG_MC(1))
  {
    HAL_GPIO_LED_toggle();
    TC0->COUNT16.INTFLAG.reg = TC_INTFLAG_MC(1);
  }
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  MCLK->APBAMASK.reg |= MCLK_APBAMASK_TC0;

  GCLK->PCHCTRL[TC0_GCLK_ID].reg = GCLK_PCHCTRL_GEN(0) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[TC0_GCLK_ID].reg & GCLK_PCHCTRL_CHEN));

  TC0->COUNT16.CTRLA.reg = TC_CTRLA_MODE_COUNT16 | TC_CTRLA_PRESCALER_DIV1024 |
      TC_CTRLA_PRESCSYNC_RESYNC;

  TC0->COUNT16.WAVE.reg = TC_WAVE_WAVEGEN_MFRQ;

  TC0->COUNT16.COUNT.reg = 0;

  timer_set_period(PERIOD_SLOW);

  TC0->COUNT16.CTRLA.reg |= TC_CTRLA_ENABLE;

  TC0->COUNT16.INTENSET.reg = TC_INTENSET_MC(1);

  NVIC_EnableIRQ(TC0_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_TX_out();
  HAL_GPIO_UART_TX_pmuxen(HAL_GPIO_PMUX_D);
  HAL_GPIO_UART_RX_in();
  HAL_GPIO_UART_RX_pmuxen(HAL_GPIO_PMUX_D);

  MCLK->APBBMASK.reg |= MCLK_APBBMASK_SERCOM2;

  GCLK->PCHCTRL[SERCOM2_GCLK_ID_CORE].reg = GCLK_PCHCTRL_GEN(0) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[SERCOM2_GCLK_ID_CORE].reg & GCLK_PCHCTRL_CHEN));

  SERCOM2->USART.CTRLA.reg =
      SERCOM_USART_CTRLA_DORD | SERCOM_USART_CTRLA_MODE(1/*INT_CLK*/) |
      SERCOM_USART_CTRLA_RXPO(1/*PAD1*/) | SERCOM_USART_CTRLA_TXPO(0/*PAD0*/) |
      SERCOM_USART_CTRLA_SAMPR(1);

  SERCOM2->USART.CTRLB.reg = SERCOM_USART_CTRLB_RXEN | SERCOM_USART_CTRLB_TXEN |
      SERCOM_USART_CTRLB_CHSIZE(0/*8 bits*/);

  #define BAUD_VAL (F_CPU / (16 * baud))
  #define FP_VAL   ((F_CPU / baud - 16 * BAUD_VAL) / 2)

  SERCOM2->USART.BAUD.reg = 
      SERCOM_USART_BAUD_FRACFP_BAUD(BAUD_VAL) |
      SERCOM_USART_BAUD_FRACFP_FP(FP_VAL);

  SERCOM2->USART.CTRLA.reg |= SERCOM_USART_CTRLA_ENABLE;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (!(SERCOM2->USART.INTFLAG.reg & SERCOM_USART_INTFLAG_DRE));
  SERCOM2->USART.DATA.reg = c;
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
  OSC32KCTRL->XOSC32K.reg = OSC32KCTRL_XOSC32K_ENABLE | OSC32KCTRL_XOSC32K_XTALEN |
      OSC32KCTRL_XOSC32K_EN32K | OSC32KCTRL_XOSC32K_RUNSTDBY | OSC32KCTRL_XOSC32K_STARTUP(7);
  while (0 == OSC32KCTRL->STATUS.bit.XOSC32KRDY);

  #define LDR (((unsigned long)F_CPU * 32) / 32768)

  GCLK->GENCTRL[1].reg = GCLK_GENCTRL_SRC(GCLK_SOURCE_XOSC32K) | GCLK_GENCTRL_RUNSTDBY | GCLK_GENCTRL_GENEN;

  GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL0].reg = GCLK_PCHCTRL_GEN(1) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL0].reg & GCLK_PCHCTRL_CHEN));

  GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL032K].reg = GCLK_PCHCTRL_GEN(1) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL032K].reg & GCLK_PCHCTRL_CHEN));

  OSCCTRL->Dpll[0].DPLLRATIO.reg = OSCCTRL_DPLLRATIO_LDRFRAC(LDR % 32) |
      OSCCTRL_DPLLRATIO_LDR((LDR / 32) - 1);
  OSCCTRL->Dpll[0].DPLLCTRLB.reg = OSCCTRL_DPLLCTRLB_REFCLK_XOSC32 |
      OSCCTRL_DPLLCTRLB_DIV(1) | OSCCTRL_DPLLCTRLB_WUF | OSCCTRL_DPLLCTRLB_LBYPASS;
  OSCCTRL->Dpll[0].DPLLCTRLA.reg = OSCCTRL_DPLLCTRLA_ENABLE | OSCCTRL_DPLLCTRLA_RUNSTDBY;

  while (0 == OSCCTRL->Dpll[0].DPLLSTATUS.bit.CLKRDY || 0 == OSCCTRL->Dpll[0].DPLLSTATUS.bit.LOCK);

  GCLK->GENCTRL[0].reg = GCLK_GENCTRL_SRC(GCLK_SOURCE_DPLL0) |
      GCLK_GENCTRL_RUNSTDBY | GCLK_GENCTRL_GENEN;
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

