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

/*- Includes ----------------------------------------------------------------*/
#include "gd32f4xx.h"

/*- Definitions -------------------------------------------------------------*/
#define DUMMY  __attribute__ ((weak, alias ("irq_handler_dummy")))

/*- Prototypes --------------------------------------------------------------*/
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

DUMMY void irq_handler_wwdgt(void);
DUMMY void irq_handler_lvd(void);
DUMMY void irq_handler_tamper_stamp(void);
DUMMY void irq_handler_rtc_wkup(void);
DUMMY void irq_handler_fmc(void);
DUMMY void irq_handler_rcu_ctc(void);
DUMMY void irq_handler_exti0(void);
DUMMY void irq_handler_exti1(void);
DUMMY void irq_handler_exti2(void);
DUMMY void irq_handler_exti3(void);
DUMMY void irq_handler_exti4(void);
DUMMY void irq_handler_dma0_channel0(void);
DUMMY void irq_handler_dma0_channel1(void);
DUMMY void irq_handler_dma0_channel2(void);
DUMMY void irq_handler_dma0_channel3(void);
DUMMY void irq_handler_dma0_channel4(void);
DUMMY void irq_handler_dma0_channel5(void);
DUMMY void irq_handler_dma0_channel6(void);
DUMMY void irq_handler_adc(void);
DUMMY void irq_handler_can0_tx(void);
DUMMY void irq_handler_can0_rx0(void);
DUMMY void irq_handler_can0_rx1(void);
DUMMY void irq_handler_can0_ewmc(void);
DUMMY void irq_handler_exti9_5(void);
DUMMY void irq_handler_timer0_brk_timer8(void);
DUMMY void irq_handler_timer0_up_timer9(void);
DUMMY void irq_handler_timer0_trg_cmt_timer10(void);
DUMMY void irq_handler_timer0_cc(void);
DUMMY void irq_handler_timer1(void);
DUMMY void irq_handler_timer2(void);
DUMMY void irq_handler_timer3(void);
DUMMY void irq_handler_i2c0_ev(void);
DUMMY void irq_handler_i2c0_er(void);
DUMMY void irq_handler_i2c1_ev(void);
DUMMY void irq_handler_i2c1_er(void);
DUMMY void irq_handler_spi0(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_usart0(void);
DUMMY void irq_handler_usart1(void);
DUMMY void irq_handler_usart2(void);
DUMMY void irq_handler_exti15_10(void);
DUMMY void irq_handler_rtc_alarm(void);
DUMMY void irq_handler_otg_fs_wkup(void);
DUMMY void irq_handler_timer7_brk_timer11(void);
DUMMY void irq_handler_timer7_up_timer12(void);
DUMMY void irq_handler_timer7_trg_cmt_timer13(void);
DUMMY void irq_handler_timer7_cc(void);
DUMMY void irq_handler_dma0_channel7(void);
DUMMY void irq_handler_exmc(void);
DUMMY void irq_handler_sdio(void);
DUMMY void irq_handler_timer4(void);
DUMMY void irq_handler_spi2(void);
DUMMY void irq_handler_uart3(void);
DUMMY void irq_handler_uart4(void);
DUMMY void irq_handler_timer5_dac(void);
DUMMY void irq_handler_timer6(void);
DUMMY void irq_handler_dma1_channel0(void);
DUMMY void irq_handler_dma1_channel1(void);
DUMMY void irq_handler_dma1_channel2(void);
DUMMY void irq_handler_dma1_channel3(void);
DUMMY void irq_handler_dma1_channel4(void);
DUMMY void irq_handler_enet(void);
DUMMY void irq_handler_enet_wkup(void);
DUMMY void irq_handler_can1_tx(void);
DUMMY void irq_handler_can1_rx0(void);
DUMMY void irq_handler_can1_rx1(void);
DUMMY void irq_handler_can1_ewmc(void);
DUMMY void irq_handler_otg_fs(void);
DUMMY void irq_handler_dma1_channel5(void);
DUMMY void irq_handler_dma1_channel6(void);
DUMMY void irq_handler_dma1_channel7(void);
DUMMY void irq_handler_usart5(void);
DUMMY void irq_handler_i2c2_ev(void);
DUMMY void irq_handler_i2c2_er(void);
DUMMY void irq_handler_usbhs_ep1_out(void);
DUMMY void irq_handler_usbhs_ep1_in(void);
DUMMY void irq_handler_usbhs_wkup(void);
DUMMY void irq_handler_usbhs(void);
DUMMY void irq_handler_dci(void);
DUMMY void irq_handler_trng(void);
DUMMY void irq_handler_fpu(void);
DUMMY void irq_handler_uart6(void);
DUMMY void irq_handler_uart7(void);
DUMMY void irq_handler_spi3(void);
DUMMY void irq_handler_spi4(void);
DUMMY void irq_handler_spi5(void);
DUMMY void irq_handler_tli(void);
DUMMY void irq_handler_tli_er(void);
DUMMY void irq_handler_ipa(void);

int main(void);

extern void _stack_top(void);
extern unsigned int _etext;
extern unsigned int _data;
extern unsigned int _edata;
extern unsigned int _bss;
extern unsigned int _ebss;

/*- Variables ---------------------------------------------------------------*/

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
  irq_handler_wwdgt,             // 0 - Window Watchdog Timer
  irq_handler_lvd,               // 1 - LVD from EXTI
  irq_handler_tamper_stamp,      // 2 - RTC Tamper and TimeStamp from EXTI
  irq_handler_rtc_wkup,          // 3 - RTC Wakeup from EXTI
  irq_handler_fmc,               // 4 - FMC
  irq_handler_rcu_ctc,           // 5 - RCU and CTC
  irq_handler_exti0,             // 6 - EXTI Line 0
  irq_handler_exti1,             // 7 - EXTI Line 1
  irq_handler_exti2,             // 8 - EXTI Line 2
  irq_handler_exti3,             // 9 - EXTI Line 3
  irq_handler_exti4,             // 10 - EXTI Line 4
  irq_handler_dma0_channel0,     // 11 - DMA0 Channel 0
  irq_handler_dma0_channel1,     // 12 - DMA0 Channel 1
  irq_handler_dma0_channel2,     // 13 - DMA0 Channel 2
  irq_handler_dma0_channel3,     // 14 - DMA0 Channel 3
  irq_handler_dma0_channel4,     // 15 - DMA0 Channel 4
  irq_handler_dma0_channel5,     // 16 - DMA0 Channel 5
  irq_handler_dma0_channel6,     // 17 - DMA0 Channel 6
  irq_handler_adc,               // 18 - ADC
  irq_handler_can0_tx,           // 19 - CAN0 TX
  irq_handler_can0_rx0,          // 20 - CAN0 RX0
  irq_handler_can0_rx1,          // 21 - CAN0 RX1
  irq_handler_can0_ewmc,         // 22 - CAN0 EWMC
  irq_handler_exti9_5,           // 23 - EXTI Line [9:5]
  irq_handler_timer0_brk_timer8, // 24 - TIMER0 Break and TIMER8
  irq_handler_timer0_up_timer9,  // 25 - TIMER0 Update and TIMER9
  irq_handler_timer0_trg_cmt_timer10, // 26 - TIMER0 Trigger and Channel Commutation and TIMER10
  irq_handler_timer0_cc,         // 27 - TIMER0 Capture Compare
  irq_handler_timer1,            // 28 - TIMER1
  irq_handler_timer2,            // 29 - TIMER2
  irq_handler_timer3,            // 30 - TIMER3
  irq_handler_i2c0_ev,           // 31 - I2C0 Event
  irq_handler_i2c0_er,           // 32 - I2C0 Error
  irq_handler_i2c1_ev,           // 33 - I2C1 Event
  irq_handler_i2c1_er,           // 34 - I2C1 Error
  irq_handler_spi0,              // 35 - SPI0
  irq_handler_spi1,              // 36 - SPI1
  irq_handler_usart0,            // 37 - USART0
  irq_handler_usart1,            // 38 - USART1
  irq_handler_usart2,            // 39 - USART2
  irq_handler_exti15_10,         // 40 - EXTI Line [15:10]
  irq_handler_rtc_alarm,         // 41 - RTC Alarm from EXTI
  irq_handler_otg_fs_wkup,       // 42 - USBFS Wakeup from EXTI
  irq_handler_timer7_brk_timer11,     // 43 - TIMER7 Break and TIMER11
  irq_handler_timer7_up_timer12,      // 44 - TIMER7 Update and TIMER12
  irq_handler_timer7_trg_cmt_timer13, // 45 - TIMER7 Trigger and Channel Commutation and TIMER13
  irq_handler_timer7_cc,         // 46 - TIMER7 Capture Compare
  irq_handler_dma0_channel7,     // 47 - DMA0 Channel 7
  irq_handler_exmc,              // 48 - EXMC
  irq_handler_sdio,              // 49 - SDIO
  irq_handler_timer4,            // 50 - TIMER4
  irq_handler_spi2,              // 51 - SPI2
  irq_handler_uart3,             // 52 - UART3
  irq_handler_uart4,             // 53 - UART4
  irq_handler_timer5_dac,        // 54 - TIMER5, DAC0, DAC1 Underrun Error
  irq_handler_timer6,            // 55 - TIMER6
  irq_handler_dma1_channel0,     // 56 - DMA1 Channel 0
  irq_handler_dma1_channel1,     // 57 - DMA1 Channel 1
  irq_handler_dma1_channel2,     // 58 - DMA1 Channel 2
  irq_handler_dma1_channel3,     // 59 - DMA1 Channel 3
  irq_handler_dma1_channel4,     // 60 - DMA1 Channel 4
  irq_handler_enet,              // 61 - Ethernet
  irq_handler_enet_wkup,         // 62 - Ethernet Wakeup from EXTI
  irq_handler_can1_tx,           // 63 - CAN1 TX
  irq_handler_can1_rx0,          // 64 - CAN1 RX0
  irq_handler_can1_rx1,          // 65 - CAN1 RX1
  irq_handler_can1_ewmc,         // 66 - CAN1 EWMC
  irq_handler_otg_fs,            // 67 - USBFS
  irq_handler_dma1_channel5,     // 68 - DMA1 Channel 5
  irq_handler_dma1_channel6,     // 69 - DMA1 Channel 6
  irq_handler_dma1_channel7,     // 70 - DMA1 Channel 7
  irq_handler_usart5,            // 71 - USART5
  irq_handler_i2c2_ev,           // 72 - I2C2 Event
  irq_handler_i2c2_er,           // 73 - I2C2 Error
  irq_handler_usbhs_ep1_out,     // 74 - USBHS Endpoint 1 Out
  irq_handler_usbhs_ep1_in,      // 75 - USBHS Endpoint 1 In
  irq_handler_usbhs_wkup,        // 76 - USBHS Wakeup from EXTI
  irq_handler_usbhs,             // 77 - USBHS
  irq_handler_dci,               // 78 - DCI
  0,                             // 79 - Reserved
  irq_handler_trng,              // 80 - TRNG
  irq_handler_fpu,               // 81 - FPU
  irq_handler_uart6,             // 82 - UART6
  irq_handler_uart7,             // 83 - UART7
  irq_handler_spi3,              // 84 - SPI3
  irq_handler_spi4,              // 85 - SPI4
  irq_handler_spi5,              // 86 - SPI5
  0,                             // 87 - Reserved
  irq_handler_tli,               // 88 - TLI
  irq_handler_tli_er,            // 89 - TLI Error
  irq_handler_ipa,               // 90 - IPA
};

/*- Implementations ---------------------------------------------------------*/

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

  // Enable FPU
  SCB->CPACR |= (0xf << 20);
  __DSB();
  __ISB();

  SCB->VTOR = (uint32_t)vectors;

  main();

  while (1);
}

//-----------------------------------------------------------------------------
void irq_handler_dummy(void)
{
  while (1);
}

