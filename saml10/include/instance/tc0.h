/**
 * \file
 *
 * \brief Instance description for TC0
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

#ifndef _SAML10_TC0_INSTANCE_
#define _SAML10_TC0_INSTANCE_

/* ========== Register definition for TC0 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC0_CTRLA              (0x42001000) /**< \brief (TC0) Control A */
#define REG_TC0_CTRLBCLR           (0x42001004) /**< \brief (TC0) Control B Clear */
#define REG_TC0_CTRLBSET           (0x42001005) /**< \brief (TC0) Control B Set */
#define REG_TC0_EVCTRL             (0x42001006) /**< \brief (TC0) Event Control */
#define REG_TC0_INTENCLR           (0x42001008) /**< \brief (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET           (0x42001009) /**< \brief (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG            (0x4200100A) /**< \brief (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS             (0x4200100B) /**< \brief (TC0) Status */
#define REG_TC0_WAVE               (0x4200100C) /**< \brief (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL            (0x4200100D) /**< \brief (TC0) Control C */
#define REG_TC0_DBGCTRL            (0x4200100F) /**< \brief (TC0) Debug Control */
#define REG_TC0_SYNCBUSY           (0x42001010) /**< \brief (TC0) Synchronization Status */
#define REG_TC0_COUNT16_COUNT      (0x42001014) /**< \brief (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_PER        (0x4200101A) /**< \brief (TC0) COUNT16 Period */
#define REG_TC0_COUNT16_CC0        (0x4200101C) /**< \brief (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1        (0x4200101E) /**< \brief (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_PERBUF     (0x4200102E) /**< \brief (TC0) COUNT16 Period Buffer */
#define REG_TC0_COUNT16_CCBUF0     (0x42001030) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1     (0x42001032) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT      (0x42001014) /**< \brief (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_PER        (0x42001018) /**< \brief (TC0) COUNT32 Period */
#define REG_TC0_COUNT32_CC0        (0x4200101C) /**< \brief (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1        (0x42001020) /**< \brief (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_PERBUF     (0x4200102C) /**< \brief (TC0) COUNT32 Period Buffer */
#define REG_TC0_COUNT32_CCBUF0     (0x42001030) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1     (0x42001034) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT8_COUNT       (0x42001014) /**< \brief (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER         (0x4200101B) /**< \brief (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC0         (0x4200101C) /**< \brief (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1         (0x4200101D) /**< \brief (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF      (0x4200102F) /**< \brief (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF0      (0x42001030) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1      (0x42001031) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC0_CTRLA              (*(RwReg  *)0x42001000UL) /**< \brief (TC0) Control A */
#define REG_TC0_CTRLBCLR           (*(RwReg8 *)0x42001004UL) /**< \brief (TC0) Control B Clear */
#define REG_TC0_CTRLBSET           (*(RwReg8 *)0x42001005UL) /**< \brief (TC0) Control B Set */
#define REG_TC0_EVCTRL             (*(RwReg16*)0x42001006UL) /**< \brief (TC0) Event Control */
#define REG_TC0_INTENCLR           (*(RwReg8 *)0x42001008UL) /**< \brief (TC0) Interrupt Enable Clear */
#define REG_TC0_INTENSET           (*(RwReg8 *)0x42001009UL) /**< \brief (TC0) Interrupt Enable Set */
#define REG_TC0_INTFLAG            (*(RwReg8 *)0x4200100AUL) /**< \brief (TC0) Interrupt Flag Status and Clear */
#define REG_TC0_STATUS             (*(RwReg8 *)0x4200100BUL) /**< \brief (TC0) Status */
#define REG_TC0_WAVE               (*(RwReg8 *)0x4200100CUL) /**< \brief (TC0) Waveform Generation Control */
#define REG_TC0_DRVCTRL            (*(RwReg8 *)0x4200100DUL) /**< \brief (TC0) Control C */
#define REG_TC0_DBGCTRL            (*(RwReg8 *)0x4200100FUL) /**< \brief (TC0) Debug Control */
#define REG_TC0_SYNCBUSY           (*(RoReg  *)0x42001010UL) /**< \brief (TC0) Synchronization Status */
#define REG_TC0_COUNT16_COUNT      (*(RwReg16*)0x42001014UL) /**< \brief (TC0) COUNT16 Count */
#define REG_TC0_COUNT16_PER        (*(RwReg16*)0x4200101AUL) /**< \brief (TC0) COUNT16 Period */
#define REG_TC0_COUNT16_CC0        (*(RwReg16*)0x4200101CUL) /**< \brief (TC0) COUNT16 Compare and Capture 0 */
#define REG_TC0_COUNT16_CC1        (*(RwReg16*)0x4200101EUL) /**< \brief (TC0) COUNT16 Compare and Capture 1 */
#define REG_TC0_COUNT16_PERBUF     (*(RwReg16*)0x4200102EUL) /**< \brief (TC0) COUNT16 Period Buffer */
#define REG_TC0_COUNT16_CCBUF0     (*(RwReg16*)0x42001030UL) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT16_CCBUF1     (*(RwReg16*)0x42001032UL) /**< \brief (TC0) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT32_COUNT      (*(RwReg  *)0x42001014UL) /**< \brief (TC0) COUNT32 Count */
#define REG_TC0_COUNT32_PER        (*(RwReg  *)0x42001018UL) /**< \brief (TC0) COUNT32 Period */
#define REG_TC0_COUNT32_CC0        (*(RwReg  *)0x4200101CUL) /**< \brief (TC0) COUNT32 Compare and Capture 0 */
#define REG_TC0_COUNT32_CC1        (*(RwReg  *)0x42001020UL) /**< \brief (TC0) COUNT32 Compare and Capture 1 */
#define REG_TC0_COUNT32_PERBUF     (*(RwReg  *)0x4200102CUL) /**< \brief (TC0) COUNT32 Period Buffer */
#define REG_TC0_COUNT32_CCBUF0     (*(RwReg  *)0x42001030UL) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT32_CCBUF1     (*(RwReg  *)0x42001034UL) /**< \brief (TC0) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC0_COUNT8_COUNT       (*(RwReg8 *)0x42001014UL) /**< \brief (TC0) COUNT8 Count */
#define REG_TC0_COUNT8_PER         (*(RwReg8 *)0x4200101BUL) /**< \brief (TC0) COUNT8 Period */
#define REG_TC0_COUNT8_CC0         (*(RwReg8 *)0x4200101CUL) /**< \brief (TC0) COUNT8 Compare and Capture 0 */
#define REG_TC0_COUNT8_CC1         (*(RwReg8 *)0x4200101DUL) /**< \brief (TC0) COUNT8 Compare and Capture 1 */
#define REG_TC0_COUNT8_PERBUF      (*(RwReg8 *)0x4200102FUL) /**< \brief (TC0) COUNT8 Period Buffer */
#define REG_TC0_COUNT8_CCBUF0      (*(RwReg8 *)0x42001030UL) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC0_COUNT8_CCBUF1      (*(RwReg8 *)0x42001031UL) /**< \brief (TC0) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC0 peripheral ========== */
#define TC0_CC_NUM                  2       
#define TC0_DMAC_ID_MC_0            11
#define TC0_DMAC_ID_MC_1            12
#define TC0_DMAC_ID_MC_LSB          11
#define TC0_DMAC_ID_MC_MSB          12
#define TC0_DMAC_ID_MC_SIZE         2
#define TC0_DMAC_ID_OVF             10       // Indexes of DMA Overflow trigger
#define TC0_EXT                     1        // Coding of implemented extended features (keep 0 value)
#define TC0_GCLK_ID                 14       // Index of Generic Clock
#define TC0_MASTER_SLAVE_MODE       1        // TC type 0 : NA, 1 : Master, 2 : Slave
#define TC0_OW_NUM                  2        // Number of Output Waveforms

#endif /* _SAML10_TC0_INSTANCE_ */
