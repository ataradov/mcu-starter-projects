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
#include "sam4l.h"

/*- Definitions -------------------------------------------------------------*/
#define DUMMY         __attribute__ ((weak, alias ("irq_handler_dummy")))

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

DUMMY void irq_handler_hflashc(void);
DUMMY void irq_handler_pdca_0(void);
DUMMY void irq_handler_pdca_1(void);
DUMMY void irq_handler_pdca_2(void);
DUMMY void irq_handler_pdca_3(void);
DUMMY void irq_handler_pdca_4(void);
DUMMY void irq_handler_pdca_5(void);
DUMMY void irq_handler_pdca_6(void);
DUMMY void irq_handler_pdca_7(void);
DUMMY void irq_handler_pdca_8(void);
DUMMY void irq_handler_pdca_9(void);
DUMMY void irq_handler_pdca_10(void);
DUMMY void irq_handler_pdca_11(void);
DUMMY void irq_handler_pdca_12(void);
DUMMY void irq_handler_pdca_13(void);
DUMMY void irq_handler_pdca_14(void);
DUMMY void irq_handler_pdca_15(void);
DUMMY void irq_handler_crccu(void);
DUMMY void irq_handler_usbc(void);
DUMMY void irq_handler_pevc_tr(void);
DUMMY void irq_handler_pevc_ov(void);
DUMMY void irq_handler_aesa(void);
DUMMY void irq_handler_pm(void);
DUMMY void irq_handler_scif(void);
DUMMY void irq_handler_freqm(void);
DUMMY void irq_handler_gpio_0(void);
DUMMY void irq_handler_gpio_1(void);
DUMMY void irq_handler_gpio_2(void);
DUMMY void irq_handler_gpio_3(void);
DUMMY void irq_handler_gpio_4(void);
DUMMY void irq_handler_gpio_5(void);
DUMMY void irq_handler_gpio_6(void);
DUMMY void irq_handler_gpio_7(void);
DUMMY void irq_handler_gpio_8(void);
DUMMY void irq_handler_gpio_9(void);
DUMMY void irq_handler_gpio_10(void);
DUMMY void irq_handler_gpio_11(void);
DUMMY void irq_handler_bpm(void);
DUMMY void irq_handler_bscif(void);
DUMMY void irq_handler_ast_alarm(void);
DUMMY void irq_handler_ast_per(void);
DUMMY void irq_handler_ast_ovf(void);
DUMMY void irq_handler_ast_ready(void);
DUMMY void irq_handler_ast_clkready(void);
DUMMY void irq_handler_wdt(void);
DUMMY void irq_handler_eic_1(void);
DUMMY void irq_handler_eic_2(void);
DUMMY void irq_handler_eic_3(void);
DUMMY void irq_handler_eic_4(void);
DUMMY void irq_handler_eic_5(void);
DUMMY void irq_handler_eic_6(void);
DUMMY void irq_handler_eic_7(void);
DUMMY void irq_handler_eic_8(void);
DUMMY void irq_handler_iisc(void);
DUMMY void irq_handler_spi(void);
DUMMY void irq_handler_tc00(void);
DUMMY void irq_handler_tc01(void);
DUMMY void irq_handler_tc02(void);
DUMMY void irq_handler_tc10(void);
DUMMY void irq_handler_tc11(void);
DUMMY void irq_handler_tc12(void);
DUMMY void irq_handler_twim0(void);
DUMMY void irq_handler_twis0(void);
DUMMY void irq_handler_twim1(void);
DUMMY void irq_handler_twis1(void);
DUMMY void irq_handler_usart0(void);
DUMMY void irq_handler_usart1(void);
DUMMY void irq_handler_usart2(void);
DUMMY void irq_handler_usart3(void);
DUMMY void irq_handler_adcife(void);
DUMMY void irq_handler_dacc(void);
DUMMY void irq_handler_acifc(void);
DUMMY void irq_handler_abdacb(void);
DUMMY void irq_handler_trng(void);
DUMMY void irq_handler_parc(void);
DUMMY void irq_handler_catb(void);
DUMMY void irq_handler_twim2(void);
DUMMY void irq_handler_twim3(void);
DUMMY void irq_handler_lcdca(void);

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
  irq_handler_hflashc,           // 0 - Flash Controller
  irq_handler_pdca_0,            // 1 - Peripheral DMA Controller 0
  irq_handler_pdca_1,            // 2 - Peripheral DMA Controller 1
  irq_handler_pdca_2,            // 3 - Peripheral DMA Controller 2
  irq_handler_pdca_3,            // 4 - Peripheral DMA Controller 3
  irq_handler_pdca_4,            // 5 - Peripheral DMA Controller 4
  irq_handler_pdca_5,            // 6 - Peripheral DMA Controller 5
  irq_handler_pdca_6,            // 7 - Peripheral DMA Controller 6
  irq_handler_pdca_7,            // 8 - Peripheral DMA Controller 7
  irq_handler_pdca_8,            // 9 - Peripheral DMA Controller 8
  irq_handler_pdca_9,            // 10 - Peripheral DMA Controller 9
  irq_handler_pdca_10,           // 11 - Peripheral DMA Controller 10
  irq_handler_pdca_11,           // 12 - Peripheral DMA Controller 11
  irq_handler_pdca_12,           // 13 - Peripheral DMA Controller 12
  irq_handler_pdca_13,           // 14 - Peripheral DMA Controller 13
  irq_handler_pdca_14,           // 15 - Peripheral DMA Controller 14
  irq_handler_pdca_15,           // 16 - Peripheral DMA Controller 15
  irq_handler_crccu,             // 17 - CRC Calculation Unit
  irq_handler_usbc,              // 18 - USB 2.0 Interface
  irq_handler_pevc_tr,           // 19 - Peripheral Event Controller TR
  irq_handler_pevc_ov,           // 20 - Peripheral Event Controller OV
  irq_handler_aesa,              // 21 - Advanced Encryption Standard
  irq_handler_pm,                // 22 - Power Manager
  irq_handler_scif,              // 23 - System Control Interface
  irq_handler_freqm,             // 24 - Frequency Meter
  irq_handler_gpio_0,            // 25 - General-Purpose Input/Output Controller 0
  irq_handler_gpio_1,            // 26 - General-Purpose Input/Output Controller 1
  irq_handler_gpio_2,            // 27 - General-Purpose Input/Output Controller 2
  irq_handler_gpio_3,            // 28 - General-Purpose Input/Output Controller 3
  irq_handler_gpio_4,            // 29 - General-Purpose Input/Output Controller 4
  irq_handler_gpio_5,            // 30 - General-Purpose Input/Output Controller 5
  irq_handler_gpio_6,            // 31 - General-Purpose Input/Output Controller 6
  irq_handler_gpio_7,            // 32 - General-Purpose Input/Output Controller 7
  irq_handler_gpio_8,            // 33 - General-Purpose Input/Output Controller 8
  irq_handler_gpio_9,            // 34 - General-Purpose Input/Output Controller 9
  irq_handler_gpio_10,           // 35 - General-Purpose Input/Output Controller 10
  irq_handler_gpio_11,           // 36 - General-Purpose Input/Output Controller 11
  irq_handler_bpm,               // 37 - Backup Power Manager
  irq_handler_bscif,             // 38 - Backup System Control Interface
  irq_handler_ast_alarm,         // 39 - Asynchronous Timer ALARM
  irq_handler_ast_per,           // 40 - Asynchronous Timer PER
  irq_handler_ast_ovf,           // 41 - Asynchronous Timer OVF
  irq_handler_ast_ready,         // 42 - Asynchronous Timer READY
  irq_handler_ast_clkready,      // 43 - Asynchronous Timer CLKREADY
  irq_handler_wdt,               // 44 - Watchdog Timer
  irq_handler_eic_1,             // 45 - External Interrupt Controller 1
  irq_handler_eic_2,             // 46 - External Interrupt Controller 2
  irq_handler_eic_3,             // 47 - External Interrupt Controller 3
  irq_handler_eic_4,             // 48 - External Interrupt Controller 4
  irq_handler_eic_5,             // 49 - External Interrupt Controller 5
  irq_handler_eic_6,             // 50 - External Interrupt Controller 6
  irq_handler_eic_7,             // 51 - External Interrupt Controller 7
  irq_handler_eic_8,             // 52 - External Interrupt Controller 8
  irq_handler_iisc,              // 53 - Inter-IC Sound (I2S) Controller
  irq_handler_spi,               // 54 - Serial Peripheral Interface
  irq_handler_tc00,              // 55 - Timer/Counter 0 Channel 0
  irq_handler_tc01,              // 56 - Timer/Counter 0 Channel 1
  irq_handler_tc02,              // 57 - Timer/Counter 0 Channel 2
  irq_handler_tc10,              // 58 - Timer/Counter 1 Channel 0
  irq_handler_tc11,              // 59 - Timer/Counter 1 Channel 1
  irq_handler_tc12,              // 60 - Timer/Counter 1 Channel 2
  irq_handler_twim0,             // 61 - Two-wire Master Interface 0
  irq_handler_twis0,             // 62 - Two-wire Slave Interface 0
  irq_handler_twim1,             // 63 - Two-wire Master Interface 1
  irq_handler_twis1,             // 64 - Two-wire Slave Interface 1
  irq_handler_usart0,            // 65 - Universal Synchronous Asynchronous Receiver Transmitter 0
  irq_handler_usart1,            // 66 - Universal Synchronous Asynchronous Receiver Transmitter 1
  irq_handler_usart2,            // 67 - Universal Synchronous Asynchronous Receiver Transmitter 2
  irq_handler_usart3,            // 68 - Universal Synchronous Asynchronous Receiver Transmitter 3
  irq_handler_adcife,            // 69 - ADC controller interface
  irq_handler_dacc,              // 70 - DAC Controller
  irq_handler_acifc,             // 71 - Analog Comparator Interface
  irq_handler_abdacb,            // 72 - Audio Bitstream DAC
  irq_handler_trng,              // 73 - True Random Number Generator
  irq_handler_parc,              // 74 - Parallel Capture
  irq_handler_catb,              // 75 - Capacitive Touch Module B
  0,                             // 76 - Reserved
  irq_handler_twim2,             // 77 - Two-wire Master Interface 2
  irq_handler_twim3,             // 78 - Two-wire Master Interface 3
  irq_handler_lcdca,             // 79 - LCD Controller A
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

  SCB->VTOR = (uint32_t)vectors;

  main();

  while (1);
}

//-----------------------------------------------------------------------------
void irq_handler_dummy(void)
{
  while (1);
}

