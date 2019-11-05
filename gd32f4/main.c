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
#include "gd32f4xx.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define F_APB1          (F_CPU / 4)
#define F_APB2          (F_CPU / 2)
#define F_CK_TIMER6     (F_APB1 * 2)

#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED,      A, 3)
HAL_GPIO_PIN(BUTTON,   A, 2)
HAL_GPIO_PIN(UART_TX,  A, 0)
HAL_GPIO_PIN(UART_RX,  A, 1)

//-----------------------------------------------------------------------------
static void timer_set_period(uint16_t i)
{
  TIMER6->CAR = (F_CK_TIMER6 / 1000ul / 1000ul) * i;
  TIMER6->CNT = 0;
}

//-----------------------------------------------------------------------------
void irq_handler_timer6(void)
{
  if (TIMER6->INTF & TIMER6_INTF_UPIF_Msk)
  {
    TIMER6->INTF = 0;
    HAL_GPIO_LED_toggle();
  }
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  RCU->APB1EN_b.TIMER6EN = 1;

  TIMER6->PSC = 999;

  timer_set_period(PERIOD_SLOW);

  TIMER6->CTL0 |= TIMER6_CTL0_CEN_Msk;
  TIMER6->DMAINTEN = TIMER6_DMAINTEN_UPIE_Msk;

  NVIC_EnableIRQ(TIMER6_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_RX_alt(8);
  HAL_GPIO_UART_TX_alt(8);

  RCU->APB1EN_b.UART3EN = 1;

  UART3->CTL0 = UART3_CTL0_REN_Msk | UART3_CTL0_TEN_Msk;
  UART3->BAUD = (F_APB1 / baud);
  UART3->CTL0 |= UART3_CTL0_UEN_Msk;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (0 == (UART3->STAT0 & UART3_STAT0_TBE_Msk));
  UART3->DATA = c;
}

//-----------------------------------------------------------------------------
static bool uart_getc(char *c)
{
  if (UART3->STAT0 & UART3_STAT0_RBNE_Msk)
  {
    *c = UART3->DATA;
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
  RCU->AHB1EN |= RCU_AHB1EN_PAEN_Msk | RCU_AHB1EN_PBEN_Msk | RCU_AHB1EN_PCEN_Msk |
      RCU_AHB1EN_PDEN_Msk | RCU_AHB1EN_PEEN_Msk | RCU_AHB1EN_PFEN_Msk |
      RCU_AHB1EN_PGEN_Msk | RCU_AHB1EN_PHEN_Msk | RCU_AHB1EN_PIEN_Msk;

  RCU->CTL_b.HXTALEN = 1;
  while (0 == RCU->CTL_b.HXTALSTB);

  RCU->PLL = RCU_PLL_PLLSEL_Msk | (12 << RCU_PLL_PLLPSC_Pos) | (336 << RCU_PLL_PLLN_Pos) |
      (0 << RCU_PLL_PLLP_Pos) | (15 << RCU_PLL_PLLQ_Pos);

  RCU->CTL_b.PLLEN = 1;
  while (0 == RCU->CTL_b.PLLSTB);

  RCU->CFG0 = (2/*CK_PLLP*/ << RCU_CFG0_SCS_Pos) | (0/*CK_SYS*/ << RCU_CFG0_AHBPSC_Pos) |
      (5/*DIV 4*/ << RCU_CFG0_APB1PSC_Pos) | (4/*DIV 2*/ << RCU_CFG0_APB2PSC_Pos) |
      (0 << RCU_CFG0_RTCDIV_Pos);
  while (RCU->CFG0_b.SCSS != 2);
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
    else if (cnt < 5001)
      cnt++;

    if (5000 == cnt)
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

