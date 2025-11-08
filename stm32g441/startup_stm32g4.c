// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2025, Alex Taradov <alex@taradov.com>. All rights reserved.

/*- Includes ----------------------------------------------------------------*/
#include "stm32g441xx.h"

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

DUMMY void irq_handler_wwdg(void);
DUMMY void irq_handler_pvd_pvm(void);
DUMMY void irq_handler_rtc_tamp_css_lse(void);
DUMMY void irq_handler_rtc_wkup(void);
DUMMY void irq_handler_flash(void);
DUMMY void irq_handler_rcc(void);
DUMMY void irq_handler_exti0(void);
DUMMY void irq_handler_exti1(void);
DUMMY void irq_handler_exti2(void);
DUMMY void irq_handler_exti3(void);
DUMMY void irq_handler_exti4(void);
DUMMY void irq_handler_dma1_ch1(void);
DUMMY void irq_handler_dma1_ch2(void);
DUMMY void irq_handler_dma1_ch3(void);
DUMMY void irq_handler_dma1_ch4(void);
DUMMY void irq_handler_dma1_ch5(void);
DUMMY void irq_handler_dma1_ch6(void);
DUMMY void irq_handler_dma1_ch7(void);
DUMMY void irq_handler_adc1_2(void);
DUMMY void irq_handler_usb_hp(void);
DUMMY void irq_handler_usb_lp(void);
DUMMY void irq_handler_fdcan1_it0(void);
DUMMY void irq_handler_fdcan1_it1(void);
DUMMY void irq_handler_exti9_5(void);
DUMMY void irq_handler_tim1_brk_tim15(void);
DUMMY void irq_handler_tim1_up_tim16(void);
DUMMY void irq_handler_tim1_trg_com_tim17_tim1_dir_tim1_idx(void);
DUMMY void irq_handler_tim1_cc(void);
DUMMY void irq_handler_tim2(void);
DUMMY void irq_handler_tim3(void);
DUMMY void irq_handler_tim4(void);
DUMMY void irq_handler_i2c1_ev(void);
DUMMY void irq_handler_i2c1_er(void);
DUMMY void irq_handler_i2c2_ev(void);
DUMMY void irq_handler_i2c2_er(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_spi2(void);
DUMMY void irq_handler_usart1(void);
DUMMY void irq_handler_usart2(void);
DUMMY void irq_handler_usart3(void);
DUMMY void irq_handler_exti15_10(void);
DUMMY void irq_handler_rtc_alarm(void);
DUMMY void irq_handler_usb_wakeup(void);
DUMMY void irq_handler_tim8_brk_tim8_terr_tim8_ierr(void);
DUMMY void irq_handler_tim8_up(void);
DUMMY void irq_handler_tim8_trg_com_tim8_dir_tim8_idx(void);
DUMMY void irq_handler_tim8_cc(void);
DUMMY void irq_handler_adc3(void);
DUMMY void irq_handler_fsmc(void);
DUMMY void irq_handler_lptim1(void);
DUMMY void irq_handler_tim5(void);
DUMMY void irq_handler_spi3(void);
DUMMY void irq_handler_uart4(void);
DUMMY void irq_handler_uart5(void);
DUMMY void irq_handler_tim6_dac13_under(void);
DUMMY void irq_handler_tim7_dac24_under(void);
DUMMY void irq_handler_dma2_ch1(void);
DUMMY void irq_handler_dma2_ch2(void);
DUMMY void irq_handler_dma2_ch3(void);
DUMMY void irq_handler_dma2_ch4(void);
DUMMY void irq_handler_dma2_ch5(void);
DUMMY void irq_handler_adc4(void);
DUMMY void irq_handler_adc5(void);
DUMMY void irq_handler_ucpd1(void);
DUMMY void irq_handler_comp123(void);
DUMMY void irq_handler_comp456(void);
DUMMY void irq_handler_comp7(void);
DUMMY void irq_handler_hrtim_master(void);
DUMMY void irq_handler_hrtim_tima(void);
DUMMY void irq_handler_hrtim_timb(void);
DUMMY void irq_handler_hrtim_timc(void);
DUMMY void irq_handler_hrtim_timd(void);
DUMMY void irq_handler_hrtim_time(void);
DUMMY void irq_handler_hrtim_tim_flt(void);
DUMMY void irq_handler_hrtim_timf(void);
DUMMY void irq_handler_crs(void);
DUMMY void irq_handler_sai(void);
DUMMY void irq_handler_tim20_brk_tim20_terr_tim20_ierr(void);
DUMMY void irq_handler_tim20_up(void);
DUMMY void irq_handler_tim20_trg_com_tim20_dir_tim20_idx(void);
DUMMY void irq_handler_tim20_cc(void);
DUMMY void irq_handler_fpu(void);
DUMMY void irq_handler_i2c4_ev(void);
DUMMY void irq_handler_i2c4_er(void);
DUMMY void irq_handler_spi4(void);
DUMMY void irq_handler_aes(void);
DUMMY void irq_handler_fdcan2_it0(void);
DUMMY void irq_handler_fdcan2_it1(void);
DUMMY void irq_handler_fdcan3_it0(void);
DUMMY void irq_handler_fdcan3_it1(void);
DUMMY void irq_handler_rng(void);
DUMMY void irq_handler_lpuart1(void);
DUMMY void irq_handler_i2c3_ev(void);
DUMMY void irq_handler_i2c3_er(void);
DUMMY void irq_handler_dmamux_ovr(void);
DUMMY void irq_handler_quadspi(void);
DUMMY void irq_handler_dma1_ch8(void);
DUMMY void irq_handler_dma2_ch6(void);
DUMMY void irq_handler_dma2_ch7(void);
DUMMY void irq_handler_dma2_ch8(void);
DUMMY void irq_handler_cordic(void);
DUMMY void irq_handler_fmac(void);

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
  irq_handler_wwdg,              // 0 - Window watchdog
  irq_handler_pvd_pvm,           // 1 - PVD through EXTI line 16
  irq_handler_rtc_tamp_css_lse,  // 2 - RTC/TAMP/CSS on LSE through EXTI line 19
  irq_handler_rtc_wkup,          // 3 - RTC wake-up timer through EXTI line 20
  irq_handler_flash,             // 4 - Flash
  irq_handler_rcc,               // 5 - RCC
  irq_handler_exti0,             // 6 - EXTI line 0
  irq_handler_exti1,             // 7 - EXTI line 1
  irq_handler_exti2,             // 8 - EXTI line 2
  irq_handler_exti3,             // 9 - EXTI line 3
  irq_handler_exti4,             // 10 -EXTI line 4
  irq_handler_dma1_ch1,          // 11 - DMA1 channel 1
  irq_handler_dma1_ch2,          // 12 - DMA1 channel 2
  irq_handler_dma1_ch3,          // 13 - DMA1 channel 3
  irq_handler_dma1_ch4,          // 14 - DMA1 channel 4
  irq_handler_dma1_ch5,          // 15 - DMA1 channel 5
  irq_handler_dma1_ch6,          // 16 - DMA1 channel 6
  irq_handler_dma1_ch7,          // 17 - DMA1 channel 7
  irq_handler_adc1_2,            // 18 - ADC1 and ADC2
  irq_handler_usb_hp,            // 19 - USB high priority
  irq_handler_usb_lp,            // 20 - USB low priority
  irq_handler_fdcan1_it0,        // 21 - FDCAN1 interrupt 0
  irq_handler_fdcan1_it1,        // 22 - FDCAN1 interrupt 1
  irq_handler_exti9_5,           // 23 - EXTI line[9:5]
  irq_handler_tim1_brk_tim15,    // 24 - TIM1 break/TIM15
  irq_handler_tim1_up_tim16,     // 25 - TIM1 update/TIM16
  irq_handler_tim1_trg_com_tim17_tim1_dir_tim1_idx, // 26 - TIM1 trigger and commutation/TIM17/TIM1 direction change/TIM1 index
  irq_handler_tim1_cc,           // 27 - TIM1 capture compare
  irq_handler_tim2,              // 28 - TIM2
  irq_handler_tim3,              // 29 - TIM3
  irq_handler_tim4,              // 30 - TIM4
  irq_handler_i2c1_ev,           // 31 - I2C1 event and EXTI line 23
  irq_handler_i2c1_er,           // 32 - I2C1 error
  irq_handler_i2c2_ev,           // 33 - I2C2 event and EXTI line 24
  irq_handler_i2c2_er,           // 34 - I2C2 error
  irq_handler_spi1,              // 35 - SPI1
  irq_handler_spi2,              // 36 - SPI2
  irq_handler_usart1,            // 37 - USART1 and EXTI line 25
  irq_handler_usart2,            // 38 - USART2 and EXTI line 26
  irq_handler_usart3,            // 39 - USART3 and EXTI line 28
  irq_handler_exti15_10,         // 40 - EXTI line[15:10]
  irq_handler_rtc_alarm,         // 41 - RTC alarms
  irq_handler_usb_wakeup,        // 42 - USB wake-up from suspend and EXTI line 18
  irq_handler_tim8_brk_tim8_terr_tim8_ierr, // 43 - TIM8 break/TIM8 transition error/TIM8 index error
  irq_handler_tim8_up,           // 44 - TIM8 Update
  irq_handler_tim8_trg_com_tim8_dir_tim8_idx, // 45 - TIM8 trigger and commutation/TIM8 direction change interrupt/TIM8 index
  irq_handler_tim8_cc,           // 46 - TIM8 capture compare
  irq_handler_adc3,              // 47 - ADC3
  irq_handler_fsmc,              // 48 - FSMC
  irq_handler_lptim1,            // 49 - LPTIM1
  irq_handler_tim5,              // 50 - TIM5
  irq_handler_spi3,              // 51 - SPI3
  irq_handler_uart4,             // 52 - UART4 and EXTI line 34
  irq_handler_uart5,             // 53 - UART5 and EXTI line 35
  irq_handler_tim6_dac13_under,  // 54 - TIM6 and DAC1/3 underrun
  irq_handler_tim7_dac24_under,  // 55 - TIM7 and DAC2/4 underrun
  irq_handler_dma2_ch1,          // 56 - DMA2 channel 1
  irq_handler_dma2_ch2,          // 57 - DMA2 channel 2
  irq_handler_dma2_ch3,          // 58 - DMA2 channel 3
  irq_handler_dma2_ch4,          // 59 - DMA2 channel 4
  irq_handler_dma2_ch5,          // 60 - DMA2 channel 5
  irq_handler_adc4,              // 61 - ADC4
  irq_handler_adc5,              // 62 - ADC5
  irq_handler_ucpd1,             // 63 - UCPD1 and EXTI line 43
  irq_handler_comp123,           // 64 - COMP1/COMP2/COMP3 through EXTI lines 21/22/29
  irq_handler_comp456,           // 65 - COMP4/COMP5/COMP6 through EXTI lines 30/31/32
  irq_handler_comp7,             // 66 - COMP7 through EXTI line 33
  irq_handler_hrtim_master,      // 67 - HRTIM master
  irq_handler_hrtim_tima,        // 68 - HRTIM timer A
  irq_handler_hrtim_timb,        // 69 - HRTIM timer B
  irq_handler_hrtim_timc,        // 70 - HRTIM timer C
  irq_handler_hrtim_timd,        // 71 - HRTIM timer D
  irq_handler_hrtim_time,        // 72 - HRTIM timer E
  irq_handler_hrtim_tim_flt,     // 73 - HRTIM fault
  irq_handler_hrtim_timf,        // 74 - HRTIM timer F
  irq_handler_crs,               // 75 - CRS
  irq_handler_sai,               // 76 - SAI
  irq_handler_tim20_brk_tim20_terr_tim20_ierr, // 77 - TIM20 break/TIM20 transition error/TIM20 index error
  irq_handler_tim20_up,          // 78 - TIM20 update
  irq_handler_tim20_trg_com_tim20_dir_tim20_idx, // 79 - TIM20 trigger and commutation/TIM20 direction change/TIM20 index
  irq_handler_tim20_cc,         // 80 - TIM20 capture compare
  irq_handler_fpu,              // 81 - Floating point unit
  irq_handler_i2c4_ev,          // 82 - I2C4 event and EXTI line 42
  irq_handler_i2c4_er,          // 83 - I2C4 error
  irq_handler_spi4,             // 84 - SPI4
  irq_handler_aes,              // 85 - AES
  irq_handler_fdcan2_it0,       // 86 - FDCAN2 interrupt 0
  irq_handler_fdcan2_it1,       // 87 - FDCAN2 interrupt 1
  irq_handler_fdcan3_it0,       // 88 - FDCAN3 interrupt 0
  irq_handler_fdcan3_it1,       // 89 - FDCAN3 interrupt 1
  irq_handler_rng,              // 90 - RNG
  irq_handler_lpuart1,          // 91 - LPUART1
  irq_handler_i2c3_ev,          // 92 - I2C3 event and EXTI line 27
  irq_handler_i2c3_er,          // 93 - I2C3 error
  irq_handler_dmamux_ovr,       // 94 - DMAMUX overrun
  irq_handler_quadspi,          // 95 - QUADSPI
  irq_handler_dma1_ch8,         // 96 - DMA1 channel 8
  irq_handler_dma2_ch6,         // 97 - DMA2 channel 6
  irq_handler_dma2_ch7,         // 98 - DMA2 channel 7
  irq_handler_dma2_ch8,         // 99 - DMA2 channel 8
  irq_handler_cordic,           // 100 - CORDIC
  irq_handler_fmac,             // 101 - FMAC
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


