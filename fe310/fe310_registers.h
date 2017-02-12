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

#ifndef _FE310_REGISTERS_H_
#define _FE310_REGISTERS_H_

// NOTE: This is very sketchy and temporary.
// I'd really like to see this stuff provided by SiFive.

//-----------------------------------------------------------------------------
#include <stdint.h>
#include "platform.h"
#include "encoding.h"

//-----------------------------------------------------------------------------
#define MMIO_REG(addr, type)   (*(volatile type *)(addr))

#define CLINT_MSIP_REG		MMIO_REG(CLINT_BASE_ADDR + CLINT_MSIP, uint32_t)
#define CLINT_MTIMECMP_REG	MMIO_REG(CLINT_BASE_ADDR + CLINT_MTIMECMP, uint64_t)
#define CLINT_MTIME_REG		MMIO_REG(CLINT_BASE_ADDR + CLINT_MTIME, uint64_t)
#define CLINT_MTIME_LO_REG	MMIO_REG(CLINT_BASE_ADDR + CLINT_MTIME + 0, uint32_t)
#define CLINT_MTIME_HI_REG	MMIO_REG(CLINT_BASE_ADDR + CLINT_MTIME + 4, uint32_t)

#define GPIO_INPUT_VAL_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_INPUT_VAL, uint32_t)
#define GPIO_INPUT_EN_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_INPUT_EN, uint32_t)
#define GPIO_OUTPUT_EN_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_OUTPUT_EN, uint32_t)
#define GPIO_OUTPUT_VAL_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_OUTPUT_VAL, uint32_t)
#define GPIO_PULLUP_EN_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_PULLUP_EN, uint32_t)
#define GPIO_DRIVE_REG		MMIO_REG(GPIO_BASE_ADDR + GPIO_DRIVE, uint32_t)
#define GPIO_RISE_IE_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_RISE_IE, uint32_t)
#define GPIO_RISE_IP_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_RISE_IP, uint32_t)
#define GPIO_FALL_IE_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_FALL_IE, uint32_t)
#define GPIO_FALL_IP_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_FALL_IP, uint32_t)
#define GPIO_HIGH_IE_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_HIGH_IE, uint32_t)
#define GPIO_HIGH_IP_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_HIGH_IP, uint32_t)
#define GPIO_LOW_IE_REG		MMIO_REG(GPIO_BASE_ADDR + GPIO_LOW_IE, uint32_t)
#define GPIO_LOW_IP_REG		MMIO_REG(GPIO_BASE_ADDR + GPIO_LOW_IP, uint32_t)
#define GPIO_IOF_EN_REG		MMIO_REG(GPIO_BASE_ADDR + GPIO_IOF_EN, uint32_t)
#define GPIO_IOF_SEL_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_IOF_SEL, uint32_t)
#define GPIO_OUTPUT_XOR_REG	MMIO_REG(GPIO_BASE_ADDR + GPIO_OUTPUT_XOR, uint32_t)

#define PRCI_HFROSCCFG_REG	MMIO_REG(PRCI_BASE_ADDR + PRCI_HFROSCCFG, uint32_t)
#define PRCI_HFXOSCCFG_REG	MMIO_REG(PRCI_BASE_ADDR + PRCI_HFXOSCCFG, uint32_t)
#define PRCI_PLLCFG_REG		MMIO_REG(PRCI_BASE_ADDR + PRCI_PLLCFG, uint32_t)
#define PRCI_PLLDIV_REG		MMIO_REG(PRCI_BASE_ADDR + PRCI_PLLDIV, uint32_t)
#define PRCI_PROCMONCFG_REG	MMIO_REG(PRCI_BASE_ADDR + PRCI_PROCMONCFG, uint32_t)

// PLIC_BASE_ADDR
// AON_BASE_ADDR
// OTP_BASE_ADDR

// UART0_BASE_ADDR
// UART1_BASE_ADDR

// SPI0_BASE_ADDR
// SPI1_BASE_ADDR
// SPI2_BASE_ADDR

// PWM0_BASE_ADDR
// PWM1_BASE_ADDR
// PWM2_BASE_ADDR

/*
#define UART_REG_TXFIFO         0x00
#define UART_REG_RXFIFO         0x04
#define UART_REG_TXCTRL         0x08
#define UART_REG_RXCTRL         0x0c
#define UART_REG_IE             0x10
#define UART_REG_IP             0x14
#define UART_REG_DIV            0x18
*/

#endif // _FE310_REGISTERS_H_

