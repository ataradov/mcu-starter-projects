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
#include "stm32g0xx.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED,      D, 0)
HAL_GPIO_PIN(BUTTON,   B, 0)
HAL_GPIO_PIN(UART_RX,  A, 2)
HAL_GPIO_PIN(UART_TX,  A, 3)

//-----------------------------------------------------------------------------
static void timer_set_period(int i)
{
  TIM2->ARR = (F_CPU / 1000ul / 1000ul) * i;
  TIM2->CNT = 0;
}

//-----------------------------------------------------------------------------
void irq_handler_tim2(void)
{
  if (TIM2->SR & TIM_SR_UIF)
  {
    TIM2->SR &= ~TIM_SR_UIF;
    HAL_GPIO_LED_toggle();
  }
}

//-----------------------------------------------------------------------------
static void timer_init(void)
{
  RCC->APBENR1 |= RCC_APBENR1_TIM2EN;

  TIM2->PSC = 999;

  timer_set_period(PERIOD_SLOW);

  TIM2->CR1 |= TIM_CR1_CEN;
  TIM2->DIER = TIM_DIER_UIE;

  NVIC_EnableIRQ(TIM2_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_RX_alt(1);
  HAL_GPIO_UART_TX_alt(1);

  RCC->APBENR1 |= RCC_APBENR1_USART2EN;

  USART2->CR1 = USART_CR1_RE | USART_CR1_TE | USART_CR1_FIFOEN;
  USART2->BRR = (F_CPU / baud);
  USART2->CR1 |= USART_CR1_UE;
}

//-----------------------------------------------------------------------------
static void uart_putc(char c)
{
  while (0 == (USART2->ISR & USART_ISR_TXE_TXFNF));
  USART2->TDR = c;
}

//-----------------------------------------------------------------------------
static bool uart_getc(char *c)
{
  if (USART2->ISR & USART_ISR_RXNE_RXFNE)
  {
    *c = USART2->RDR;
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
  RCC->IOPENR = RCC_IOPENR_GPIOAEN | RCC_IOPENR_GPIOBEN | RCC_IOPENR_GPIOCEN |
      RCC_IOPENR_GPIODEN | RCC_IOPENR_GPIOFEN;
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
  HAL_GPIO_LED_set();

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

