/**
 * \file
 *
 * \brief Instance description for SUPC
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
#ifndef _SAMG53_SUPC_INSTANCE_H_
#define _SAMG53_SUPC_INSTANCE_H_

/* ========== Register definition for SUPC peripheral ========== */
#if (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))

#define REG_SUPC_CR             (0x400E1410) /**< (SUPC) Supply Controller Control Register */
#define REG_SUPC_SMMR           (0x400E1414) /**< (SUPC) Supply Controller Supply Monitor Mode Register */
#define REG_SUPC_MR             (0x400E1418) /**< (SUPC) Supply Controller Mode Register */
#define REG_SUPC_SR             (0x400E1424) /**< (SUPC) Supply Controller Status Register */

#else

#define REG_SUPC_CR             (*(__O  uint32_t*)0x400E1410U) /**< (SUPC) Supply Controller Control Register */
#define REG_SUPC_SMMR           (*(__IO uint32_t*)0x400E1414U) /**< (SUPC) Supply Controller Supply Monitor Mode Register */
#define REG_SUPC_MR             (*(__IO uint32_t*)0x400E1418U) /**< (SUPC) Supply Controller Mode Register */
#define REG_SUPC_SR             (*(__I  uint32_t*)0x400E1424U) /**< (SUPC) Supply Controller Status Register */

#endif /* (defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance Parameter definitions for SUPC peripheral ========== */
#define SUPC_INSTANCE_ID                         0         

#endif /* _SAMG53_SUPC_INSTANCE_ */
