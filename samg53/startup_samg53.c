/*
 * Copyright (c) 2021, Alex Taradov <alex@taradov.com>
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
#include "sam.h"

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

DUMMY void irq_handler_supc(void);
DUMMY void irq_handler_rstc(void);
DUMMY void irq_handler_rtc(void);
DUMMY void irq_handler_rtt(void);
DUMMY void irq_handler_wdt(void);
DUMMY void irq_handler_pmc(void);
DUMMY void irq_handler_efc(void);
DUMMY void irq_handler_uart0(void);
DUMMY void irq_handler_uart1(void);
DUMMY void irq_handler_pioa(void);
DUMMY void irq_handler_piob(void);
DUMMY void irq_handler_pdmic0(void);
DUMMY void irq_handler_usart(void);
DUMMY void irq_handler_mem2mem(void);
DUMMY void irq_handler_i2sc0(void);
DUMMY void irq_handler_i2sc1(void);
DUMMY void irq_handler_pdmic1(void);
DUMMY void irq_handler_twi0(void);
DUMMY void irq_handler_twi1(void);
DUMMY void irq_handler_spi(void);
DUMMY void irq_handler_twi2(void);
DUMMY void irq_handler_tc0(void);
DUMMY void irq_handler_tc1(void);
DUMMY void irq_handler_tc2(void);
DUMMY void irq_handler_tc3(void);
DUMMY void irq_handler_tc4(void);
DUMMY void irq_handler_tc5(void);
DUMMY void irq_handler_adc(void);
DUMMY void irq_handler_arm(void);
DUMMY void irq_handler_wkup0(void);
DUMMY void irq_handler_wkup1(void);
DUMMY void irq_handler_wkup2(void);
DUMMY void irq_handler_wkup3(void);
DUMMY void irq_handler_wkup4(void);
DUMMY void irq_handler_wkup5(void);
DUMMY void irq_handler_wkup6(void);
DUMMY void irq_handler_wkup7(void);
DUMMY void irq_handler_wkup8(void);
DUMMY void irq_handler_wkup9(void);
DUMMY void irq_handler_wkup10(void);
DUMMY void irq_handler_wkup11(void);
DUMMY void irq_handler_wkup12(void);
DUMMY void irq_handler_wkup13(void);
DUMMY void irq_handler_wkup14(void);
DUMMY void irq_handler_wkup15(void);

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
  irq_handler_supc,              // 0 - Supply Controller
  irq_handler_rstc,              // 1 - Reset Controller
  irq_handler_rtc,               // 2 - Real Time Clock
  irq_handler_rtt,               // 3 - Real Time Timer
  irq_handler_wdt,               // 4 - Watchdog Timer
  irq_handler_pmc,               // 5 - Power Management Controller
  irq_handler_efc,               // 6 - Embedded Flash Controller
  0,                             // 7 - Reserved
  irq_handler_uart0,             // 8 - Universal Asynchronous Receiver Transmitter 0
  irq_handler_uart1,             // 9 - Universal Asynchronous Receiver Transmitter 1
  0,                             // 10 - Reserved
  irq_handler_pioa,              // 11 - Parallel I/O Controller A
  irq_handler_piob,              // 12 - Parallel I/O Controller B
  irq_handler_pdmic0,            // 13 - Pulse Density Modulation Interface Controller 0
  irq_handler_usart,             // 14 - Universal Synchronous Asynchronous Receiver Transmitter
  irq_handler_mem2mem,           // 15 - Memory to Memory
  irq_handler_i2sc0,             // 16 - Inter-IC Sound Controller 0
  irq_handler_i2sc1,             // 17 - Inter-IC Sound Controller 1
  irq_handler_pdmic1,            // 18 - Pulse Density Modulation Interface Controller 1
  irq_handler_twi0,              // 19 - Two-wire Interface High Speed
  irq_handler_twi1,              // 20 - Two-wire Interface
  irq_handler_spi,               // 21 - Serial Peripheral Interface
  irq_handler_twi2,              // 22 - Two-wire Interface
  irq_handler_tc0,               // 23 - Timer/Counter 0
  irq_handler_tc1,               // 24 - Timer/Counter 1
  irq_handler_tc2,               // 25 - Timer/Counter 2
  irq_handler_tc3,               // 26 - Timer/Counter 3
  irq_handler_tc4,               // 27 - Timer/Counter 4
  irq_handler_tc5,               // 28 - Timer/Counter 5
  irq_handler_adc,               // 29 - Analog To Digital Converter
  irq_handler_arm,               // 30 - ARM (FPU)
  irq_handler_wkup0,             // 31 - External interrupt 0
  irq_handler_wkup1,             // 32 - External interrupt 1
  irq_handler_wkup2,             // 33 - External interrupt 2
  irq_handler_wkup3,             // 34 - External interrupt 3
  irq_handler_wkup4,             // 35 - External interrupt 4
  irq_handler_wkup5,             // 36 - External interrupt 5
  irq_handler_wkup6,             // 37 - External interrupt 6
  irq_handler_wkup7,             // 38 - External interrupt 7
  irq_handler_wkup8,             // 39 - External interrupt 8
  irq_handler_wkup9,             // 40 - External interrupt 9
  irq_handler_wkup10,            // 41 - External interrupt 10
  irq_handler_wkup11,            // 42 - External interrupt 11
  irq_handler_wkup12,            // 43 - External interrupt 12
  irq_handler_wkup13,            // 44 - External interrupt 13
  irq_handler_wkup14,            // 45 - External interrupt 14
  irq_handler_wkup15,            // 46 - External interrupt 15
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
  SCB->CPACR |=  (0xf << 20);
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

