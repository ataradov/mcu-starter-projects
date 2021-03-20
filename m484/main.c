/*
 * Copyright (c) 2021, Alex Taradov <alex@taradov.com>
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
#include "M480.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define SET_FIELD(p, r, f, v) p->r = (p->r & ~p##_##r##_##f##_Msk) | ((v) << p##_##r##_##f##_Pos)

#define F_HXT          12000000
#define F_HCLK         192000000
#define F_PCLK0        (F_HCLK / 2)
#define F_PCLK1        (F_HCLK / 2)

#define PERIOD_FAST    100
#define PERIOD_SLOW    500

HAL_GPIO_PIN(LED,      C, 14)
HAL_GPIO_PIN(BUTTON,   B, 15)
HAL_GPIO_PIN(UART_TX,  C, 1)
HAL_GPIO_PIN(UART_RX,  C, 0)

//-----------------------------------------------------------------------------
static void timer_set_period(int i)
{
  TIMER0->CNT = 0;
  TIMER0->CMP = (F_HXT * i) / 1000;
}

//-----------------------------------------------------------------------------
void irq_handler_tmr0(void)
{
  TIMER0->INTSTS = TIMER_INTSTS_TIF_Msk;
  HAL_GPIO_LED_toggle();
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  SET_FIELD(CLK, CLKSEL1, TMR0SEL, 0/*HXT*/);
  CLK->APBCLK0 |= CLK_APBCLK0_TMR0CKEN_Msk;

  timer_set_period(PERIOD_SLOW);

  TIMER0->CTL = TIMER_CTL_INTEN_Msk | TIMER_CTL_CNTEN_Msk |
      (1/*PERIODIC*/ << TIMER_CTL_OPMODE_Pos);

  NVIC_EnableIRQ(TMR0_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  SET_FIELD(CLK, CLKSEL3, UART2SEL, 1/*PLL*/);
  CLK->APBCLK0 |= CLK_APBCLK0_UART2CKEN_Msk;

  HAL_GPIO_UART_TX_mfp(8);
  HAL_GPIO_UART_RX_mfp(8);

  UART2->LINE = (3/*8-bit*/ << UART_LINE_WLS_Pos);
  UART2->BAUD = UART_BAUD_BAUDM0_Msk | UART_BAUD_BAUDM1_Msk | (F_HCLK / baud - 2);
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (UART2->FIFOSTS & UART_FIFOSTS_TXFULL_Msk);
  UART2->DAT = c;
}

//-----------------------------------------------------------------------------
static bool uart_getc(char *c)
{
  if (0 == (UART2->FIFOSTS & UART_FIFOSTS_RXEMPTY_Msk))
  {
    *c = UART2->DAT;
    return true;
  }

  return false;
}

//-----------------------------------------------------------------------------
static void uart_puts(char *s)
{
  while (*s)
    uart_putc(*s++);
}

//-----------------------------------------------------------------------------
static char invert_case(char c)
{
  if ('a' <= c && c <= 'z')
    return c + ('A' - 'a');
  else if ('A' <= c && c <= 'Z')
    return c - ('A' - 'a');
  return c;
}

//-----------------------------------------------------------------------------
static void sys_init(void)
{
  // Unlock the registers
  SYS->REGLCTL = 0x59;
  SYS->REGLCTL = 0x16;
  SYS->REGLCTL = 0x88;

  // Set flash wait states
  SET_FIELD(FMC, CYCCTL, CYCLE, 8);

  // Configure power down bias
  CLK->LDOCTL |= CLK_LDOCTL_PDBIASEN_Msk;

  // Switch PF4-PF11 to GPIO
  CLK->APBCLK0 |= CLK_APBCLK0_RTCCKEN_Msk;
  RTC->GPIOCTL0 &= ~(RTC_GPIOCTL0_CTLSEL0_Msk | RTC_GPIOCTL0_CTLSEL1_Msk |
      RTC_GPIOCTL0_CTLSEL2_Msk | RTC_GPIOCTL0_CTLSEL3_Msk);
  RTC->GPIOCTL1 &= ~(RTC_GPIOCTL1_CTLSEL4_Msk | RTC_GPIOCTL1_CTLSEL5_Msk |
      RTC_GPIOCTL1_CTLSEL6_Msk | RTC_GPIOCTL1_CTLSEL7_Msk);
  CLK->APBCLK0 &= ~CLK_APBCLK0_RTCCKEN_Msk;

  // Enable 12 MHz oscillator
  PF->MODE &= ~(GPIO_MODE_MODE2_Msk | GPIO_MODE_MODE3_Msk); // Switch PF2 and PF3 to inputs
  CLK->PWRCTL |= CLK_PWRCTL_HXTEN_Msk;
  while (0 == (CLK->STATUS & CLK_STATUS_HXTSTB_Msk));

  // Enable PLL (12 MHz / 2 * 32 = 192 MHz)
  CLK->PLLCTL = ((2-1) << CLK_PLLCTL_INDIV_Pos) | ((32-2) << CLK_PLLCTL_FBDIV_Pos) |
      (1 << CLK_PLLCTL_OUTDIV_Pos);
  while (0 == (CLK->STATUS & CLK_STATUS_PLLSTB_Msk));

  // Switch the system to PLL
  CLK->PCLKDIV = (1/*1/2 HCLK*/ << CLK_PCLKDIV_APB0DIV_Pos) |
                 (1/*1/2 HCLK*/ << CLK_PCLKDIV_APB1DIV_Pos);
  SET_FIELD(CLK, CLKSEL0, HCLKSEL, 2/*PLL*/);
}

//-----------------------------------------------------------------------------
int main(void)
{
  uint32_t cnt = 0;
  bool fast = false;
  char rxch;

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
    else if (cnt < 10001)
      cnt++;

    if (10000 == cnt)
    {
      fast = !fast;
      timer_set_period(fast ? PERIOD_FAST : PERIOD_SLOW);
      uart_putc('.');
    }

    if (uart_getc(&rxch))
    {
      uart_putc(fast ? invert_case(rxch) : rxch);
    }
  }

  return 0;
}


