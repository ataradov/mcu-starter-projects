/*
 * Copyright (c) 2017, Alex Taradov <alex@taradov.com>
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
#include "saml11.h"

//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))

//-----------------------------------------------------------------------------
void irq_handler_reset(void);
DUMMY void irq_handler_nmi(void);
DUMMY void irq_handler_hard_fault(void);
DUMMY void irq_handler_secure_fault(void);
DUMMY void irq_handler_sv_call(void);
DUMMY void irq_handler_pend_sv(void);
DUMMY void irq_handler_sys_tick(void);

DUMMY void irq_handler_system(void);
DUMMY void irq_handler_wdt(void);
DUMMY void irq_handler_rtc(void);
DUMMY void irq_handler_eic_0(void);
DUMMY void irq_handler_eic_1(void);
DUMMY void irq_handler_eic_2(void);
DUMMY void irq_handler_eic_3(void);
DUMMY void irq_handler_eic_4(void);
DUMMY void irq_handler_freqm(void);
DUMMY void irq_handler_nvmctrl(void);
DUMMY void irq_handler_port(void);
DUMMY void irq_handler_dmac_0(void);
DUMMY void irq_handler_dmac_1(void);
DUMMY void irq_handler_dmac_2(void);
DUMMY void irq_handler_dmac_3(void);
DUMMY void irq_handler_dmac_4(void);
DUMMY void irq_handler_evsys_0(void);
DUMMY void irq_handler_evsys_1(void);
DUMMY void irq_handler_evsys_2(void);
DUMMY void irq_handler_evsys_3(void);
DUMMY void irq_handler_evsys_4(void);
DUMMY void irq_handler_pac(void);
DUMMY void irq_handler_sercom0_0(void);
DUMMY void irq_handler_sercom0_1(void);
DUMMY void irq_handler_sercom0_2(void);
DUMMY void irq_handler_sercom0_3(void);
DUMMY void irq_handler_sercom1_0(void);
DUMMY void irq_handler_sercom1_1(void);
DUMMY void irq_handler_sercom1_2(void);
DUMMY void irq_handler_sercom1_3(void);
DUMMY void irq_handler_sercom2_0(void);
DUMMY void irq_handler_sercom2_1(void);
DUMMY void irq_handler_sercom2_2(void);
DUMMY void irq_handler_sercom2_3(void);
DUMMY void irq_handler_tc0(void);
DUMMY void irq_handler_tc1(void);
DUMMY void irq_handler_tc2(void);
DUMMY void irq_handler_adc_0(void);
DUMMY void irq_handler_adc_1(void);
DUMMY void irq_handler_ac(void);
DUMMY void irq_handler_dac_0(void);
DUMMY void irq_handler_dac_1(void);
DUMMY void irq_handler_ptc(void);
DUMMY void irq_handler_trng(void);
DUMMY void irq_handler_tram(void);

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
  irq_handler_secure_fault,      // 7 - Secure Fault
  0,                             // 8 - Reserved
  0,                             // 9 - Reserved
  0,                             // 10 - Reserved
  irq_handler_sv_call,           // 11 - SVCall
  0,                             // 12 - Reserved
  0,                             // 13 - Reserved
  irq_handler_pend_sv,           // 14 - PendSV
  irq_handler_sys_tick,          // 15 - SysTick

  // Peripheral handlers
  irq_handler_system,            // 0 - System Controller (MCLK, OSCCTRL, OSC32KCTRL, PM, SUPC)
  irq_handler_wdt,               // 1 - Watchdog Timer
  irq_handler_rtc,               // 2 - Real-Time Counter
  irq_handler_eic_0,             // 3 - External Interrupt Controller (EXTINT_0)
  irq_handler_eic_1,             // 4 - External Interrupt Controller (EXTINT_1)
  irq_handler_eic_2,             // 5 - External Interrupt Controller (EXTINT_2)
  irq_handler_eic_3,             // 6 - External Interrupt Controller (EXTINT_3)
  irq_handler_eic_4,             // 7 - External Interrupt Controller (EXTINT_x)
  irq_handler_freqm,             // 8 - Frequency Meter
  irq_handler_nvmctrl,           // 9 - Non-Volatile Memory Controller
  irq_handler_port,              // 10 - Port Module
  irq_handler_dmac_0,            // 11 - Direct Memory Access Controller (SUSP_0, TCMPL_0, TERR_0)
  irq_handler_dmac_1,            // 12 - Direct Memory Access Controller (SUSP_1, TCMPL_1, TERR_1)
  irq_handler_dmac_2,            // 13 - Direct Memory Access Controller (SUSP_2, TCMPL_2, TERR_2)
  irq_handler_dmac_3,            // 14 - Direct Memory Access Controller (SUSP_3, TCMPL_3, TERR_3)
  irq_handler_dmac_4,            // 15 - Direct Memory Access Controller (SUSP_x, TCMPL_x, TERR_x)
  irq_handler_evsys_0,           // 16 - Event System (EVD_0, OVR_0)
  irq_handler_evsys_1,           // 17 - Event System (EVD_1, OVR_1)
  irq_handler_evsys_2,           // 18 - Event System (EVD_2, OVR_2)
  irq_handler_evsys_3,           // 19 - Event System (EVD_3, OVR_3)
  irq_handler_evsys_4,           // 20 - Event System (NSCHK)
  irq_handler_pac,               // 21 - Peripheral Access Controller
  irq_handler_sercom0_0,         // 22 - Serial Communication Interface 0 (0)
  irq_handler_sercom0_1,         // 23 - Serial Communication Interface 0 (1)
  irq_handler_sercom0_2,         // 24 - Serial Communication Interface 0 (2)
  irq_handler_sercom0_3,         // 25 - Serial Communication Interface 0 (3-6)
  irq_handler_sercom1_0,         // 26 - Serial Communication Interface 1 (0)
  irq_handler_sercom1_1,         // 27 - Serial Communication Interface 1 (1)
  irq_handler_sercom1_2,         // 28 - Serial Communication Interface 1 (2)
  irq_handler_sercom1_3,         // 29 - Serial Communication Interface 1 (3-6)
  irq_handler_sercom2_0,         // 30 - Serial Communication Interface 2 (0)
  irq_handler_sercom2_1,         // 31 - Serial Communication Interface 2 (1)
  irq_handler_sercom2_2,         // 32 - Serial Communication Interface 2 (2)
  irq_handler_sercom2_3,         // 33 - Serial Communication Interface 2 (3-6)
  irq_handler_tc0,               // 34 - Basic Timer Counter 0
  irq_handler_tc1,               // 35 - Basic Timer Counter 1
  irq_handler_tc2,               // 36 - Basic Timer Counter 2
  irq_handler_adc_0,             // 37 - Analog-to-Digital Converter (OVERRUN, WINMON)
  irq_handler_adc_1,             // 38 - Analog-to-Digital Converter (RESRDY)
  irq_handler_ac,                // 39 - Analog Comparators
  irq_handler_dac_0,             // 40 - Digital-to-Analog Converter (UNDERRUN_A)
  irq_handler_dac_1,             // 41 - Digital-to-Analog Converter (EMPTY)
  irq_handler_ptc,               // 42 - Peripheral Touch Controller
  irq_handler_trng,              // 43 - True Random Generator
  irq_handler_tram,              // 44 - TrustRAM
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

//-----------------------------------------------------------------------------
void _exit(int status)
{
  (void)status;
  while (1);
}

