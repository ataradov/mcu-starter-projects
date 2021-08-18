/**
 * \file
 *
 * \brief Instance description for SPI
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
#ifndef _SAMG53_SPI_INSTANCE_H_
#define _SAMG53_SPI_INSTANCE_H_

/* ========== Register definition for SPI peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SPI_CR              (0x40008000) /**< (SPI) Control Register */
#define REG_SPI_MR              (0x40008004) /**< (SPI) Mode Register */
#define REG_SPI_RDR             (0x40008008) /**< (SPI) Receive Data Register */
#define REG_SPI_TDR             (0x4000800C) /**< (SPI) Transmit Data Register */
#define REG_SPI_SR              (0x40008010) /**< (SPI) Status Register */
#define REG_SPI_IER             (0x40008014) /**< (SPI) Interrupt Enable Register */
#define REG_SPI_IDR             (0x40008018) /**< (SPI) Interrupt Disable Register */
#define REG_SPI_IMR             (0x4000801C) /**< (SPI) Interrupt Mask Register */
#define REG_SPI_CSR             (0x40008030) /**< (SPI) Chip Select Register 0 */
#define REG_SPI_CSR0            (0x40008030) /**< (SPI) Chip Select Register 0 */
#define REG_SPI_CSR1            (0x40008034) /**< (SPI) Chip Select Register 1 */
#define REG_SPI_WPMR            (0x400080E4) /**< (SPI) Write Protection Mode Register */
#define REG_SPI_WPSR            (0x400080E8) /**< (SPI) Write Protection Status Register */
#define REG_SPI_RPR             (0x40008100) /**< (SPI) Receive Pointer Register */
#define REG_SPI_RCR             (0x40008104) /**< (SPI) Receive Counter Register */
#define REG_SPI_TPR             (0x40008108) /**< (SPI) Transmit Pointer Register */
#define REG_SPI_TCR             (0x4000810C) /**< (SPI) Transmit Counter Register */
#define REG_SPI_RNPR            (0x40008110) /**< (SPI) Receive Next Pointer Register */
#define REG_SPI_RNCR            (0x40008114) /**< (SPI) Receive Next Counter Register */
#define REG_SPI_TNPR            (0x40008118) /**< (SPI) Transmit Next Pointer Register */
#define REG_SPI_TNCR            (0x4000811C) /**< (SPI) Transmit Next Counter Register */
#define REG_SPI_PTCR            (0x40008120) /**< (SPI) Transfer Control Register */
#define REG_SPI_PTSR            (0x40008124) /**< (SPI) Transfer Status Register */

#else

#define REG_SPI_CR              (*(__O  uint32_t*)0x40008000U) /**< (SPI) Control Register */
#define REG_SPI_MR              (*(__IO uint32_t*)0x40008004U) /**< (SPI) Mode Register */
#define REG_SPI_RDR             (*(__I  uint32_t*)0x40008008U) /**< (SPI) Receive Data Register */
#define REG_SPI_TDR             (*(__O  uint32_t*)0x4000800CU) /**< (SPI) Transmit Data Register */
#define REG_SPI_SR              (*(__I  uint32_t*)0x40008010U) /**< (SPI) Status Register */
#define REG_SPI_IER             (*(__O  uint32_t*)0x40008014U) /**< (SPI) Interrupt Enable Register */
#define REG_SPI_IDR             (*(__O  uint32_t*)0x40008018U) /**< (SPI) Interrupt Disable Register */
#define REG_SPI_IMR             (*(__I  uint32_t*)0x4000801CU) /**< (SPI) Interrupt Mask Register */
#define REG_SPI_CSR             (*(__IO uint32_t*)0x40008030U) /**< (SPI) Chip Select Register 0 */
#define REG_SPI_CSR0            (*(__IO uint32_t*)0x40008030U) /**< (SPI) Chip Select Register 0 */
#define REG_SPI_CSR1            (*(__IO uint32_t*)0x40008034U) /**< (SPI) Chip Select Register 1 */
#define REG_SPI_WPMR            (*(__IO uint32_t*)0x400080E4U) /**< (SPI) Write Protection Mode Register */
#define REG_SPI_WPSR            (*(__I  uint32_t*)0x400080E8U) /**< (SPI) Write Protection Status Register */
#define REG_SPI_RPR             (*(__IO uint32_t*)0x40008100U) /**< (SPI) Receive Pointer Register */
#define REG_SPI_RCR             (*(__IO uint32_t*)0x40008104U) /**< (SPI) Receive Counter Register */
#define REG_SPI_TPR             (*(__IO uint32_t*)0x40008108U) /**< (SPI) Transmit Pointer Register */
#define REG_SPI_TCR             (*(__IO uint32_t*)0x4000810CU) /**< (SPI) Transmit Counter Register */
#define REG_SPI_RNPR            (*(__IO uint32_t*)0x40008110U) /**< (SPI) Receive Next Pointer Register */
#define REG_SPI_RNCR            (*(__IO uint32_t*)0x40008114U) /**< (SPI) Receive Next Counter Register */
#define REG_SPI_TNPR            (*(__IO uint32_t*)0x40008118U) /**< (SPI) Transmit Next Pointer Register */
#define REG_SPI_TNCR            (*(__IO uint32_t*)0x4000811CU) /**< (SPI) Transmit Next Counter Register */
#define REG_SPI_PTCR            (*(__O  uint32_t*)0x40008120U) /**< (SPI) Transfer Control Register */
#define REG_SPI_PTSR            (*(__I  uint32_t*)0x40008124U) /**< (SPI) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SPI peripheral ========== */
#define SPI_INSTANCE_ID                          21        

#endif /* _SAMG53_SPI_INSTANCE_ */
