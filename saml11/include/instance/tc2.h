/**
 * \file
 *
 * \brief Instance description for TC2
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

#ifndef _SAML11_TC2_INSTANCE_
#define _SAML11_TC2_INSTANCE_

/* ========== Register definition for TC2 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC2_CTRLA              (0x42001800) /**< \brief (TC2) Control A */
#define REG_TC2_CTRLBCLR           (0x42001804) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (0x42001805) /**< \brief (TC2) Control B Set */
#define REG_TC2_EVCTRL             (0x42001806) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (0x42001808) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (0x42001809) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (0x4200180A) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (0x4200180B) /**< \brief (TC2) Status */
#define REG_TC2_WAVE               (0x4200180C) /**< \brief (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL            (0x4200180D) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (0x4200180F) /**< \brief (TC2) Debug Control */
#define REG_TC2_SYNCBUSY           (0x42001810) /**< \brief (TC2) Synchronization Status */
#define REG_TC2_COUNT16_COUNT      (0x42001814) /**< \brief (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_PER        (0x4200181A) /**< \brief (TC2) COUNT16 Period */
#define REG_TC2_COUNT16_CC0        (0x4200181C) /**< \brief (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1        (0x4200181E) /**< \brief (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_PERBUF     (0x4200182E) /**< \brief (TC2) COUNT16 Period Buffer */
#define REG_TC2_COUNT16_CCBUF0     (0x42001830) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1     (0x42001832) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT      (0x42001814) /**< \brief (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_PER        (0x42001818) /**< \brief (TC2) COUNT32 Period */
#define REG_TC2_COUNT32_CC0        (0x4200181C) /**< \brief (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1        (0x42001820) /**< \brief (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_PERBUF     (0x4200182C) /**< \brief (TC2) COUNT32 Period Buffer */
#define REG_TC2_COUNT32_CCBUF0     (0x42001830) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1     (0x42001834) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT8_COUNT       (0x42001814) /**< \brief (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER         (0x4200181B) /**< \brief (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC0         (0x4200181C) /**< \brief (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1         (0x4200181D) /**< \brief (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF      (0x4200182F) /**< \brief (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF0      (0x42001830) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1      (0x42001831) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC2_CTRLA              (*(RwReg  *)0x42001800UL) /**< \brief (TC2) Control A */
#define REG_TC2_CTRLBCLR           (*(RwReg8 *)0x42001804UL) /**< \brief (TC2) Control B Clear */
#define REG_TC2_CTRLBSET           (*(RwReg8 *)0x42001805UL) /**< \brief (TC2) Control B Set */
#define REG_TC2_EVCTRL             (*(RwReg16*)0x42001806UL) /**< \brief (TC2) Event Control */
#define REG_TC2_INTENCLR           (*(RwReg8 *)0x42001808UL) /**< \brief (TC2) Interrupt Enable Clear */
#define REG_TC2_INTENSET           (*(RwReg8 *)0x42001809UL) /**< \brief (TC2) Interrupt Enable Set */
#define REG_TC2_INTFLAG            (*(RwReg8 *)0x4200180AUL) /**< \brief (TC2) Interrupt Flag Status and Clear */
#define REG_TC2_STATUS             (*(RwReg8 *)0x4200180BUL) /**< \brief (TC2) Status */
#define REG_TC2_WAVE               (*(RwReg8 *)0x4200180CUL) /**< \brief (TC2) Waveform Generation Control */
#define REG_TC2_DRVCTRL            (*(RwReg8 *)0x4200180DUL) /**< \brief (TC2) Control C */
#define REG_TC2_DBGCTRL            (*(RwReg8 *)0x4200180FUL) /**< \brief (TC2) Debug Control */
#define REG_TC2_SYNCBUSY           (*(RoReg  *)0x42001810UL) /**< \brief (TC2) Synchronization Status */
#define REG_TC2_COUNT16_COUNT      (*(RwReg16*)0x42001814UL) /**< \brief (TC2) COUNT16 Count */
#define REG_TC2_COUNT16_PER        (*(RwReg16*)0x4200181AUL) /**< \brief (TC2) COUNT16 Period */
#define REG_TC2_COUNT16_CC0        (*(RwReg16*)0x4200181CUL) /**< \brief (TC2) COUNT16 Compare and Capture 0 */
#define REG_TC2_COUNT16_CC1        (*(RwReg16*)0x4200181EUL) /**< \brief (TC2) COUNT16 Compare and Capture 1 */
#define REG_TC2_COUNT16_PERBUF     (*(RwReg16*)0x4200182EUL) /**< \brief (TC2) COUNT16 Period Buffer */
#define REG_TC2_COUNT16_CCBUF0     (*(RwReg16*)0x42001830UL) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT16_CCBUF1     (*(RwReg16*)0x42001832UL) /**< \brief (TC2) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT32_COUNT      (*(RwReg  *)0x42001814UL) /**< \brief (TC2) COUNT32 Count */
#define REG_TC2_COUNT32_PER        (*(RwReg  *)0x42001818UL) /**< \brief (TC2) COUNT32 Period */
#define REG_TC2_COUNT32_CC0        (*(RwReg  *)0x4200181CUL) /**< \brief (TC2) COUNT32 Compare and Capture 0 */
#define REG_TC2_COUNT32_CC1        (*(RwReg  *)0x42001820UL) /**< \brief (TC2) COUNT32 Compare and Capture 1 */
#define REG_TC2_COUNT32_PERBUF     (*(RwReg  *)0x4200182CUL) /**< \brief (TC2) COUNT32 Period Buffer */
#define REG_TC2_COUNT32_CCBUF0     (*(RwReg  *)0x42001830UL) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT32_CCBUF1     (*(RwReg  *)0x42001834UL) /**< \brief (TC2) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC2_COUNT8_COUNT       (*(RwReg8 *)0x42001814UL) /**< \brief (TC2) COUNT8 Count */
#define REG_TC2_COUNT8_PER         (*(RwReg8 *)0x4200181BUL) /**< \brief (TC2) COUNT8 Period */
#define REG_TC2_COUNT8_CC0         (*(RwReg8 *)0x4200181CUL) /**< \brief (TC2) COUNT8 Compare and Capture 0 */
#define REG_TC2_COUNT8_CC1         (*(RwReg8 *)0x4200181DUL) /**< \brief (TC2) COUNT8 Compare and Capture 1 */
#define REG_TC2_COUNT8_PERBUF      (*(RwReg8 *)0x4200182FUL) /**< \brief (TC2) COUNT8 Period Buffer */
#define REG_TC2_COUNT8_CCBUF0      (*(RwReg8 *)0x42001830UL) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC2_COUNT8_CCBUF1      (*(RwReg8 *)0x42001831UL) /**< \brief (TC2) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC2 peripheral ========== */
#define TC2_CC_NUM                  2       
#define TC2_DMAC_ID_MC_0            17
#define TC2_DMAC_ID_MC_1            18
#define TC2_DMAC_ID_MC_LSB          17
#define TC2_DMAC_ID_MC_MSB          18
#define TC2_DMAC_ID_MC_SIZE         2
#define TC2_DMAC_ID_OVF             16       // Indexes of DMA Overflow trigger
#define TC2_EXT                     1        // Coding of implemented extended features (keep 0 value)
#define TC2_GCLK_ID                 15       // Index of Generic Clock
#define TC2_MASTER_SLAVE_MODE       0        // TC type 0 : NA, 1 : Master, 2 : Slave
#define TC2_OW_NUM                  2        // Number of Output Waveforms

#endif /* _SAML11_TC2_INSTANCE_ */
