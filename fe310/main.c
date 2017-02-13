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
#include "hal_gpio.h"
#include "fe310_registers.h"

//-----------------------------------------------------------------------------
#define RTC_FREQUENCY   32768

#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED_R,     GPIO, 22)
HAL_GPIO_PIN(LED_G,     GPIO, 19)
HAL_GPIO_PIN(LED_B,     GPIO, 21)
HAL_GPIO_PIN(BUTTON,    GPIO, 0) // DIG 8
HAL_GPIO_PIN(UART_RX,   GPIO, 16)
HAL_GPIO_PIN(UART_TX,   GPIO, 17)

//-----------------------------------------------------------------------------
static void timer_set_period(int i)
{
  static int period = 0;

  if (i > 0)
    period = i;

  clear_csr(mie, MIP_MTIP);
  CLINT_MTIMECMP_REG = CLINT_MTIME_REG + (period * RTC_FREQUENCY) / 1000;
  set_csr(mie, MIP_MTIP);
}

//-----------------------------------------------------------------------------
void irq_handler_m_timer(void)
{
  static int cnt = 0;
  int index = (cnt / 2) % 3;
  int value = cnt % 2;

  if (0 == index)
    HAL_GPIO_LED_R_write(value);
  else if (1 == index)
    HAL_GPIO_LED_G_write(value);
  else if (2 == index)
    HAL_GPIO_LED_B_write(value);

  cnt++;

  timer_set_period(0);
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  timer_set_period(PERIOD_SLOW);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_RX_iof_en(1);
  HAL_GPIO_UART_RX_iof_sel(0);

  HAL_GPIO_UART_TX_iof_en(1);
  HAL_GPIO_UART_TX_iof_sel(0);

  UART0_REG(UART_REG_DIV) = F_CPU / baud - 1;
  UART0_REG(UART_REG_TXCTRL) |= UART_TXEN;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (UART0_REG(UART_REG_TXFIFO) & 0x80000000);
  UART0_REG(UART_REG_TXFIFO) = c;
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
  SPI0_REG(SPI_REG_SCKDIV) = 8; // TODO: This seems excessive

  PRCI_PLLDIV_REG = PLL_FINAL_DIV_BY_1(1) | PLL_FINAL_DIV(0);
  PRCI_PLLCFG_REG = PLL_REFSEL(0) | PLL_BYPASS(1) | PLL_R(1) | PLL_F(32-1) | PLL_Q(1);
  PRCI_PLLCFG_REG &= ~PLL_BYPASS(1);

  uint32_t start_time = CLINT_MTIME_LO_REG;
  while ((CLINT_MTIME_LO_REG - start_time) < 4);

  while (0 == (PRCI_PLLCFG_REG & PLL_LOCK(1)));

  PRCI_PLLCFG_REG |= PLL_SEL(1);

  if (read_csr(misa) & (1 << ('F' - 'A')))
  {
    write_csr(mstatus, MSTATUS_FS); // Allow FPU instructions without trapping
    write_csr(fcsr, 0); // Initialize rounding mode, undefined at reset
  }

  // Enable interrupts
  set_csr(mstatus, MSTATUS_MIE);
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

  HAL_GPIO_LED_R_out();
  HAL_GPIO_LED_R_clr();

  HAL_GPIO_LED_G_out();
  HAL_GPIO_LED_G_set();

  HAL_GPIO_LED_B_out();
  HAL_GPIO_LED_B_set();

  HAL_GPIO_BUTTON_in();
  HAL_GPIO_BUTTON_pullup(1);

  while (1)
  {
    if (HAL_GPIO_BUTTON_read())
      cnt = 0;
    else if (cnt < 50001)
      cnt++;

    if (50000 == cnt)
    {
      fast = !fast;
      timer_set_period(fast ? PERIOD_FAST : PERIOD_SLOW);
      uart_putc('.');
    }
  }

  return 0;
}

