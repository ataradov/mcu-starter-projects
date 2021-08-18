/**
 * \file
 *
 * \brief Instance description for UART1
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-07-05T18:00:00Z */
#ifndef _SAMG53_UART1_INSTANCE_H_
#define _SAMG53_UART1_INSTANCE_H_

/* ========== Register definition for UART1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UART1_CR            (0x400E0800) /**< (UART1) Control Register */
#define REG_UART1_MR            (0x400E0804) /**< (UART1) Mode Register */
#define REG_UART1_IER           (0x400E0808) /**< (UART1) Interrupt Enable Register */
#define REG_UART1_IDR           (0x400E080C) /**< (UART1) Interrupt Disable Register */
#define REG_UART1_IMR           (0x400E0810) /**< (UART1) Interrupt Mask Register */
#define REG_UART1_SR            (0x400E0814) /**< (UART1) Status Register */
#define REG_UART1_RHR           (0x400E0818) /**< (UART1) Receive Holding Register */
#define REG_UART1_THR           (0x400E081C) /**< (UART1) Transmit Holding Register */
#define REG_UART1_BRGR          (0x400E0820) /**< (UART1) Baud Rate Generator Register */
#define REG_UART1_CMPR          (0x400E0824) /**< (UART1) Comparison Register */
#define REG_UART1_WPMR          (0x400E08E4) /**< (UART1) Write Protection Mode Register */
#define REG_UART1_RPR           (0x400E0900) /**< (UART1) Receive Pointer Register */
#define REG_UART1_RCR           (0x400E0904) /**< (UART1) Receive Counter Register */
#define REG_UART1_TPR           (0x400E0908) /**< (UART1) Transmit Pointer Register */
#define REG_UART1_TCR           (0x400E090C) /**< (UART1) Transmit Counter Register */
#define REG_UART1_RNPR          (0x400E0910) /**< (UART1) Receive Next Pointer Register */
#define REG_UART1_RNCR          (0x400E0914) /**< (UART1) Receive Next Counter Register */
#define REG_UART1_TNPR          (0x400E0918) /**< (UART1) Transmit Next Pointer Register */
#define REG_UART1_TNCR          (0x400E091C) /**< (UART1) Transmit Next Counter Register */
#define REG_UART1_PTCR          (0x400E0920) /**< (UART1) Transfer Control Register */
#define REG_UART1_PTSR          (0x400E0924) /**< (UART1) Transfer Status Register */

#else

#define REG_UART1_CR            (*(__O  uint32_t*)0x400E0800U) /**< (UART1) Control Register */
#define REG_UART1_MR            (*(__IO uint32_t*)0x400E0804U) /**< (UART1) Mode Register */
#define REG_UART1_IER           (*(__O  uint32_t*)0x400E0808U) /**< (UART1) Interrupt Enable Register */
#define REG_UART1_IDR           (*(__O  uint32_t*)0x400E080CU) /**< (UART1) Interrupt Disable Register */
#define REG_UART1_IMR           (*(__I  uint32_t*)0x400E0810U) /**< (UART1) Interrupt Mask Register */
#define REG_UART1_SR            (*(__I  uint32_t*)0x400E0814U) /**< (UART1) Status Register */
#define REG_UART1_RHR           (*(__I  uint32_t*)0x400E0818U) /**< (UART1) Receive Holding Register */
#define REG_UART1_THR           (*(__O  uint32_t*)0x400E081CU) /**< (UART1) Transmit Holding Register */
#define REG_UART1_BRGR          (*(__IO uint32_t*)0x400E0820U) /**< (UART1) Baud Rate Generator Register */
#define REG_UART1_CMPR          (*(__IO uint32_t*)0x400E0824U) /**< (UART1) Comparison Register */
#define REG_UART1_WPMR          (*(__IO uint32_t*)0x400E08E4U) /**< (UART1) Write Protection Mode Register */
#define REG_UART1_RPR           (*(__IO uint32_t*)0x400E0900U) /**< (UART1) Receive Pointer Register */
#define REG_UART1_RCR           (*(__IO uint32_t*)0x400E0904U) /**< (UART1) Receive Counter Register */
#define REG_UART1_TPR           (*(__IO uint32_t*)0x400E0908U) /**< (UART1) Transmit Pointer Register */
#define REG_UART1_TCR           (*(__IO uint32_t*)0x400E090CU) /**< (UART1) Transmit Counter Register */
#define REG_UART1_RNPR          (*(__IO uint32_t*)0x400E0910U) /**< (UART1) Receive Next Pointer Register */
#define REG_UART1_RNCR          (*(__IO uint32_t*)0x400E0914U) /**< (UART1) Receive Next Counter Register */
#define REG_UART1_TNPR          (*(__IO uint32_t*)0x400E0918U) /**< (UART1) Transmit Next Pointer Register */
#define REG_UART1_TNCR          (*(__IO uint32_t*)0x400E091CU) /**< (UART1) Transmit Next Counter Register */
#define REG_UART1_PTCR          (*(__O  uint32_t*)0x400E0920U) /**< (UART1) Transfer Control Register */
#define REG_UART1_PTSR          (*(__I  uint32_t*)0x400E0924U) /**< (UART1) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UART1 peripheral ========== */
#define UART1_INSTANCE_ID                        9         

#endif /* _SAMG53_UART1_INSTANCE_ */
