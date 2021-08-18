/**
 * \file
 *
 * \brief Instance description for UART0
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
#ifndef _SAMG53_UART0_INSTANCE_H_
#define _SAMG53_UART0_INSTANCE_H_

/* ========== Register definition for UART0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_UART0_CR            (0x400E0600) /**< (UART0) Control Register */
#define REG_UART0_MR            (0x400E0604) /**< (UART0) Mode Register */
#define REG_UART0_IER           (0x400E0608) /**< (UART0) Interrupt Enable Register */
#define REG_UART0_IDR           (0x400E060C) /**< (UART0) Interrupt Disable Register */
#define REG_UART0_IMR           (0x400E0610) /**< (UART0) Interrupt Mask Register */
#define REG_UART0_SR            (0x400E0614) /**< (UART0) Status Register */
#define REG_UART0_RHR           (0x400E0618) /**< (UART0) Receive Holding Register */
#define REG_UART0_THR           (0x400E061C) /**< (UART0) Transmit Holding Register */
#define REG_UART0_BRGR          (0x400E0620) /**< (UART0) Baud Rate Generator Register */
#define REG_UART0_CMPR          (0x400E0624) /**< (UART0) Comparison Register */
#define REG_UART0_WPMR          (0x400E06E4) /**< (UART0) Write Protection Mode Register */
#define REG_UART0_RPR           (0x400E0700) /**< (UART0) Receive Pointer Register */
#define REG_UART0_RCR           (0x400E0704) /**< (UART0) Receive Counter Register */
#define REG_UART0_TPR           (0x400E0708) /**< (UART0) Transmit Pointer Register */
#define REG_UART0_TCR           (0x400E070C) /**< (UART0) Transmit Counter Register */
#define REG_UART0_RNPR          (0x400E0710) /**< (UART0) Receive Next Pointer Register */
#define REG_UART0_RNCR          (0x400E0714) /**< (UART0) Receive Next Counter Register */
#define REG_UART0_TNPR          (0x400E0718) /**< (UART0) Transmit Next Pointer Register */
#define REG_UART0_TNCR          (0x400E071C) /**< (UART0) Transmit Next Counter Register */
#define REG_UART0_PTCR          (0x400E0720) /**< (UART0) Transfer Control Register */
#define REG_UART0_PTSR          (0x400E0724) /**< (UART0) Transfer Status Register */

#else

#define REG_UART0_CR            (*(__O  uint32_t*)0x400E0600U) /**< (UART0) Control Register */
#define REG_UART0_MR            (*(__IO uint32_t*)0x400E0604U) /**< (UART0) Mode Register */
#define REG_UART0_IER           (*(__O  uint32_t*)0x400E0608U) /**< (UART0) Interrupt Enable Register */
#define REG_UART0_IDR           (*(__O  uint32_t*)0x400E060CU) /**< (UART0) Interrupt Disable Register */
#define REG_UART0_IMR           (*(__I  uint32_t*)0x400E0610U) /**< (UART0) Interrupt Mask Register */
#define REG_UART0_SR            (*(__I  uint32_t*)0x400E0614U) /**< (UART0) Status Register */
#define REG_UART0_RHR           (*(__I  uint32_t*)0x400E0618U) /**< (UART0) Receive Holding Register */
#define REG_UART0_THR           (*(__O  uint32_t*)0x400E061CU) /**< (UART0) Transmit Holding Register */
#define REG_UART0_BRGR          (*(__IO uint32_t*)0x400E0620U) /**< (UART0) Baud Rate Generator Register */
#define REG_UART0_CMPR          (*(__IO uint32_t*)0x400E0624U) /**< (UART0) Comparison Register */
#define REG_UART0_WPMR          (*(__IO uint32_t*)0x400E06E4U) /**< (UART0) Write Protection Mode Register */
#define REG_UART0_RPR           (*(__IO uint32_t*)0x400E0700U) /**< (UART0) Receive Pointer Register */
#define REG_UART0_RCR           (*(__IO uint32_t*)0x400E0704U) /**< (UART0) Receive Counter Register */
#define REG_UART0_TPR           (*(__IO uint32_t*)0x400E0708U) /**< (UART0) Transmit Pointer Register */
#define REG_UART0_TCR           (*(__IO uint32_t*)0x400E070CU) /**< (UART0) Transmit Counter Register */
#define REG_UART0_RNPR          (*(__IO uint32_t*)0x400E0710U) /**< (UART0) Receive Next Pointer Register */
#define REG_UART0_RNCR          (*(__IO uint32_t*)0x400E0714U) /**< (UART0) Receive Next Counter Register */
#define REG_UART0_TNPR          (*(__IO uint32_t*)0x400E0718U) /**< (UART0) Transmit Next Pointer Register */
#define REG_UART0_TNCR          (*(__IO uint32_t*)0x400E071CU) /**< (UART0) Transmit Next Counter Register */
#define REG_UART0_PTCR          (*(__O  uint32_t*)0x400E0720U) /**< (UART0) Transfer Control Register */
#define REG_UART0_PTSR          (*(__I  uint32_t*)0x400E0724U) /**< (UART0) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for UART0 peripheral ========== */
#define UART0_INSTANCE_ID                        8         

#endif /* _SAMG53_UART0_INSTANCE_ */
