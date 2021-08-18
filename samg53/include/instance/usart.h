/**
 * \file
 *
 * \brief Instance description for USART
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
#ifndef _SAMG53_USART_INSTANCE_H_
#define _SAMG53_USART_INSTANCE_H_

/* ========== Register definition for USART peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_USART_US_CR         (0x40024000) /**< (USART) Control Register */
#define REG_USART_US_MR         (0x40024004) /**< (USART) Mode Register */
#define REG_USART_US_IER        (0x40024008) /**< (USART) Interrupt Enable Register */
#define REG_USART_US_IDR        (0x4002400C) /**< (USART) Interrupt Disable Register */
#define REG_USART_US_IMR        (0x40024010) /**< (USART) Interrupt Mask Register */
#define REG_USART_US_CSR        (0x40024014) /**< (USART) Channel Status Register */
#define REG_USART_US_RHR        (0x40024018) /**< (USART) Receive Holding Register */
#define REG_USART_US_THR        (0x4002401C) /**< (USART) Transmit Holding Register */
#define REG_USART_US_BRGR       (0x40024020) /**< (USART) Baud Rate Generator Register */
#define REG_USART_US_RTOR       (0x40024024) /**< (USART) Receiver Time-out Register */
#define REG_USART_US_TTGR       (0x40024028) /**< (USART) Transmitter Timeguard Register */
#define REG_USART_US_NER        (0x40024044) /**< (USART) Number of Errors Register */
#define REG_USART_US_WPMR       (0x400240E4) /**< (USART) Write Protection Mode Register */
#define REG_USART_US_WPSR       (0x400240E8) /**< (USART) Write Protection Status Register */
#define REG_USART_US_RPR        (0x40024100) /**< (USART) Receive Pointer Register */
#define REG_USART_US_RCR        (0x40024104) /**< (USART) Receive Counter Register */
#define REG_USART_US_TPR        (0x40024108) /**< (USART) Transmit Pointer Register */
#define REG_USART_US_TCR        (0x4002410C) /**< (USART) Transmit Counter Register */
#define REG_USART_US_RNPR       (0x40024110) /**< (USART) Receive Next Pointer Register */
#define REG_USART_US_RNCR       (0x40024114) /**< (USART) Receive Next Counter Register */
#define REG_USART_US_TNPR       (0x40024118) /**< (USART) Transmit Next Pointer Register */
#define REG_USART_US_TNCR       (0x4002411C) /**< (USART) Transmit Next Counter Register */
#define REG_USART_US_PTCR       (0x40024120) /**< (USART) Transfer Control Register */
#define REG_USART_US_PTSR       (0x40024124) /**< (USART) Transfer Status Register */

#else

#define REG_USART_US_CR         (*(__O  uint32_t*)0x40024000U) /**< (USART) Control Register */
#define REG_USART_US_MR         (*(__IO uint32_t*)0x40024004U) /**< (USART) Mode Register */
#define REG_USART_US_IER        (*(__O  uint32_t*)0x40024008U) /**< (USART) Interrupt Enable Register */
#define REG_USART_US_IDR        (*(__O  uint32_t*)0x4002400CU) /**< (USART) Interrupt Disable Register */
#define REG_USART_US_IMR        (*(__I  uint32_t*)0x40024010U) /**< (USART) Interrupt Mask Register */
#define REG_USART_US_CSR        (*(__I  uint32_t*)0x40024014U) /**< (USART) Channel Status Register */
#define REG_USART_US_RHR        (*(__I  uint32_t*)0x40024018U) /**< (USART) Receive Holding Register */
#define REG_USART_US_THR        (*(__O  uint32_t*)0x4002401CU) /**< (USART) Transmit Holding Register */
#define REG_USART_US_BRGR       (*(__IO uint32_t*)0x40024020U) /**< (USART) Baud Rate Generator Register */
#define REG_USART_US_RTOR       (*(__IO uint32_t*)0x40024024U) /**< (USART) Receiver Time-out Register */
#define REG_USART_US_TTGR       (*(__IO uint32_t*)0x40024028U) /**< (USART) Transmitter Timeguard Register */
#define REG_USART_US_NER        (*(__I  uint32_t*)0x40024044U) /**< (USART) Number of Errors Register */
#define REG_USART_US_WPMR       (*(__IO uint32_t*)0x400240E4U) /**< (USART) Write Protection Mode Register */
#define REG_USART_US_WPSR       (*(__I  uint32_t*)0x400240E8U) /**< (USART) Write Protection Status Register */
#define REG_USART_US_RPR        (*(__IO uint32_t*)0x40024100U) /**< (USART) Receive Pointer Register */
#define REG_USART_US_RCR        (*(__IO uint32_t*)0x40024104U) /**< (USART) Receive Counter Register */
#define REG_USART_US_TPR        (*(__IO uint32_t*)0x40024108U) /**< (USART) Transmit Pointer Register */
#define REG_USART_US_TCR        (*(__IO uint32_t*)0x4002410CU) /**< (USART) Transmit Counter Register */
#define REG_USART_US_RNPR       (*(__IO uint32_t*)0x40024110U) /**< (USART) Receive Next Pointer Register */
#define REG_USART_US_RNCR       (*(__IO uint32_t*)0x40024114U) /**< (USART) Receive Next Counter Register */
#define REG_USART_US_TNPR       (*(__IO uint32_t*)0x40024118U) /**< (USART) Transmit Next Pointer Register */
#define REG_USART_US_TNCR       (*(__IO uint32_t*)0x4002411CU) /**< (USART) Transmit Next Counter Register */
#define REG_USART_US_PTCR       (*(__O  uint32_t*)0x40024120U) /**< (USART) Transfer Control Register */
#define REG_USART_US_PTSR       (*(__I  uint32_t*)0x40024124U) /**< (USART) Transfer Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for USART peripheral ========== */
#define USART_INSTANCE_ID                        14        

#endif /* _SAMG53_USART_INSTANCE_ */
