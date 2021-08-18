/**
 * \file
 *
 * \brief Instance description for TWI1
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
#ifndef _SAMG53_TWI1_INSTANCE_H_
#define _SAMG53_TWI1_INSTANCE_H_

/* ========== Register definition for TWI1 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TWI1_CR             (0x4001C000) /**< (TWI1) Control Register */
#define REG_TWI1_MMR            (0x4001C004) /**< (TWI1) Master Mode Register */
#define REG_TWI1_SMR            (0x4001C008) /**< (TWI1) Slave Mode Register */
#define REG_TWI1_IADR           (0x4001C00C) /**< (TWI1) Internal Address Register */
#define REG_TWI1_CWGR           (0x4001C010) /**< (TWI1) Clock Waveform Generator Register */
#define REG_TWI1_SR             (0x4001C020) /**< (TWI1) Status Register */
#define REG_TWI1_IER            (0x4001C024) /**< (TWI1) Interrupt Enable Register */
#define REG_TWI1_IDR            (0x4001C028) /**< (TWI1) Interrupt Disable Register */
#define REG_TWI1_IMR            (0x4001C02C) /**< (TWI1) Interrupt Mask Register */
#define REG_TWI1_RHR            (0x4001C030) /**< (TWI1) Receive Holding Register */
#define REG_TWI1_THR            (0x4001C034) /**< (TWI1) Transmit Holding Register */
#define REG_TWI1_WPMR           (0x4001C0E4) /**< (TWI1) Write Protection Mode Register */
#define REG_TWI1_WPSR           (0x4001C0E8) /**< (TWI1) Write Protection Status Register */
#define REG_TWI1_RPR            (0x4001C100) /**< (TWI1) Receive Pointer Register */
#define REG_TWI1_RCR            (0x4001C104) /**< (TWI1) Receive Counter Register */
#define REG_TWI1_TPR            (0x4001C108) /**< (TWI1) Transmit Pointer Register */
#define REG_TWI1_TCR            (0x4001C10C) /**< (TWI1) Transmit Counter Register */
#define REG_TWI1_RNPR           (0x4001C110) /**< (TWI1) Receive Next Pointer Register */
#define REG_TWI1_RNCR           (0x4001C114) /**< (TWI1) Receive Next Counter Register */
#define REG_TWI1_TNPR           (0x4001C118) /**< (TWI1) Transmit Next Pointer Register */
#define REG_TWI1_TNCR           (0x4001C11C) /**< (TWI1) Transmit Next Counter Register */
#define REG_TWI1_PTCR           (0x4001C120) /**< (TWI1) Transfer Control Register */
#define REG_TWI1_PTSR           (0x4001C124) /**< (TWI1) Transfer Status Register */

#else

#define REG_TWI1_CR             (*(__O  uint32_t*)0x4001C000U) /**< (TWI1) Control Register */
#define REG_TWI1_MMR            (*(__IO uint32_t*)0x4001C004U) /**< (TWI1) Master Mode Register */
#define REG_TWI1_SMR            (*(__IO uint32_t*)0x4001C008U) /**< (TWI1) Slave Mode Register */
#define REG_TWI1_IADR           (*(__IO uint32_t*)0x4001C00CU) /**< (TWI1) Internal Address Register */
#define REG_TWI1_CWGR           (*(__IO uint32_t*)0x4001C010U) /**< (TWI1) Clock Waveform Generator Register */
#define REG_TWI1_SR             (*(__I  uint32_t*)0x4001C020U) /**< (TWI1) Status Register */
#define REG_TWI1_IER            (*(__O  uint32_t*)0x4001C024U) /**< (TWI1) Interrupt Enable Register */
#define REG_TWI1_IDR            (*(__O  uint32_t*)0x4001C028U) /**< (TWI1) Interrupt Disable Register */
#define REG_TWI1_IMR            (*(__I  uint32_t*)0x4001C02CU) /**< (TWI1) Interrupt Mask Register */
#define REG_TWI1_RHR            (*(__I  uint32_t*)0x4001C030U) /**< (TWI1) Receive Holding Register */
#define REG_TWI1_THR            (*(__O  uint32_t*)0x4001C034U) /**< (TWI1) Transmit Holding Register */
#define REG_TWI1_WPMR           (*(__IO uint32_t*)0x4001C0E4U) /**< (TWI1) Write Protection Mode Register */
#define REG_TWI1_WPSR           (*(__I  uint32_t*)0x4001C0E8U) /**< (TWI1) Write Protection Status Register */
#define REG_TWI1_RPR            (*(__IO uint32_t*)0x4001C100U) /**< (TWI1) Receive Pointer Register */
#define REG_TWI1_RCR            (*(__IO uint32_t*)0x4001C104U) /**< (TWI1) Receive Counter Register */
#define REG_TWI1_TPR            (*(__IO uint32_t*)0x4001C108U) /**< (TWI1) Transmit Pointer Register */
#define REG_TWI1_TCR            (*(__IO uint32_t*)0x4001C10CU) /**< (TWI1) Transmit Counter Register */
#define REG_TWI1_RNPR           (*(__IO uint32_t*)0x4001C110U) /**< (TWI1) Receive Next Pointer Register */
#define REG_TWI1_RNCR           (*(__IO uint32_t*)0x4001C114U) /**< (TWI1) Receive Next Counter Register */
#define REG_TWI1_TNPR           (*(__IO uint32_t*)0x4001C118U) /**< (TWI1) Transmit Next Pointer Register */
#define REG_TWI1_TNCR           (*(__IO uint32_t*)0x4001C11CU) /**< (TWI1) Transmit Next Counter Register */
#define REG_TWI1_PTCR           (*(__O  uint32_t*)0x4001C120U) /**< (TWI1) Transfer Control Register */
#define REG_TWI1_PTSR           (*(__I  uint32_t*)0x4001C124U) /**< (TWI1) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TWI1 peripheral ========== */
#define TWI1_INSTANCE_ID                         20        

#endif /* _SAMG53_TWI1_INSTANCE_ */
