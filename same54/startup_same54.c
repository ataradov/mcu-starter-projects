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

/*- Includes ----------------------------------------------------------------*/
#include "same54.h"

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

DUMMY void irq_handler_pm(void);
DUMMY void irq_handler_mclk(void);
DUMMY void irq_handler_oscctrl_0(void);
DUMMY void irq_handler_oscctrl_1(void);
DUMMY void irq_handler_oscctrl_2(void);
DUMMY void irq_handler_oscctrl_3(void);
DUMMY void irq_handler_oscctrl_4(void);
DUMMY void irq_handler_osc32kctrl(void);
DUMMY void irq_handler_supc_0(void);
DUMMY void irq_handler_supc_1(void);
DUMMY void irq_handler_wdt(void);
DUMMY void irq_handler_rtc(void);
DUMMY void irq_handler_eic_0(void);
DUMMY void irq_handler_eic_1(void);
DUMMY void irq_handler_eic_2(void);
DUMMY void irq_handler_eic_3(void);
DUMMY void irq_handler_eic_4(void);
DUMMY void irq_handler_eic_5(void);
DUMMY void irq_handler_eic_6(void);
DUMMY void irq_handler_eic_7(void);
DUMMY void irq_handler_eic_8(void);
DUMMY void irq_handler_eic_9(void);
DUMMY void irq_handler_eic_10(void);
DUMMY void irq_handler_eic_11(void);
DUMMY void irq_handler_eic_12(void);
DUMMY void irq_handler_eic_13(void);
DUMMY void irq_handler_eic_14(void);
DUMMY void irq_handler_eic_15(void);
DUMMY void irq_handler_freqm(void);
DUMMY void irq_handler_nvmctrl_0(void);
DUMMY void irq_handler_nvmctrl_1(void);
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
DUMMY void irq_handler_ramecc(void);
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
DUMMY void irq_handler_sercom3_0(void);
DUMMY void irq_handler_sercom3_1(void);
DUMMY void irq_handler_sercom3_2(void);
DUMMY void irq_handler_sercom3_3(void);
DUMMY void irq_handler_sercom4_0(void);
DUMMY void irq_handler_sercom4_1(void);
DUMMY void irq_handler_sercom4_2(void);
DUMMY void irq_handler_sercom4_3(void);
DUMMY void irq_handler_sercom5_0(void);
DUMMY void irq_handler_sercom5_1(void);
DUMMY void irq_handler_sercom5_2(void);
DUMMY void irq_handler_sercom5_3(void);
DUMMY void irq_handler_sercom6_0(void);
DUMMY void irq_handler_sercom6_1(void);
DUMMY void irq_handler_sercom6_2(void);
DUMMY void irq_handler_sercom6_3(void);
DUMMY void irq_handler_sercom7_0(void);
DUMMY void irq_handler_sercom7_1(void);
DUMMY void irq_handler_sercom7_2(void);
DUMMY void irq_handler_sercom7_3(void);
DUMMY void irq_handler_can0(void);
DUMMY void irq_handler_can1(void);
DUMMY void irq_handler_usb_0(void);
DUMMY void irq_handler_usb_1(void);
DUMMY void irq_handler_usb_2(void);
DUMMY void irq_handler_usb_3(void);
DUMMY void irq_handler_gmac(void);
DUMMY void irq_handler_tcc0_0(void);
DUMMY void irq_handler_tcc0_1(void);
DUMMY void irq_handler_tcc0_2(void);
DUMMY void irq_handler_tcc0_3(void);
DUMMY void irq_handler_tcc0_4(void);
DUMMY void irq_handler_tcc0_5(void);
DUMMY void irq_handler_tcc0_6(void);
DUMMY void irq_handler_tcc1_0(void);
DUMMY void irq_handler_tcc1_1(void);
DUMMY void irq_handler_tcc1_2(void);
DUMMY void irq_handler_tcc1_3(void);
DUMMY void irq_handler_tcc1_4(void);
DUMMY void irq_handler_tcc2_0(void);
DUMMY void irq_handler_tcc2_1(void);
DUMMY void irq_handler_tcc2_2(void);
DUMMY void irq_handler_tcc2_3(void);
DUMMY void irq_handler_tcc3_0(void);
DUMMY void irq_handler_tcc3_1(void);
DUMMY void irq_handler_tcc3_2(void);
DUMMY void irq_handler_tcc4_0(void);
DUMMY void irq_handler_tcc4_1(void);
DUMMY void irq_handler_tcc4_2(void);
DUMMY void irq_handler_tc0(void);
DUMMY void irq_handler_tc1(void);
DUMMY void irq_handler_tc2(void);
DUMMY void irq_handler_tc3(void);
DUMMY void irq_handler_tc4(void);
DUMMY void irq_handler_tc5(void);
DUMMY void irq_handler_tc6(void);
DUMMY void irq_handler_tc7(void);
DUMMY void irq_handler_pdec_0(void);
DUMMY void irq_handler_pdec_1(void);
DUMMY void irq_handler_pdec_2(void);
DUMMY void irq_handler_adc0_0(void);
DUMMY void irq_handler_adc0_1(void);
DUMMY void irq_handler_adc1_0(void);
DUMMY void irq_handler_adc1_1(void);
DUMMY void irq_handler_ac(void);
DUMMY void irq_handler_dac_0(void);
DUMMY void irq_handler_dac_1(void);
DUMMY void irq_handler_dac_2(void);
DUMMY void irq_handler_dac_3(void);
DUMMY void irq_handler_dac_4(void);
DUMMY void irq_handler_i2s(void);
DUMMY void irq_handler_pcc(void);
DUMMY void irq_handler_aes(void);
DUMMY void irq_handler_trng(void);
DUMMY void irq_handler_icm(void);
DUMMY void irq_handler_pukcc(void);
DUMMY void irq_handler_qspi(void);
DUMMY void irq_handler_sdhc0(void);
DUMMY void irq_handler_sdhc1(void);

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
  irq_handler_pm,                // 0 - Power Manager
  irq_handler_mclk,              // 1 - Main Clock
  irq_handler_oscctrl_0,         // 2 - Oscillators Control 0 (XOSCFAIL 0, XOSCRDY 0)
  irq_handler_oscctrl_1,         // 3 - Oscillators Control 1 (XOSCFAIL 1, XOSCRDY 1)
  irq_handler_oscctrl_2,         // 4 - Oscillators Control 2 (DFLLLOCKC, DFLLLOCKF,
                                 //     DFLLOOB, DFLLRCS DFLLRDY)
  irq_handler_oscctrl_3,         // 5 - Oscillators Control 3 (DPLLLCKF 0, DPLLLCKR 0,
                                 //     DPLLLDRTO 0, DPLLLTO 0)
  irq_handler_oscctrl_4,         // 6 - Oscillators Control 4 (DPLLLCKF 1, DPLLLCKR 1,
                                 //     DPLLLDRTO 1, DPLLLTO 1)
  irq_handler_osc32kctrl,        // 7 - 32kHz Oscillators Control
  irq_handler_supc_0,            // 8 - Supply Controller 0 (B12SRDY, B33SRDY, BOD12RDY,
                                 //     BOD33RDY, VCORERDY, VREGRDY)
  irq_handler_supc_1,            // 9 - Supply Controller 1 (BOD12DET, BOD33DET)
  irq_handler_wdt,               // 10 - Watchdog Timer
  irq_handler_rtc,               // 11 - Real-Time Counter
  irq_handler_eic_0,             // 12 - External Interrupt Controller (EXTINT 0)
  irq_handler_eic_1,             // 13 - External Interrupt Controller (EXTINT 1)
  irq_handler_eic_2,             // 14 - External Interrupt Controller (EXTINT 2)
  irq_handler_eic_3,             // 15 - External Interrupt Controller (EXTINT 3)
  irq_handler_eic_4,             // 16 - External Interrupt Controller (EXTINT 4)
  irq_handler_eic_5,             // 17 - External Interrupt Controller (EXTINT 5)
  irq_handler_eic_6,             // 18 - External Interrupt Controller (EXTINT 6)
  irq_handler_eic_7,             // 19 - External Interrupt Controller (EXTINT 7)
  irq_handler_eic_8,             // 20 - External Interrupt Controller (EXTINT 8)
  irq_handler_eic_9,             // 21 - External Interrupt Controller (EXTINT 9)
  irq_handler_eic_10,            // 22 - External Interrupt Controller (EXTINT 10)
  irq_handler_eic_11,            // 23 - External Interrupt Controller (EXTINT 11)
  irq_handler_eic_12,            // 24 - External Interrupt Controller (EXTINT 12)
  irq_handler_eic_13,            // 25 - External Interrupt Controller (EXTINT 13)
  irq_handler_eic_14,            // 26 - External Interrupt Controller (EXTINT 14)
  irq_handler_eic_15,            // 27 - External Interrupt Controller (EXTINT 15)
  irq_handler_freqm,             // 28 - Frequency Meter
  irq_handler_nvmctrl_0,         // 29 - Non-Volatile Memory Controller (0-7)
  irq_handler_nvmctrl_1,         // 30 - Non-Volatile Memory Controller (8-10)
  irq_handler_dmac_0,            // 31 - Direct Memory Access Controller (SUSP_0, TCMPL_0, TERR_0)
  irq_handler_dmac_1,            // 32 - Direct Memory Access Controller (SUSP_1, TCMPL_1, TERR_1)
  irq_handler_dmac_2,            // 33 - Direct Memory Access Controller (SUSP_2, TCMPL_2, TERR_2)
  irq_handler_dmac_3,            // 34 - Direct Memory Access Controller (SUSP_3, TCMPL_3, TERR_3)
  irq_handler_dmac_4,            // 35 - Direct Memory Access Controller (SUSP_x, TCMPL_x, TERR_x)
  irq_handler_evsys_0,           // 36 - Event System Interface (EVD_0, OVR_0)
  irq_handler_evsys_1,           // 37 - Event System Interface (EVD_1, OVR_1)
  irq_handler_evsys_2,           // 38 - Event System Interface (EVD_2, OVR_2)
  irq_handler_evsys_3,           // 39 - Event System Interface (EVD_3, OVR_3)
  irq_handler_evsys_4,           // 40 - Event System Interface (EVD_x, OVR_x)
  irq_handler_pac,               // 41 - Peripheral Access Controller
  0,                             // 42 - Reserved
  0,                             // 43 - Reserved
  0,                             // 44 - Reserved
  irq_handler_ramecc,            // 45 - RAM ECC
  irq_handler_sercom0_0,         // 46 - Serial Communication Interface 0 (0)
  irq_handler_sercom0_1,         // 47 - Serial Communication Interface 0 (1)
  irq_handler_sercom0_2,         // 48 - Serial Communication Interface 0 (2)
  irq_handler_sercom0_3,         // 49 - Serial Communication Interface 0 (3-6)
  irq_handler_sercom1_0,         // 50 - Serial Communication Interface 1 (0)
  irq_handler_sercom1_1,         // 51 - Serial Communication Interface 1 (1)
  irq_handler_sercom1_2,         // 52 - Serial Communication Interface 1 (2)
  irq_handler_sercom1_3,         // 53 - Serial Communication Interface 1 (3-6)
  irq_handler_sercom2_0,         // 54 - Serial Communication Interface 2 (0)
  irq_handler_sercom2_1,         // 55 - Serial Communication Interface 2 (1)
  irq_handler_sercom2_2,         // 56 - Serial Communication Interface 2 (2)
  irq_handler_sercom2_3,         // 57 - Serial Communication Interface 2 (3-6)
  irq_handler_sercom3_0,         // 58 - Serial Communication Interface 3 (0)
  irq_handler_sercom3_1,         // 59 - Serial Communication Interface 3 (1)
  irq_handler_sercom3_2,         // 60 - Serial Communication Interface 3 (2)
  irq_handler_sercom3_3,         // 61 - Serial Communication Interface 3 (3-6)
  irq_handler_sercom4_0,         // 62 - Serial Communication Interface 4 (0)
  irq_handler_sercom4_1,         // 63 - Serial Communication Interface 4 (1)
  irq_handler_sercom4_2,         // 64 - Serial Communication Interface 4 (2)
  irq_handler_sercom4_3,         // 65 - Serial Communication Interface 4 (3-6)
  irq_handler_sercom5_0,         // 66 - Serial Communication Interface 5 (0)
  irq_handler_sercom5_1,         // 67 - Serial Communication Interface 5 (1)
  irq_handler_sercom5_2,         // 68 - Serial Communication Interface 5 (2)
  irq_handler_sercom5_3,         // 69 - Serial Communication Interface 5 (3-6)
  irq_handler_sercom6_0,         // 70 - Serial Communication Interface 6 (0)
  irq_handler_sercom6_1,         // 71 - Serial Communication Interface 6 (1)
  irq_handler_sercom6_2,         // 72 - Serial Communication Interface 6 (2)
  irq_handler_sercom6_3,         // 73 - Serial Communication Interface 6 (3-6)
  irq_handler_sercom7_0,         // 74 - Serial Communication Interface 7 (0)
  irq_handler_sercom7_1,         // 75 - Serial Communication Interface 7 (1)
  irq_handler_sercom7_2,         // 76 - Serial Communication Interface 7 (2)
  irq_handler_sercom7_3,         // 77 - Serial Communication Interface 7 (3-6)
  irq_handler_can0,              // 78 - Control Area Network 0
  irq_handler_can1,              // 79 - Control Area Network 1
  irq_handler_usb_0,             // 80 - Universal Serial Bus (EORSM_DNRSM, EORST_RST,
                                 //      LPMSUSP_DDISC, LPM_DCONN, MSOF, RAMACER,
                                 //      RXSTP_TXSTP_x, STALL0_STALL_x, STALL1_x, SUSPEND,
                                 //      TRFAIL0_TRFAIL_x, TRFAIL1_PERR_x, UPRSM, WAKEUP)
  irq_handler_usb_1,             // 81 - Universal Serial Bus (SOF_HSOF)
  irq_handler_usb_2,             // 82 - Universal Serial Bus (TRCPT0_x)
  irq_handler_usb_3,             // 83 - Universal Serial Bus (TRCPT1_x)
  irq_handler_gmac,              // 84 - Ethernet MAC
  irq_handler_tcc0_0,            // 85 - Timer Counter Control 0
  irq_handler_tcc0_1,            // 86 - Timer Counter Control 0 (MC 0)
  irq_handler_tcc0_2,            // 87 - Timer Counter Control 0 (MC 1)
  irq_handler_tcc0_3,            // 88 - Timer Counter Control 0 (MC 2)
  irq_handler_tcc0_4,            // 89 - Timer Counter Control 0 (MC 3)
  irq_handler_tcc0_5,            // 90 - Timer Counter Control 0 (MC 4)
  irq_handler_tcc0_6,            // 91 - Timer Counter Control 0 (MC 5)
  irq_handler_tcc1_0,            // 92 - Timer Counter Control 1
  irq_handler_tcc1_1,            // 93 - Timer Counter Control 1 (MC 0)
  irq_handler_tcc1_2,            // 94 - Timer Counter Control 1 (MC 1)
  irq_handler_tcc1_3,            // 95 - Timer Counter Control 1 (MC 2)
  irq_handler_tcc1_4,            // 96 - Timer Counter Control 1 (MC 3)
  irq_handler_tcc2_0,            // 97 - Timer Counter Control 2
  irq_handler_tcc2_1,            // 98 - Timer Counter Control 2 (MC 0)
  irq_handler_tcc2_2,            // 99 - Timer Counter Control 2 (MC 1)
  irq_handler_tcc2_3,            // 100 - Timer Counter Control 2 (MC 2)
  irq_handler_tcc3_0,            // 101 - Timer Counter Control 3
  irq_handler_tcc3_1,            // 102 - Timer Counter Control 3 (MC 0)
  irq_handler_tcc3_2,            // 103 - Timer Counter Control 3 (MC 1)
  irq_handler_tcc4_0,            // 104 - Timer Counter Control 3
  irq_handler_tcc4_1,            // 105 - Timer Counter Control 3 (MC 0)
  irq_handler_tcc4_2,            // 106 - Timer Counter Control 3 (MC 1)
  irq_handler_tc0,               // 107 - Basic Timer Counter 0
  irq_handler_tc1,               // 108 - Basic Timer Counter 1
  irq_handler_tc2,               // 109 - Basic Timer Counter 2
  irq_handler_tc3,               // 110 - Basic Timer Counter 3
  irq_handler_tc4,               // 111 - Basic Timer Counter 4
  irq_handler_tc5,               // 112 - Basic Timer Counter 5
  irq_handler_tc6,               // 113 - Basic Timer Counter 6
  irq_handler_tc7,               // 114 - Basic Timer Counter 7
  irq_handler_pdec_0,            // 115 - Quadrature Decoder (DIR_A, ERR_A, OVF, VLC_A)
  irq_handler_pdec_1,            // 116 - Quadrature Decoder (MC 0)
  irq_handler_pdec_2,            // 117 - Quadrature Decoder (MC 1)
  irq_handler_adc0_0,            // 118 - Analog to Digital Converter 0 (OVERRUN, WINMON)
  irq_handler_adc0_1,            // 119 - Analog to Digital Converter 0 (RESRDY)
  irq_handler_adc1_0,            // 120 - Analog to Digital Converter 0 (OVERRUN, WINMON)
  irq_handler_adc1_1,            // 121 - Analog to Digital Converter 0 (RESRDY)
  irq_handler_ac,                // 122 - Analog Comparators
  irq_handler_dac_0,             // 123 - Digital to Analog Converter (OVERRUN_A_x, UNDERRUN_A_x)
  irq_handler_dac_1,             // 124 - Digital to Analog Converter (EMPTY 0)
  irq_handler_dac_2,             // 125 - Digital to Analog Converter (EMPTY 1)
  irq_handler_dac_3,             // 126 - Digital to Analog Converter (RESRDY 0)
  irq_handler_dac_4,             // 127 - Digital to Analog Converter (RESRDY 1)
  irq_handler_i2s,               // 128 - Inter-IC Sound Interface
  irq_handler_pcc,               // 129 - Parallel Capture Controller
  irq_handler_aes,               // 130 - Advanced Encryption Standard
  irq_handler_trng,              // 131 - True Random Generator
  irq_handler_icm,               // 132 - Integrity Check Monitor
  irq_handler_pukcc,             // 133 - PUblic-Key Cryptography Controller
  irq_handler_qspi,              // 134 Quad SPI interface
  irq_handler_sdhc0,             // 135 SD/MMC Host Controller 0
  irq_handler_sdhc1,             // 136 SD/MMC Host Controller 1
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

