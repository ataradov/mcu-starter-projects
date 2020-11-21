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
#include "stm32g0xx.h"

//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))

//-----------------------------------------------------------------------------
void irq_handler_reset(void);
DUMMY void irq_handler_nmi(void);
DUMMY void irq_handler_hard_fault(void);
DUMMY void irq_handler_sv_call(void);
DUMMY void irq_handler_pend_sv(void);
DUMMY void irq_handler_sys_tick(void);

DUMMY void irq_handler_wwdg(void);
DUMMY void irq_handler_pvd(void);
DUMMY void irq_handler_rtc_tamp(void);
DUMMY void irq_handler_flash(void);
DUMMY void irq_handler_rcc(void);
DUMMY void irq_handler_exti0_1(void);
DUMMY void irq_handler_exti2_3(void);
DUMMY void irq_handler_exti4_15(void);
DUMMY void irq_handler_ucpd1_2(void);
DUMMY void irq_handler_dma1_ch1(void);
DUMMY void irq_handler_dma1_ch2_3(void);
DUMMY void irq_handler_dma1_ch4_7_dmamux1_ovr(void);
DUMMY void irq_handler_adc1_comp(void);
DUMMY void irq_handler_tim1_brk_up_trg_com(void);
DUMMY void irq_handler_tim1_cc(void);
DUMMY void irq_handler_tim2(void);
DUMMY void irq_handler_tim3(void);
DUMMY void irq_handler_tim6_dac_lptim1(void);
DUMMY void irq_handler_tim7_lptim2(void);
DUMMY void irq_handler_tim14(void);
DUMMY void irq_handler_tim15(void);
DUMMY void irq_handler_tim16(void);
DUMMY void irq_handler_tim17(void);
DUMMY void irq_handler_i2c1(void);
DUMMY void irq_handler_i2c2(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_spi2(void);
DUMMY void irq_handler_usart_1(void);
DUMMY void irq_handler_usart_2(void);
DUMMY void irq_handler_usart_3_4_lpuart_1(void);
DUMMY void irq_handler_cec(void);
DUMMY void irq_handler_aes_rng(void);

extern int main(void);

extern void _stack_top(void);
extern unsigned int _etext;
extern unsigned int _data;
extern unsigned int _edata;
extern unsigned int _bss;
extern unsigned int _ebss;

//-----------------------------------------------------------------------------
__attribute__ ((used, section(".vectors")))
void (* const vectors[])(void) =
{
  &_stack_top,                   // 0 - Initial Stack Pointer Value

  // Cortex-M0+ handlers
  irq_handler_reset,             // 1 - Reset
  irq_handler_nmi,               // 2 - NMI
  irq_handler_hard_fault,        // 3 - Hard Fault
  0,                             // 4 - Reserved
  0,                             // 5 - Reserved
  0,                             // 6 - Reserved
  0,                             // 7 - Reserved
  0,                             // 8 - Reserved
  0,                             // 9 - Reserved
  0,                             // 10 - Reserved
  irq_handler_sv_call,           // 11 - SVCall
  0,                             // 12 - Reserved
  0,                             // 13 - Reserved
  irq_handler_pend_sv,           // 14 - PendSV
  irq_handler_sys_tick,          // 15 - SysTick

  // Peripheral handlers
  irq_handler_wwdg,                    // 0 - Window WatchDog
  irq_handler_pvd,                     // 1 - PVD through EXTI Line detection (EXTI line 16)
  irq_handler_rtc_tamp,                // 2 - RTC interrupt through the EXTI line 19 & 21
  irq_handler_flash,                   // 3 - FLASH
  irq_handler_rcc,                     // 4 - RCC
  irq_handler_exti0_1,                 // 5 - EXTI 0 and 1
  irq_handler_exti2_3,                 // 6 - EXTI 2 and 3
  irq_handler_exti4_15,                // 7 - EXTI 4 to 15
  irq_handler_ucpd1_2,                 // 8 - UCPD1 and UCPD2
  irq_handler_dma1_ch1,                // 9 - DMA1 Channel 1
  irq_handler_dma1_ch2_3,              // 10 - DMA1 Channel 2 and Channel 3
  irq_handler_dma1_ch4_7_dmamux1_ovr,  // 11 - DMA1 Channel 4 to Channel 7 and DMAMUX1 Overrun
  irq_handler_adc1_comp,               // 12 - ADC1, COMP1 and COMP2 (combined with EXTI 17 & 18)
  irq_handler_tim1_brk_up_trg_com,     // 13 - TIM1 Break, Update, Trigger and Commutation
  irq_handler_tim1_cc,                 // 14 - TIM1 Capture Compare
  irq_handler_tim2,                    // 15 - TIM2
  irq_handler_tim3,                    // 16 - TIM3
  irq_handler_tim6_dac_lptim1,         // 17 - TIM6, DAC and LPTIM1
  irq_handler_tim7_lptim2,             // 18 - TIM7 and LPTIM2
  irq_handler_tim14,                   // 19 - TIM14
  irq_handler_tim15,                   // 20 - TIM15
  irq_handler_tim16,                   // 21 - TIM16
  irq_handler_tim17,                   // 22 - TIM17
  irq_handler_i2c1,                    // 23 - I2C1 (combined with EXTI 23)
  irq_handler_i2c2,                    // 24 - I2C2
  irq_handler_spi1,                    // 25 - SPI1
  irq_handler_spi2,                    // 26 - SPI2
  irq_handler_usart_1,                 // 27 - USART1
  irq_handler_usart_2,                 // 28 - USART2
  irq_handler_usart_3_4_lpuart_1,      // 29 - USART3, USART4 and LPUART1 (combined with EXTI 28)
  irq_handler_cec,                     // 30 - CEC (combined with EXTI 27)
  irq_handler_aes_rng,                 // 31 - AES and RNG Interrupt
};

//-----------------------------------------------------------------------------
void irq_handler_reset(void)
{
  unsigned int *src, *dst;

  src = &_etext;
  dst = &_data;
  while (dst < &_edata)
    *dst++ = *src++;

  dst = &_bss;
  while (dst < &_ebss)
    *dst++ = 0;

  SCB->VTOR = (uint32_t)vectors;

  main();

  while (1);
}

//-----------------------------------------------------------------------------
void irq_handler_dummy(void)
{
  while (1);
}


