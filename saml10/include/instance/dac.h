/**
 * \file
 *
 * \brief Instance description for DAC
 *
 * Copyright (c) 2017 Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 * 
 * http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an AS IS BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAML10_DAC_INSTANCE_
#define _SAML10_DAC_INSTANCE_

/* ========== Register definition for DAC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_DAC_CTRLA              (0x42002000) /**< \brief (DAC) Control A */
#define REG_DAC_CTRLB              (0x42002001) /**< \brief (DAC) Control B */
#define REG_DAC_EVCTRL             (0x42002002) /**< \brief (DAC) Event Control */
#define REG_DAC_INTENCLR           (0x42002004) /**< \brief (DAC) Interrupt Enable Clear */
#define REG_DAC_INTENSET           (0x42002005) /**< \brief (DAC) Interrupt Enable Set */
#define REG_DAC_INTFLAG            (0x42002006) /**< \brief (DAC) Interrupt Flag Status and Clear */
#define REG_DAC_STATUS             (0x42002007) /**< \brief (DAC) Status */
#define REG_DAC_DATA               (0x42002008) /**< \brief (DAC) Data */
#define REG_DAC_DATABUF            (0x4200200C) /**< \brief (DAC) Data Buffer */
#define REG_DAC_SYNCBUSY           (0x42002010) /**< \brief (DAC) Synchronization Busy */
#define REG_DAC_DBGCTRL            (0x42002014) /**< \brief (DAC) Debug Control */
#else
#define REG_DAC_CTRLA              (*(RwReg8 *)0x42002000UL) /**< \brief (DAC) Control A */
#define REG_DAC_CTRLB              (*(RwReg8 *)0x42002001UL) /**< \brief (DAC) Control B */
#define REG_DAC_EVCTRL             (*(RwReg8 *)0x42002002UL) /**< \brief (DAC) Event Control */
#define REG_DAC_INTENCLR           (*(RwReg8 *)0x42002004UL) /**< \brief (DAC) Interrupt Enable Clear */
#define REG_DAC_INTENSET           (*(RwReg8 *)0x42002005UL) /**< \brief (DAC) Interrupt Enable Set */
#define REG_DAC_INTFLAG            (*(RwReg8 *)0x42002006UL) /**< \brief (DAC) Interrupt Flag Status and Clear */
#define REG_DAC_STATUS             (*(RoReg8 *)0x42002007UL) /**< \brief (DAC) Status */
#define REG_DAC_DATA               (*(WoReg16*)0x42002008UL) /**< \brief (DAC) Data */
#define REG_DAC_DATABUF            (*(WoReg16*)0x4200200CUL) /**< \brief (DAC) Data Buffer */
#define REG_DAC_SYNCBUSY           (*(RoReg  *)0x42002010UL) /**< \brief (DAC) Synchronization Busy */
#define REG_DAC_DBGCTRL            (*(RwReg8 *)0x42002014UL) /**< \brief (DAC) Debug Control */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for DAC peripheral ========== */
#define DAC_DMAC_ID_EMPTY           20       // Index of DMA EMPTY trigger
#define DAC_GCLK_ID                 18      

#endif /* _SAML10_DAC_INSTANCE_ */
