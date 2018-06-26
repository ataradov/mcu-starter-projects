/**
 * \file
 *
 * \brief Instance description for OSCCTRL
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

#ifndef _SAML11_OSCCTRL_INSTANCE_
#define _SAML11_OSCCTRL_INSTANCE_

/* ========== Register definition for OSCCTRL peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_OSCCTRL_EVCTRL         (0x40001000) /**< \brief (OSCCTRL) Event Control */
#define REG_OSCCTRL_INTENCLR       (0x40001004) /**< \brief (OSCCTRL) Interrupt Enable Clear */
#define REG_OSCCTRL_INTENSET       (0x40001008) /**< \brief (OSCCTRL) Interrupt Enable Set */
#define REG_OSCCTRL_INTFLAG        (0x4000100C) /**< \brief (OSCCTRL) Interrupt Flag Status and Clear */
#define REG_OSCCTRL_STATUS         (0x40001010) /**< \brief (OSCCTRL) Status */
#define REG_OSCCTRL_XOSCCTRL       (0x40001014) /**< \brief (OSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control */
#define REG_OSCCTRL_CFDPRESC       (0x40001016) /**< \brief (OSCCTRL) Clock Failure Detector Prescaler */
#define REG_OSCCTRL_OSC16MCTRL     (0x40001018) /**< \brief (OSCCTRL) 16MHz Internal Oscillator (OSC16M) Control */
#define REG_OSCCTRL_DFLLULPCTRL    (0x4000101C) /**< \brief (OSCCTRL) DFLLULP Control */
#define REG_OSCCTRL_DFLLULPDITHER  (0x4000101E) /**< \brief (OSCCTRL) DFLLULP Dither Control */
#define REG_OSCCTRL_DFLLULPRREQ    (0x4000101F) /**< \brief (OSCCTRL) DFLLULP Read Request */
#define REG_OSCCTRL_DFLLULPDLY     (0x40001020) /**< \brief (OSCCTRL) DFLLULP Delay Value */
#define REG_OSCCTRL_DFLLULPRATIO   (0x40001024) /**< \brief (OSCCTRL) DFLLULP Target Ratio */
#define REG_OSCCTRL_DFLLULPSYNCBUSY (0x40001028) /**< \brief (OSCCTRL) DFLLULP Synchronization Busy */
#define REG_OSCCTRL_DPLLCTRLA      (0x4000102C) /**< \brief (OSCCTRL) DPLL Control A */
#define REG_OSCCTRL_DPLLRATIO      (0x40001030) /**< \brief (OSCCTRL) DPLL Ratio Control */
#define REG_OSCCTRL_DPLLCTRLB      (0x40001034) /**< \brief (OSCCTRL) DPLL Control B */
#define REG_OSCCTRL_DPLLPRESC      (0x40001038) /**< \brief (OSCCTRL) DPLL Prescaler */
#define REG_OSCCTRL_DPLLSYNCBUSY   (0x4000103C) /**< \brief (OSCCTRL) DPLL Synchronization Busy */
#define REG_OSCCTRL_DPLLSTATUS     (0x40001040) /**< \brief (OSCCTRL) DPLL Status */
#else
#define REG_OSCCTRL_EVCTRL         (*(RwReg8 *)0x40001000UL) /**< \brief (OSCCTRL) Event Control */
#define REG_OSCCTRL_INTENCLR       (*(RwReg  *)0x40001004UL) /**< \brief (OSCCTRL) Interrupt Enable Clear */
#define REG_OSCCTRL_INTENSET       (*(RwReg  *)0x40001008UL) /**< \brief (OSCCTRL) Interrupt Enable Set */
#define REG_OSCCTRL_INTFLAG        (*(RwReg  *)0x4000100CUL) /**< \brief (OSCCTRL) Interrupt Flag Status and Clear */
#define REG_OSCCTRL_STATUS         (*(RoReg  *)0x40001010UL) /**< \brief (OSCCTRL) Status */
#define REG_OSCCTRL_XOSCCTRL       (*(RwReg16*)0x40001014UL) /**< \brief (OSCCTRL) External Multipurpose Crystal Oscillator (XOSC) Control */
#define REG_OSCCTRL_CFDPRESC       (*(RwReg8 *)0x40001016UL) /**< \brief (OSCCTRL) Clock Failure Detector Prescaler */
#define REG_OSCCTRL_OSC16MCTRL     (*(RwReg8 *)0x40001018UL) /**< \brief (OSCCTRL) 16MHz Internal Oscillator (OSC16M) Control */
#define REG_OSCCTRL_DFLLULPCTRL    (*(RwReg16*)0x4000101CUL) /**< \brief (OSCCTRL) DFLLULP Control */
#define REG_OSCCTRL_DFLLULPDITHER  (*(RwReg8 *)0x4000101EUL) /**< \brief (OSCCTRL) DFLLULP Dither Control */
#define REG_OSCCTRL_DFLLULPRREQ    (*(RwReg8 *)0x4000101FUL) /**< \brief (OSCCTRL) DFLLULP Read Request */
#define REG_OSCCTRL_DFLLULPDLY     (*(RwReg  *)0x40001020UL) /**< \brief (OSCCTRL) DFLLULP Delay Value */
#define REG_OSCCTRL_DFLLULPRATIO   (*(RwReg  *)0x40001024UL) /**< \brief (OSCCTRL) DFLLULP Target Ratio */
#define REG_OSCCTRL_DFLLULPSYNCBUSY (*(RoReg  *)0x40001028UL) /**< \brief (OSCCTRL) DFLLULP Synchronization Busy */
#define REG_OSCCTRL_DPLLCTRLA      (*(RwReg8 *)0x4000102CUL) /**< \brief (OSCCTRL) DPLL Control A */
#define REG_OSCCTRL_DPLLRATIO      (*(RwReg  *)0x40001030UL) /**< \brief (OSCCTRL) DPLL Ratio Control */
#define REG_OSCCTRL_DPLLCTRLB      (*(RwReg  *)0x40001034UL) /**< \brief (OSCCTRL) DPLL Control B */
#define REG_OSCCTRL_DPLLPRESC      (*(RwReg8 *)0x40001038UL) /**< \brief (OSCCTRL) DPLL Prescaler */
#define REG_OSCCTRL_DPLLSYNCBUSY   (*(RoReg8 *)0x4000103CUL) /**< \brief (OSCCTRL) DPLL Synchronization Busy */
#define REG_OSCCTRL_DPLLSTATUS     (*(RoReg8 *)0x40001040UL) /**< \brief (OSCCTRL) DPLL Status */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for OSCCTRL peripheral ========== */
#define OSCCTRL_GCLK_ID_DFLLULP     2        // Index of Generic Clock for DFLLULP
#define OSCCTRL_GCLK_ID_FDPLL       0        // Index of Generic Clock for DPLL
#define OSCCTRL_GCLK_ID_FDPLL32K    1        // Index of Generic Clock for DPLL 32K
#define OSCCTRL_CFD_VERSION         0x112   
#define OSCCTRL_DFLLULP_VERSION     0x100   
#define OSCCTRL_FDPLL_VERSION       0x213   
#define OSCCTRL_OSC16M_VERSION      0x102   
#define OSCCTRL_XOSC_VERSION        0x210   

#endif /* _SAML11_OSCCTRL_INSTANCE_ */
