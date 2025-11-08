// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2025, Alex Taradov <alex@taradov.com>. All rights reserved.

//-----------------------------------------------------------------------------
#include <stdlib.h>
#include <stdint.h>
#include <stdbool.h>
#include <string.h>
#include "stm32g441xx.h"
#include "hal_gpio.h"

//-----------------------------------------------------------------------------
#define PERIOD_FAST     100
#define PERIOD_SLOW     500

HAL_GPIO_PIN(LED,      B, 6)
HAL_GPIO_PIN(BUTTON,   B, 7)
HAL_GPIO_PIN(UART_TX,  B, 3)
HAL_GPIO_PIN(UART_RX,  B, 4)

//-----------------------------------------------------------------------------
static void timer_set_period(uint16_t i)
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
  RCC->APB1ENR1 |= RCC_APB1ENR1_TIM2EN;

  TIM2->PSC = 999;

  timer_set_period(PERIOD_SLOW);

  TIM2->CR1 |= TIM_CR1_CEN;
  TIM2->DIER = TIM_DIER_UIE;

  NVIC_EnableIRQ(TIM2_IRQn);
}

//-----------------------------------------------------------------------------
static void uart_init(uint32_t baud)
{
  HAL_GPIO_UART_RX_alt(7);
  HAL_GPIO_UART_TX_alt(7);

  RCC->APB1ENR1 |= RCC_APB1ENR1_USART2EN;

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
  RCC->AHB2ENR |= RCC_AHB2ENR_GPIOAEN | RCC_AHB2ENR_GPIOBEN | RCC_AHB2ENR_GPIOCEN |
      RCC_AHB2ENR_GPIODEN | RCC_AHB2ENR_GPIOEEN | RCC_AHB2ENR_GPIOFEN | RCC_AHB2ENR_GPIOGEN;

  PWR->CR5 = 0; // Boost mode

  FLASH->ACR = FLASH_ACR_LATENCY_4WS | FLASH_ACR_ICEN | FLASH_ACR_DCEN | FLASH_ACR_DBG_SWEN;

  RCC->CR = RCC_CR_HSEON | RCC_CR_HSEBYP;
  while (0 == (RCC->CR & RCC_CR_HSERDY));

  RCC->PLLCFGR = RCC_PLLCFGR_PLLSRC_HSE | RCC_PLLCFGR_PLLREN | (0/*1*/ << RCC_PLLCFGR_PLLM_Pos) |
      (28 << RCC_PLLCFGR_PLLN_Pos) | (0/*2*/ << RCC_PLLCFGR_PLLR_Pos);

  RCC->CR |= RCC_CR_PLLON;

  RCC->CFGR = (3/*PLL*/ << RCC_CFGR_SW_Pos);
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


