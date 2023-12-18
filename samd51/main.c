// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2023, Alex Taradov <alex@taradov.com>. All rights reserved.

//-----------------------------------------------------------------------------
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "samd51.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST    100
#define PERIOD_SLOW    500

HAL_GPIO_PIN(LED,      B, 3)
HAL_GPIO_PIN(BUTTON,   B, 9)
HAL_GPIO_PIN(UART_TX,  A, 16)
HAL_GPIO_PIN(UART_RX,  A, 17)

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
  HAL_GPIO_UART_TX_pmuxen(HAL_GPIO_PMUX_C);
  HAL_GPIO_UART_RX_in();
  HAL_GPIO_UART_RX_pmuxen(HAL_GPIO_PMUX_C);

  MCLK->APBAMASK.reg |= MCLK_APBAMASK_SERCOM1;

  GCLK->PCHCTRL[SERCOM1_GCLK_ID_CORE].reg = GCLK_PCHCTRL_GEN(0) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[SERCOM1_GCLK_ID_CORE].reg & GCLK_PCHCTRL_CHEN));

  SERCOM1->USART.CTRLA.reg =
      SERCOM_USART_CTRLA_DORD | SERCOM_USART_CTRLA_MODE(1/*INT_CLK*/) |
      SERCOM_USART_CTRLA_RXPO(1/*PAD1*/) | SERCOM_USART_CTRLA_TXPO(0/*PAD0*/) |
      SERCOM_USART_CTRLA_SAMPR(1);

  SERCOM1->USART.CTRLB.reg = SERCOM_USART_CTRLB_RXEN | SERCOM_USART_CTRLB_TXEN |
      SERCOM_USART_CTRLB_CHSIZE(0/*8 bits*/);

  #define BAUD_VAL (F_CPU / (16 * baud))
  #define FP_VAL   ((F_CPU / baud - 16 * BAUD_VAL) / 2)

  SERCOM1->USART.BAUD.reg =
      SERCOM_USART_BAUD_FRACFP_BAUD(BAUD_VAL) |
      SERCOM_USART_BAUD_FRACFP_FP(FP_VAL);

  SERCOM1->USART.CTRLA.reg |= SERCOM_USART_CTRLA_ENABLE;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (!(SERCOM1->USART.INTFLAG.reg & SERCOM_USART_INTFLAG_DRE));
  SERCOM1->USART.DATA.reg = c;
}

//-----------------------------------------------------------------------------
static bool uart_getc(char *c)
{
  if (SERCOM1->USART.INTFLAG.reg & SERCOM_USART_INTFLAG_RXC)
  {
    *c = SERCOM1->USART.DATA.reg;
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
  OSCCTRL->XOSCCTRL[0].reg = OSCCTRL_XOSCCTRL_ENABLE | OSCCTRL_XOSCCTRL_IMULT(4) |
      OSCCTRL_XOSCCTRL_IPTAT(3) | OSCCTRL_XOSCCTRL_STARTUP(7);

  GCLK->GENCTRL[1].reg = GCLK_GENCTRL_SRC(GCLK_SOURCE_OSCULP32K) | GCLK_GENCTRL_RUNSTDBY | GCLK_GENCTRL_GENEN;

  GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL032K].reg = GCLK_PCHCTRL_GEN(1) | GCLK_PCHCTRL_CHEN;
  while (0 == (GCLK->PCHCTRL[OSCCTRL_GCLK_ID_FDPLL032K].reg & GCLK_PCHCTRL_CHEN));

  #define LDR (((unsigned long)F_CPU * 32) / 1000000)

  OSCCTRL->Dpll[0].DPLLRATIO.reg = OSCCTRL_DPLLRATIO_LDRFRAC(LDR % 32) |
      OSCCTRL_DPLLRATIO_LDR((LDR / 32) - 1);
  OSCCTRL->Dpll[0].DPLLCTRLB.reg = OSCCTRL_DPLLCTRLB_REFCLK_XOSC0 |
      OSCCTRL_DPLLCTRLB_DIV(5) | OSCCTRL_DPLLCTRLB_WUF | OSCCTRL_DPLLCTRLB_LBYPASS;
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

