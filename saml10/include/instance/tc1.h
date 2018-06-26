/**
 * \file
 *
 * \brief Instance description for TC1
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

#ifndef _SAML10_TC1_INSTANCE_
#define _SAML10_TC1_INSTANCE_

/* ========== Register definition for TC1 peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TC1_CTRLA              (0x42001400) /**< \brief (TC1) Control A */
#define REG_TC1_CTRLBCLR           (0x42001404) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (0x42001405) /**< \brief (TC1) Control B Set */
#define REG_TC1_EVCTRL             (0x42001406) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (0x42001408) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (0x42001409) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (0x4200140A) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (0x4200140B) /**< \brief (TC1) Status */
#define REG_TC1_WAVE               (0x4200140C) /**< \brief (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL            (0x4200140D) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (0x4200140F) /**< \brief (TC1) Debug Control */
#define REG_TC1_SYNCBUSY           (0x42001410) /**< \brief (TC1) Synchronization Status */
#define REG_TC1_COUNT16_COUNT      (0x42001414) /**< \brief (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_PER        (0x4200141A) /**< \brief (TC1) COUNT16 Period */
#define REG_TC1_COUNT16_CC0        (0x4200141C) /**< \brief (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1        (0x4200141E) /**< \brief (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_PERBUF     (0x4200142E) /**< \brief (TC1) COUNT16 Period Buffer */
#define REG_TC1_COUNT16_CCBUF0     (0x42001430) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1     (0x42001432) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT      (0x42001414) /**< \brief (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_PER        (0x42001418) /**< \brief (TC1) COUNT32 Period */
#define REG_TC1_COUNT32_CC0        (0x4200141C) /**< \brief (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1        (0x42001420) /**< \brief (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_PERBUF     (0x4200142C) /**< \brief (TC1) COUNT32 Period Buffer */
#define REG_TC1_COUNT32_CCBUF0     (0x42001430) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1     (0x42001434) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT8_COUNT       (0x42001414) /**< \brief (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER         (0x4200141B) /**< \brief (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC0         (0x4200141C) /**< \brief (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1         (0x4200141D) /**< \brief (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF      (0x4200142F) /**< \brief (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF0      (0x42001430) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1      (0x42001431) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 1 */
#else
#define REG_TC1_CTRLA              (*(RwReg  *)0x42001400UL) /**< \brief (TC1) Control A */
#define REG_TC1_CTRLBCLR           (*(RwReg8 *)0x42001404UL) /**< \brief (TC1) Control B Clear */
#define REG_TC1_CTRLBSET           (*(RwReg8 *)0x42001405UL) /**< \brief (TC1) Control B Set */
#define REG_TC1_EVCTRL             (*(RwReg16*)0x42001406UL) /**< \brief (TC1) Event Control */
#define REG_TC1_INTENCLR           (*(RwReg8 *)0x42001408UL) /**< \brief (TC1) Interrupt Enable Clear */
#define REG_TC1_INTENSET           (*(RwReg8 *)0x42001409UL) /**< \brief (TC1) Interrupt Enable Set */
#define REG_TC1_INTFLAG            (*(RwReg8 *)0x4200140AUL) /**< \brief (TC1) Interrupt Flag Status and Clear */
#define REG_TC1_STATUS             (*(RwReg8 *)0x4200140BUL) /**< \brief (TC1) Status */
#define REG_TC1_WAVE               (*(RwReg8 *)0x4200140CUL) /**< \brief (TC1) Waveform Generation Control */
#define REG_TC1_DRVCTRL            (*(RwReg8 *)0x4200140DUL) /**< \brief (TC1) Control C */
#define REG_TC1_DBGCTRL            (*(RwReg8 *)0x4200140FUL) /**< \brief (TC1) Debug Control */
#define REG_TC1_SYNCBUSY           (*(RoReg  *)0x42001410UL) /**< \brief (TC1) Synchronization Status */
#define REG_TC1_COUNT16_COUNT      (*(RwReg16*)0x42001414UL) /**< \brief (TC1) COUNT16 Count */
#define REG_TC1_COUNT16_PER        (*(RwReg16*)0x4200141AUL) /**< \brief (TC1) COUNT16 Period */
#define REG_TC1_COUNT16_CC0        (*(RwReg16*)0x4200141CUL) /**< \brief (TC1) COUNT16 Compare and Capture 0 */
#define REG_TC1_COUNT16_CC1        (*(RwReg16*)0x4200141EUL) /**< \brief (TC1) COUNT16 Compare and Capture 1 */
#define REG_TC1_COUNT16_PERBUF     (*(RwReg16*)0x4200142EUL) /**< \brief (TC1) COUNT16 Period Buffer */
#define REG_TC1_COUNT16_CCBUF0     (*(RwReg16*)0x42001430UL) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT16_CCBUF1     (*(RwReg16*)0x42001432UL) /**< \brief (TC1) COUNT16 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT32_COUNT      (*(RwReg  *)0x42001414UL) /**< \brief (TC1) COUNT32 Count */
#define REG_TC1_COUNT32_PER        (*(RwReg  *)0x42001418UL) /**< \brief (TC1) COUNT32 Period */
#define REG_TC1_COUNT32_CC0        (*(RwReg  *)0x4200141CUL) /**< \brief (TC1) COUNT32 Compare and Capture 0 */
#define REG_TC1_COUNT32_CC1        (*(RwReg  *)0x42001420UL) /**< \brief (TC1) COUNT32 Compare and Capture 1 */
#define REG_TC1_COUNT32_PERBUF     (*(RwReg  *)0x4200142CUL) /**< \brief (TC1) COUNT32 Period Buffer */
#define REG_TC1_COUNT32_CCBUF0     (*(RwReg  *)0x42001430UL) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT32_CCBUF1     (*(RwReg  *)0x42001434UL) /**< \brief (TC1) COUNT32 Compare and Capture Buffer 1 */
#define REG_TC1_COUNT8_COUNT       (*(RwReg8 *)0x42001414UL) /**< \brief (TC1) COUNT8 Count */
#define REG_TC1_COUNT8_PER         (*(RwReg8 *)0x4200141BUL) /**< \brief (TC1) COUNT8 Period */
#define REG_TC1_COUNT8_CC0         (*(RwReg8 *)0x4200141CUL) /**< \brief (TC1) COUNT8 Compare and Capture 0 */
#define REG_TC1_COUNT8_CC1         (*(RwReg8 *)0x4200141DUL) /**< \brief (TC1) COUNT8 Compare and Capture 1 */
#define REG_TC1_COUNT8_PERBUF      (*(RwReg8 *)0x4200142FUL) /**< \brief (TC1) COUNT8 Period Buffer */
#define REG_TC1_COUNT8_CCBUF0      (*(RwReg8 *)0x42001430UL) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 0 */
#define REG_TC1_COUNT8_CCBUF1      (*(RwReg8 *)0x42001431UL) /**< \brief (TC1) COUNT8 Compare and Capture Buffer 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TC1 peripheral ========== */
#define TC1_CC_NUM                  2       
#define TC1_DMAC_ID_MC_0            14
#define TC1_DMAC_ID_MC_1            15
#define TC1_DMAC_ID_MC_LSB          14
#define TC1_DMAC_ID_MC_MSB          15
#define TC1_DMAC_ID_MC_SIZE         2
#define TC1_DMAC_ID_OVF             13       // Indexes of DMA Overflow trigger
#define TC1_EXT                     1        // Coding of implemented extended features (keep 0 value)
#define TC1_GCLK_ID                 14       // Index of Generic Clock
#define TC1_MASTER_SLAVE_MODE       2        // TC type 0 : NA, 1 : Master, 2 : Slave
#define TC1_OW_NUM                  2        // Number of Output Waveforms

#endif /* _SAML10_TC1_INSTANCE_ */
