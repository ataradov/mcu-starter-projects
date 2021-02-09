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

//-----------------------------------------------------------------------------
#include "rp2040.h"

//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))

//-----------------------------------------------------------------------------
void irq_handler_reset(void);
DUMMY void irq_handler_nmi(void);
DUMMY void irq_handler_hard_fault(void);
DUMMY void irq_handler_sv_call(void);
DUMMY void irq_handler_pend_sv(void);
DUMMY void irq_handler_sys_tick(void);

DUMMY void irq_handler_timer0(void);
DUMMY void irq_handler_timer1(void);
DUMMY void irq_handler_timer2(void);
DUMMY void irq_handler_timer3(void);
DUMMY void irq_handler_pwm(void);
DUMMY void irq_handler_usb(void);
DUMMY void irq_handler_xip(void);
DUMMY void irq_handler_pio_0_0(void);
DUMMY void irq_handler_pio_0_1(void);
DUMMY void irq_handler_pio_1_0(void);
DUMMY void irq_handler_pio_1_1(void);
DUMMY void irq_handler_dma0(void);
DUMMY void irq_handler_dma1(void);
DUMMY void irq_handler_io(void);
DUMMY void irq_handler_qspi(void);
DUMMY void irq_handler_sio0(void);
DUMMY void irq_handler_sio1(void);
DUMMY void irq_handler_clocks(void);
DUMMY void irq_handler_spi0(void);
DUMMY void irq_handler_spi1(void);
DUMMY void irq_handler_uart0(void);
DUMMY void irq_handler_uart1(void);
DUMMY void irq_handler_adc(void);
DUMMY void irq_handler_i2c0(void);
DUMMY void irq_handler_i2c1(void);
DUMMY void irq_handler_rtc(void);

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
  irq_handler_reset,             // 1  - Reset
  irq_handler_nmi,               // 2  - NMI
  irq_handler_hard_fault,        // 3  - Hard Fault
  0,                             // 4  - Reserved
  0,                             // 5  - Reserved
  0,                             // 6  - Reserved
  0,                             // 7  - Reserved
  0,                             // 8  - Reserved
  0,                             // 9  - Reserved
  0,                             // 10 - Reserved
  irq_handler_sv_call,           // 11 - SVCall
  0,                             // 12 - Reserved
  0,                             // 13 - Reserved
  irq_handler_pend_sv,           // 14 - PendSV
  irq_handler_sys_tick,          // 15 - SysTick

  // Peripheral handlers
  irq_handler_timer0,            // 0  - Timer 0
  irq_handler_timer1,            // 1  - Timer 1
  irq_handler_timer2,            // 2  - Timer 2
  irq_handler_timer3,            // 3  - Timer 3
  irq_handler_pwm,               // 4  - PWM
  irq_handler_usb,               // 5  - USB
  irq_handler_xip,               // 6  - XIP
  irq_handler_pio_0_0,           // 7  - PIO_0_0
  irq_handler_pio_0_1,           // 8  - PIO_0_1
  irq_handler_pio_1_0,           // 9  - PIO_1_0
  irq_handler_pio_1_1,           // 10 - PIO_1_1
  irq_handler_dma0,              // 11 - DMA0
  irq_handler_dma1,              // 12 - DMA1
  irq_handler_io,                // 13 - IO
  irq_handler_qspi,              // 14 - Quad SPI
  irq_handler_sio0,              // 15 - SIO0
  irq_handler_sio1,              // 16 - SIO1
  irq_handler_clocks,            // 17 - CLOCKS
  irq_handler_spi0,              // 18 - SPI0
  irq_handler_spi1,              // 19 - SPI1
  irq_handler_uart0,             // 20 - UART0
  irq_handler_uart1,             // 21 - UART1
  irq_handler_adc,               // 22 - ADC
  irq_handler_i2c0,              // 23 - I2C0
  irq_handler_i2c1,              // 24 - I2C1
  irq_handler_rtc,               // 25 - Real Time Clock
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

  scb_hw->vtor = (uint32_t)vectors;

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

/* the first 256 bytes is CRC-32 protected bootstrap code to configure the flash QSPI */

__attribute__ ((used, section(".boot")))
const uint8_t bs2[] =
{
  0x00, 0xb5, 0x32, 0x4b, 0x21, 0x20, 0x58, 0x60, 0x98, 0x68, 0x02, 0x21, 0x88, 0x43, 0x98, 0x60,
  0xd8, 0x60, 0x18, 0x61, 0x58, 0x61, 0x2e, 0x4b, 0x00, 0x21, 0x99, 0x60, 0x02, 0x21, 0x59, 0x61,
  0x01, 0x21, 0xf0, 0x22, 0x99, 0x50, 0x2b, 0x49, 0x19, 0x60, 0x01, 0x21, 0x99, 0x60, 0x35, 0x20,
  0x00, 0xf0, 0x44, 0xf8, 0x02, 0x22, 0x90, 0x42, 0x14, 0xd0, 0x06, 0x21, 0x19, 0x66, 0x00, 0xf0,
  0x34, 0xf8, 0x19, 0x6e, 0x01, 0x21, 0x19, 0x66, 0x00, 0x20, 0x18, 0x66, 0x1a, 0x66, 0x00, 0xf0,
  0x2c, 0xf8, 0x19, 0x6e, 0x19, 0x6e, 0x19, 0x6e, 0x05, 0x20, 0x00, 0xf0, 0x2f, 0xf8, 0x01, 0x21,
  0x08, 0x42, 0xf9, 0xd1, 0x00, 0x21, 0x99, 0x60, 0x1b, 0x49, 0x19, 0x60, 0x00, 0x21, 0x59, 0x60,
  0x1a, 0x49, 0x1b, 0x48, 0x01, 0x60, 0x01, 0x21, 0x99, 0x60, 0xeb, 0x21, 0x19, 0x66, 0xa0, 0x21,
  0x19, 0x66, 0x00, 0xf0, 0x12, 0xf8, 0x00, 0x21, 0x99, 0x60, 0x16, 0x49, 0x14, 0x48, 0x01, 0x60,
  0x01, 0x21, 0x99, 0x60, 0x01, 0xbc, 0x00, 0x28, 0x00, 0xd0, 0x00, 0x47, 0x12, 0x48, 0x13, 0x49,
  0x08, 0x60, 0x03, 0xc8, 0x80, 0xf3, 0x08, 0x88, 0x08, 0x47, 0x03, 0xb5, 0x99, 0x6a, 0x04, 0x20,
  0x01, 0x42, 0xfb, 0xd0, 0x01, 0x20, 0x01, 0x42, 0xf8, 0xd1, 0x03, 0xbd, 0x02, 0xb5, 0x18, 0x66,
  0x18, 0x66, 0xff, 0xf7, 0xf2, 0xff, 0x18, 0x6e, 0x18, 0x6e, 0x02, 0xbd, 0x00, 0x00, 0x02, 0x40,
  0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x07, 0x00, 0x00, 0x03, 0x5f, 0x00, 0x21, 0x22, 0x00, 0x00,
  0xf4, 0x00, 0x00, 0x18, 0x22, 0x20, 0x00, 0xa0, 0x00, 0x01, 0x00, 0x10, 0x08, 0xed, 0x00, 0xe0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x74, 0xb2, 0x4e, 0x7a,
};

