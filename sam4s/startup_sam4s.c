/*
 * Copyright (c) 2016, Alex Taradov <alex@taradov.com>
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
#include "sam4s.h"

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
DUMMY void irq_handler_efc0(void);
DUMMY void irq_handler_efc1(void);
DUMMY void irq_handler_uart0(void);
DUMMY void irq_handler_uart1(void);
DUMMY void irq_handler_pioa(void);
DUMMY void irq_handler_piob(void);
DUMMY void irq_handler_pioc(void);
DUMMY void irq_handler_usart0(void);
DUMMY void irq_handler_usart1(void);
DUMMY void irq_handler_hsmci(void);
DUMMY void irq_handler_twi0(void);
DUMMY void irq_handler_twi1(void);
DUMMY void irq_handler_spi(void);
DUMMY void irq_handler_ssc(void);
DUMMY void irq_handler_tc0(void);
DUMMY void irq_handler_tc1(void);
DUMMY void irq_handler_tc2(void);
DUMMY void irq_handler_tc3(void);
DUMMY void irq_handler_tc4(void);
DUMMY void irq_handler_tc5(void);
DUMMY void irq_handler_adc(void);
DUMMY void irq_handler_dacc(void);
DUMMY void irq_handler_pwm(void);
DUMMY void irq_handler_crccu(void);
DUMMY void irq_handler_acc(void);
DUMMY void irq_handler_udp(void);

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
  irq_handler_efc0,              // 6 - Embedded Flash Controller 0
  irq_handler_efc1,              // 7 - Embedded Flash Controller 1
  irq_handler_uart0,             // 8 - UART 0
  irq_handler_uart1,             // 9 - UART 1
  0,                             // 10 - Reserved
  irq_handler_pioa,              // 11 - Parallel I/O Controller A
  irq_handler_piob,              // 12 - Parallel I/O Controller B
  irq_handler_pioc,              // 13 - Parallel I/O Controller C
  irq_handler_usart0,            // 14 - USART 0
  irq_handler_usart1,            // 15 - USART 1
  0,                             // 16 - Reserved
  0,                             // 17 - Reserved
  irq_handler_hsmci,             // 18 - Multimedia Card Interface
  irq_handler_twi0,              // 19 - Two Wire Interface 0
  irq_handler_twi1,              // 20 - Two Wire Interface 1
  irq_handler_spi,               // 21 - Serial Peripheral Interface
  irq_handler_ssc,               // 22 - Synchronous Serial Controller
  irq_handler_tc0,               // 23 - Timer/Counter 0
  irq_handler_tc1,               // 24 - Timer/Counter 1
  irq_handler_tc2,               // 25 - Timer/Counter 2
  irq_handler_tc3,               // 26 - Timer/Counter 3
  irq_handler_tc4,               // 27 - Timer/Counter 4
  irq_handler_tc5,               // 28 - Timer/Counter 5
  irq_handler_adc,               // 29 - Analog To Digital Converter
  irq_handler_dacc,              // 30 - Digital To Analog Converter
  irq_handler_pwm,               // 31 - Pulse Width Modulation
  irq_handler_crccu,             // 32 - CRC Calculation Unit
  irq_handler_acc,               // 33 - Analog Comparator
  irq_handler_udp,               // 34 - USB Device Port
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

