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
#include "stm32f411xe.h"

//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))

//-----------------------------------------------------------------------------
void irq_handler_reset(void);
DUMMY void irq_handler_nmi(void);
DUMMY void irq_handler_hard_fault(void);
DUMMY void irq_handler_mm_fault(void);
DUMMY void irq_handler_bus_fault(void);
DUMMY void irq_handler_usage_fault(void);
DUMMY void irq_handler_sv_call(void);
DUMMY void irq_handler_debug_mon(void);
DUMMY void irq_handler_pend_sv(void);
DUMMY void irq_handler_sys_tick(void);

DUMMY void irq_handler_wwdg(void);
DUMMY void irq_handler_pvd(void);
DUMMY void irq_handler_tamper_stamp(void);
DUMMY void irq_handler_rtc_wkup(void);
DUMMY void irq_handler_flash(void);
DUMMY void irq_handler_rcc(void);
DUMMY void irq_handler_exti0(void);
DUMMY void irq_handler_exti1(void);
DUMMY void irq_handler_exti2(void);
DUMMY void irq_handler_exti3(void);
DUMMY void irq_handler_exti4(void);
DUMMY void irq_handler_dma1_channel1(void);
DUMMY void irq_handler_dma1_channel2(void);
DUMMY void irq_handler_dma1_channel3(void);
DUMMY void irq_handler_dma1_channel4(void);
DUMMY void irq_handler_dma1_channel5(void);
DUMMY void irq_handler_dma1_channel6(void);
DUMMY void irq_handler_dma1_channel7(void);
DUMMY void irq_handler_adc1(void);
DUMMY void irq_handler_exti9_5(void);
DUMMY void irq_handler_timer1_brk_timer9(void);
DUMMY void irq_handler_timer1_up_timer10(void);
DUMMY void irq_handler_timer1_trg_cmt_timer11(void);
DUMMY void irq_handler_timer1_cc(void);
DUMMY void irq_handler_timer2(void);
DUMMY void irq_handler_timer3(void);
DUMMY void irq_handler_timer4(void);
DUMMY void irq_handler_i2c1_ev(void);
DUMMY void irq_handler_i2c1_er(void);
DUMMY void irq_handler_i2c2_ev(void);
DUMMY void irq_handler_i2c2_er(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_spi2(void);
DUMMY void irq_handler_usart1(void);
DUMMY void irq_handler_usart2(void);
DUMMY void irq_handler_exti15_10(void);
DUMMY void irq_handler_rtc_alarm(void);
DUMMY void irq_handler_otg_fs_wakeup(void);
DUMMY void irq_handler_dma1_channel8(void);
DUMMY void irq_handler_sdio(void);
DUMMY void irq_handler_timer5(void);
DUMMY void irq_handler_spi3(void);
DUMMY void irq_handler_dma2_channel1(void);
DUMMY void irq_handler_dma2_channel2(void);
DUMMY void irq_handler_dma2_channel3(void);
DUMMY void irq_handler_dma2_channel4(void);
DUMMY void irq_handler_dma2_channel5(void);
DUMMY void irq_handler_otg_fs(void);
DUMMY void irq_handler_dma2_channel6(void);
DUMMY void irq_handler_dma2_channel7(void);
DUMMY void irq_handler_dma2_channel8(void);
DUMMY void irq_handler_usart6(void);
DUMMY void irq_handler_i2c3_ev(void);
DUMMY void irq_handler_i2c3_er(void);
DUMMY void irq_handler_fpu(void);
DUMMY void irq_handler_spi4(void);
DUMMY void irq_handler_spi5(void);

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

  // Cortex-M4 handlers
  irq_handler_reset,             // 1 - Reset
  irq_handler_nmi,               // 2 - NMI
  irq_handler_hard_fault,        // 3 - Hard Fault
  irq_handler_mm_fault,          // 4 - MM Fault
  irq_handler_bus_fault,         // 5 - Bus Fault
  irq_handler_usage_fault,       // 6 - Usage Fault
  0,                             // 7 - Reserved
  0,                             // 8 - Reserved
  0,                             // 9 - Reserved
  0,                             // 10 - Reserved
  irq_handler_sv_call,           // 11 - SVCall
  irq_handler_debug_mon,         // 12 - Debug
  0,                             // 13 - Reserved
  irq_handler_pend_sv,           // 14 - PendSV
  irq_handler_sys_tick,          // 15 - SysTick

  // Peripheral handlers
  irq_handler_wwdg,                   // 0 - Window Watchdog Timer
  irq_handler_pvd,                    // 1 - PVD from EXTI
  irq_handler_tamper_stamp,           // 2 - RTC Tamper and TimeStamp from EXTI
  irq_handler_rtc_wkup,               // 3 - RTC Wakeup from EXTI
  irq_handler_flash,                  // 4 - Flash
  irq_handler_rcc,                    // 5 - RCC
  irq_handler_exti0,                  // 6 - EXTI Line 0
  irq_handler_exti1,                  // 7 - EXTI Line 1
  irq_handler_exti2,                  // 8 - EXTI Line 2
  irq_handler_exti3,                  // 9 - EXTI Line 3
  irq_handler_exti4,                  // 10 - EXTI Line 4
  irq_handler_dma1_channel1,          // 11 - DMA1 Channel 1
  irq_handler_dma1_channel2,          // 12 - DMA1 Channel 2
  irq_handler_dma1_channel3,          // 13 - DMA1 Channel 3
  irq_handler_dma1_channel4,          // 14 - DMA1 Channel 4
  irq_handler_dma1_channel5,          // 15 - DMA1 Channel 5
  irq_handler_dma1_channel6,          // 16 - DMA1 Channel 6
  irq_handler_dma1_channel7,          // 17 - DMA1 Channel 7
  irq_handler_adc1,                   // 18 - ADC1
  0,                                  // 19
  0,                                  // 20
  0,                                  // 21
  0,                                  // 22
  irq_handler_exti9_5,                // 23 - EXTI Line [9:5]
  irq_handler_timer1_brk_timer9,      // 24 - TIMER1 Break and TIMER15
  irq_handler_timer1_up_timer10,      // 25 - TIMER1 Update and TIMER16
  irq_handler_timer1_trg_cmt_timer11, // 26 - TIMER1 Trigger and Channel Commutation and TIMER17
  irq_handler_timer1_cc,              // 27 - TIMER1 Capture Compare
  irq_handler_timer2,                 // 28 - TIMER2
  irq_handler_timer3,                 // 29 - TIMER3
  irq_handler_timer4,                 // 30 - TIMER4
  irq_handler_i2c1_ev,                // 31 - I2C1 Event
  irq_handler_i2c1_er,                // 32 - I2C1 Error
  irq_handler_i2c2_ev,                // 33 - I2C2 Event
  irq_handler_i2c2_er,                // 34 - I2C2 Error
  irq_handler_spi1,                   // 35 - SPI1
  irq_handler_spi2,                   // 36 - SPI2
  irq_handler_usart1,                 // 37 - USART1
  irq_handler_usart2,                 // 38 - USART2
  0,                                  // 39
  irq_handler_exti15_10,              // 40 - EXTI Line [15:10]
  irq_handler_rtc_alarm,              // 41 - RTC Alarm from EXTI
  irq_handler_otg_fs_wakeup,          // 42 - USBFS
  0,                                  // 43
  0,                                  // 44
  0,                                  // 45
  0,                                  // 46
  irq_handler_dma1_channel8,          // 47 - DMA1 Channel 8
  0,                                  // 48
  irq_handler_sdio,                   // 49 - SDIO
  irq_handler_timer5,                 // 50 - TIMER5
  irq_handler_spi3,                   // 51 - SPI3
  0,                                  // 52
  0,                                  // 53
  0,                                  // 54
  0,                                  // 55
  irq_handler_dma2_channel1,          // 56 - DMA2 Channel 1
  irq_handler_dma2_channel2,          // 57 - DMA2 Channel 2
  irq_handler_dma2_channel3,          // 58 - DMA2 Channel 3
  irq_handler_dma2_channel4,          // 59 - DMA2 Channel 4
  irq_handler_dma2_channel5,          // 60 - DMA2 Channel 5
  0,                                  // 61
  0,                                  // 62
  0,                                  // 63
  0,                                  // 64
  0,                                  // 65
  0,                                  // 66
  irq_handler_otg_fs,                 // 67 - USBFS
  irq_handler_dma2_channel6,          // 68 - DMA2 Channel 6
  irq_handler_dma2_channel7,          // 69 - DMA2 Channel 7
  irq_handler_dma2_channel8,          // 70 - DMA2 Channel 8
  irq_handler_usart6,                 // 71 - USART6
  irq_handler_i2c3_ev,                // 72 - I2C3 Event
  irq_handler_i2c3_er,                // 73 - I2C3 Error
  0,                                  // 74
  0,                                  // 75
  0,                                  // 76
  0,                                  // 77
  0,                                  // 78
  0,                                  // 79
  0,                                  // 80
  irq_handler_fpu,                    // 81 - FPU
  0,                                  // 82
  0,                                  // 83
  irq_handler_spi4,                   // 84 - SPI4
  irq_handler_spi5                    // 85 - SPI5
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
