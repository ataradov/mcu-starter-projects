/**
 * \file
 *
 * \brief Instance description for TWI0
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
#ifndef _SAMG53_TWI0_INSTANCE_H_
#define _SAMG53_TWI0_INSTANCE_H_

/* ========== Register definition for TWI0 peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_TWI0_CR             (0x40018000) /**< (TWI0) Control Register */
#define REG_TWI0_MMR            (0x40018004) /**< (TWI0) Master Mode Register */
#define REG_TWI0_SMR            (0x40018008) /**< (TWI0) Slave Mode Register */
#define REG_TWI0_IADR           (0x4001800C) /**< (TWI0) Internal Address Register */
#define REG_TWI0_CWGR           (0x40018010) /**< (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR             (0x40018020) /**< (TWI0) Status Register */
#define REG_TWI0_IER            (0x40018024) /**< (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR            (0x40018028) /**< (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR            (0x4001802C) /**< (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR            (0x40018030) /**< (TWI0) Receive Holding Register */
#define REG_TWI0_THR            (0x40018034) /**< (TWI0) Transmit Holding Register */
#define REG_TWI0_SMBTR          (0x40018038) /**< (TWI0) SMBus Timing Register */
#define REG_TWI0_FILTR          (0x40018044) /**< (TWI0) Filter Register */
#define REG_TWI0_SWMR           (0x4001804C) /**< (TWI0) SleepWalking Matching Register */
#define REG_TWI0_WPMR           (0x400180E4) /**< (TWI0) Write Protection Mode Register */
#define REG_TWI0_WPSR           (0x400180E8) /**< (TWI0) Write Protection Status Register */
#define REG_TWI0_RPR            (0x40018100) /**< (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR            (0x40018104) /**< (TWI0) Receive Counter Register */
#define REG_TWI0_TPR            (0x40018108) /**< (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR            (0x4001810C) /**< (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR           (0x40018110) /**< (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR           (0x40018114) /**< (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR           (0x40018118) /**< (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR           (0x4001811C) /**< (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR           (0x40018120) /**< (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR           (0x40018124) /**< (TWI0) Transfer Status Register */

#else

#define REG_TWI0_CR             (*(__O  uint32_t*)0x40018000U) /**< (TWI0) Control Register */
#define REG_TWI0_MMR            (*(__IO uint32_t*)0x40018004U) /**< (TWI0) Master Mode Register */
#define REG_TWI0_SMR            (*(__IO uint32_t*)0x40018008U) /**< (TWI0) Slave Mode Register */
#define REG_TWI0_IADR           (*(__IO uint32_t*)0x4001800CU) /**< (TWI0) Internal Address Register */
#define REG_TWI0_CWGR           (*(__IO uint32_t*)0x40018010U) /**< (TWI0) Clock Waveform Generator Register */
#define REG_TWI0_SR             (*(__I  uint32_t*)0x40018020U) /**< (TWI0) Status Register */
#define REG_TWI0_IER            (*(__O  uint32_t*)0x40018024U) /**< (TWI0) Interrupt Enable Register */
#define REG_TWI0_IDR            (*(__O  uint32_t*)0x40018028U) /**< (TWI0) Interrupt Disable Register */
#define REG_TWI0_IMR            (*(__I  uint32_t*)0x4001802CU) /**< (TWI0) Interrupt Mask Register */
#define REG_TWI0_RHR            (*(__I  uint32_t*)0x40018030U) /**< (TWI0) Receive Holding Register */
#define REG_TWI0_THR            (*(__O  uint32_t*)0x40018034U) /**< (TWI0) Transmit Holding Register */
#define REG_TWI0_SMBTR          (*(__IO uint32_t*)0x40018038U) /**< (TWI0) SMBus Timing Register */
#define REG_TWI0_FILTR          (*(__IO uint32_t*)0x40018044U) /**< (TWI0) Filter Register */
#define REG_TWI0_SWMR           (*(__IO uint32_t*)0x4001804CU) /**< (TWI0) SleepWalking Matching Register */
#define REG_TWI0_WPMR           (*(__IO uint32_t*)0x400180E4U) /**< (TWI0) Write Protection Mode Register */
#define REG_TWI0_WPSR           (*(__I  uint32_t*)0x400180E8U) /**< (TWI0) Write Protection Status Register */
#define REG_TWI0_RPR            (*(__IO uint32_t*)0x40018100U) /**< (TWI0) Receive Pointer Register */
#define REG_TWI0_RCR            (*(__IO uint32_t*)0x40018104U) /**< (TWI0) Receive Counter Register */
#define REG_TWI0_TPR            (*(__IO uint32_t*)0x40018108U) /**< (TWI0) Transmit Pointer Register */
#define REG_TWI0_TCR            (*(__IO uint32_t*)0x4001810CU) /**< (TWI0) Transmit Counter Register */
#define REG_TWI0_RNPR           (*(__IO uint32_t*)0x40018110U) /**< (TWI0) Receive Next Pointer Register */
#define REG_TWI0_RNCR           (*(__IO uint32_t*)0x40018114U) /**< (TWI0) Receive Next Counter Register */
#define REG_TWI0_TNPR           (*(__IO uint32_t*)0x40018118U) /**< (TWI0) Transmit Next Pointer Register */
#define REG_TWI0_TNCR           (*(__IO uint32_t*)0x4001811CU) /**< (TWI0) Transmit Next Counter Register */
#define REG_TWI0_PTCR           (*(__O  uint32_t*)0x40018120U) /**< (TWI0) Transfer Control Register */
#define REG_TWI0_PTSR           (*(__I  uint32_t*)0x40018124U) /**< (TWI0) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for TWI0 peripheral ========== */
#define TWI0_INSTANCE_ID                         19        

#endif /* _SAMG53_TWI0_INSTANCE_ */
