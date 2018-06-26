/**
 * \file
 *
 * \brief Instance description for TRAM
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

#ifndef _SAML11_TRAM_INSTANCE_
#define _SAML11_TRAM_INSTANCE_

/* ========== Register definition for TRAM peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TRAM_CTRLA             (0x42003400) /**< \brief (TRAM) Control */
#define REG_TRAM_INTENCLR          (0x42003404) /**< \brief (TRAM) Interrupt Enable Clear */
#define REG_TRAM_INTENSET          (0x42003405) /**< \brief (TRAM) Interrupt Enable Set */
#define REG_TRAM_INTFLAG           (0x42003406) /**< \brief (TRAM) Interrupt Flag Status and Clear */
#define REG_TRAM_STATUS            (0x42003407) /**< \brief (TRAM) Status */
#define REG_TRAM_SYNCBUSY          (0x42003408) /**< \brief (TRAM) Synchronization Busy Status */
#define REG_TRAM_DSCC              (0x4200340C) /**< \brief (TRAM) Data Scramble Control */
#define REG_TRAM_PERMW             (0x42003410) /**< \brief (TRAM) Permutation Write */
#define REG_TRAM_PERMR             (0x42003411) /**< \brief (TRAM) Permutation Read */
#define REG_TRAM_RAM0              (0x42003500) /**< \brief (TRAM) TrustRAM 0 */
#define REG_TRAM_RAM1              (0x42003504) /**< \brief (TRAM) TrustRAM 1 */
#define REG_TRAM_RAM2              (0x42003508) /**< \brief (TRAM) TrustRAM 2 */
#define REG_TRAM_RAM3              (0x4200350C) /**< \brief (TRAM) TrustRAM 3 */
#define REG_TRAM_RAM4              (0x42003510) /**< \brief (TRAM) TrustRAM 4 */
#define REG_TRAM_RAM5              (0x42003514) /**< \brief (TRAM) TrustRAM 5 */
#define REG_TRAM_RAM6              (0x42003518) /**< \brief (TRAM) TrustRAM 6 */
#define REG_TRAM_RAM7              (0x4200351C) /**< \brief (TRAM) TrustRAM 7 */
#define REG_TRAM_RAM8              (0x42003520) /**< \brief (TRAM) TrustRAM 8 */
#define REG_TRAM_RAM9              (0x42003524) /**< \brief (TRAM) TrustRAM 9 */
#define REG_TRAM_RAM10             (0x42003528) /**< \brief (TRAM) TrustRAM 10 */
#define REG_TRAM_RAM11             (0x4200352C) /**< \brief (TRAM) TrustRAM 11 */
#define REG_TRAM_RAM12             (0x42003530) /**< \brief (TRAM) TrustRAM 12 */
#define REG_TRAM_RAM13             (0x42003534) /**< \brief (TRAM) TrustRAM 13 */
#define REG_TRAM_RAM14             (0x42003538) /**< \brief (TRAM) TrustRAM 14 */
#define REG_TRAM_RAM15             (0x4200353C) /**< \brief (TRAM) TrustRAM 15 */
#define REG_TRAM_RAM16             (0x42003540) /**< \brief (TRAM) TrustRAM 16 */
#define REG_TRAM_RAM17             (0x42003544) /**< \brief (TRAM) TrustRAM 17 */
#define REG_TRAM_RAM18             (0x42003548) /**< \brief (TRAM) TrustRAM 18 */
#define REG_TRAM_RAM19             (0x4200354C) /**< \brief (TRAM) TrustRAM 19 */
#define REG_TRAM_RAM20             (0x42003550) /**< \brief (TRAM) TrustRAM 20 */
#define REG_TRAM_RAM21             (0x42003554) /**< \brief (TRAM) TrustRAM 21 */
#define REG_TRAM_RAM22             (0x42003558) /**< \brief (TRAM) TrustRAM 22 */
#define REG_TRAM_RAM23             (0x4200355C) /**< \brief (TRAM) TrustRAM 23 */
#define REG_TRAM_RAM24             (0x42003560) /**< \brief (TRAM) TrustRAM 24 */
#define REG_TRAM_RAM25             (0x42003564) /**< \brief (TRAM) TrustRAM 25 */
#define REG_TRAM_RAM26             (0x42003568) /**< \brief (TRAM) TrustRAM 26 */
#define REG_TRAM_RAM27             (0x4200356C) /**< \brief (TRAM) TrustRAM 27 */
#define REG_TRAM_RAM28             (0x42003570) /**< \brief (TRAM) TrustRAM 28 */
#define REG_TRAM_RAM29             (0x42003574) /**< \brief (TRAM) TrustRAM 29 */
#define REG_TRAM_RAM30             (0x42003578) /**< \brief (TRAM) TrustRAM 30 */
#define REG_TRAM_RAM31             (0x4200357C) /**< \brief (TRAM) TrustRAM 31 */
#define REG_TRAM_RAM32             (0x42003580) /**< \brief (TRAM) TrustRAM 32 */
#define REG_TRAM_RAM33             (0x42003584) /**< \brief (TRAM) TrustRAM 33 */
#define REG_TRAM_RAM34             (0x42003588) /**< \brief (TRAM) TrustRAM 34 */
#define REG_TRAM_RAM35             (0x4200358C) /**< \brief (TRAM) TrustRAM 35 */
#define REG_TRAM_RAM36             (0x42003590) /**< \brief (TRAM) TrustRAM 36 */
#define REG_TRAM_RAM37             (0x42003594) /**< \brief (TRAM) TrustRAM 37 */
#define REG_TRAM_RAM38             (0x42003598) /**< \brief (TRAM) TrustRAM 38 */
#define REG_TRAM_RAM39             (0x4200359C) /**< \brief (TRAM) TrustRAM 39 */
#define REG_TRAM_RAM40             (0x420035A0) /**< \brief (TRAM) TrustRAM 40 */
#define REG_TRAM_RAM41             (0x420035A4) /**< \brief (TRAM) TrustRAM 41 */
#define REG_TRAM_RAM42             (0x420035A8) /**< \brief (TRAM) TrustRAM 42 */
#define REG_TRAM_RAM43             (0x420035AC) /**< \brief (TRAM) TrustRAM 43 */
#define REG_TRAM_RAM44             (0x420035B0) /**< \brief (TRAM) TrustRAM 44 */
#define REG_TRAM_RAM45             (0x420035B4) /**< \brief (TRAM) TrustRAM 45 */
#define REG_TRAM_RAM46             (0x420035B8) /**< \brief (TRAM) TrustRAM 46 */
#define REG_TRAM_RAM47             (0x420035BC) /**< \brief (TRAM) TrustRAM 47 */
#define REG_TRAM_RAM48             (0x420035C0) /**< \brief (TRAM) TrustRAM 48 */
#define REG_TRAM_RAM49             (0x420035C4) /**< \brief (TRAM) TrustRAM 49 */
#define REG_TRAM_RAM50             (0x420035C8) /**< \brief (TRAM) TrustRAM 50 */
#define REG_TRAM_RAM51             (0x420035CC) /**< \brief (TRAM) TrustRAM 51 */
#define REG_TRAM_RAM52             (0x420035D0) /**< \brief (TRAM) TrustRAM 52 */
#define REG_TRAM_RAM53             (0x420035D4) /**< \brief (TRAM) TrustRAM 53 */
#define REG_TRAM_RAM54             (0x420035D8) /**< \brief (TRAM) TrustRAM 54 */
#define REG_TRAM_RAM55             (0x420035DC) /**< \brief (TRAM) TrustRAM 55 */
#define REG_TRAM_RAM56             (0x420035E0) /**< \brief (TRAM) TrustRAM 56 */
#define REG_TRAM_RAM57             (0x420035E4) /**< \brief (TRAM) TrustRAM 57 */
#define REG_TRAM_RAM58             (0x420035E8) /**< \brief (TRAM) TrustRAM 58 */
#define REG_TRAM_RAM59             (0x420035EC) /**< \brief (TRAM) TrustRAM 59 */
#define REG_TRAM_RAM60             (0x420035F0) /**< \brief (TRAM) TrustRAM 60 */
#define REG_TRAM_RAM61             (0x420035F4) /**< \brief (TRAM) TrustRAM 61 */
#define REG_TRAM_RAM62             (0x420035F8) /**< \brief (TRAM) TrustRAM 62 */
#define REG_TRAM_RAM63             (0x420035FC) /**< \brief (TRAM) TrustRAM 63 */
#else
#define REG_TRAM_CTRLA             (*(RwReg8 *)0x42003400UL) /**< \brief (TRAM) Control */
#define REG_TRAM_INTENCLR          (*(RwReg8 *)0x42003404UL) /**< \brief (TRAM) Interrupt Enable Clear */
#define REG_TRAM_INTENSET          (*(RwReg8 *)0x42003405UL) /**< \brief (TRAM) Interrupt Enable Set */
#define REG_TRAM_INTFLAG           (*(RwReg8 *)0x42003406UL) /**< \brief (TRAM) Interrupt Flag Status and Clear */
#define REG_TRAM_STATUS            (*(RoReg8 *)0x42003407UL) /**< \brief (TRAM) Status */
#define REG_TRAM_SYNCBUSY          (*(RoReg  *)0x42003408UL) /**< \brief (TRAM) Synchronization Busy Status */
#define REG_TRAM_DSCC              (*(WoReg  *)0x4200340CUL) /**< \brief (TRAM) Data Scramble Control */
#define REG_TRAM_PERMW             (*(WoReg8 *)0x42003410UL) /**< \brief (TRAM) Permutation Write */
#define REG_TRAM_PERMR             (*(RoReg8 *)0x42003411UL) /**< \brief (TRAM) Permutation Read */
#define REG_TRAM_RAM0              (*(RwReg  *)0x42003500UL) /**< \brief (TRAM) TrustRAM 0 */
#define REG_TRAM_RAM1              (*(RwReg  *)0x42003504UL) /**< \brief (TRAM) TrustRAM 1 */
#define REG_TRAM_RAM2              (*(RwReg  *)0x42003508UL) /**< \brief (TRAM) TrustRAM 2 */
#define REG_TRAM_RAM3              (*(RwReg  *)0x4200350CUL) /**< \brief (TRAM) TrustRAM 3 */
#define REG_TRAM_RAM4              (*(RwReg  *)0x42003510UL) /**< \brief (TRAM) TrustRAM 4 */
#define REG_TRAM_RAM5              (*(RwReg  *)0x42003514UL) /**< \brief (TRAM) TrustRAM 5 */
#define REG_TRAM_RAM6              (*(RwReg  *)0x42003518UL) /**< \brief (TRAM) TrustRAM 6 */
#define REG_TRAM_RAM7              (*(RwReg  *)0x4200351CUL) /**< \brief (TRAM) TrustRAM 7 */
#define REG_TRAM_RAM8              (*(RwReg  *)0x42003520UL) /**< \brief (TRAM) TrustRAM 8 */
#define REG_TRAM_RAM9              (*(RwReg  *)0x42003524UL) /**< \brief (TRAM) TrustRAM 9 */
#define REG_TRAM_RAM10             (*(RwReg  *)0x42003528UL) /**< \brief (TRAM) TrustRAM 10 */
#define REG_TRAM_RAM11             (*(RwReg  *)0x4200352CUL) /**< \brief (TRAM) TrustRAM 11 */
#define REG_TRAM_RAM12             (*(RwReg  *)0x42003530UL) /**< \brief (TRAM) TrustRAM 12 */
#define REG_TRAM_RAM13             (*(RwReg  *)0x42003534UL) /**< \brief (TRAM) TrustRAM 13 */
#define REG_TRAM_RAM14             (*(RwReg  *)0x42003538UL) /**< \brief (TRAM) TrustRAM 14 */
#define REG_TRAM_RAM15             (*(RwReg  *)0x4200353CUL) /**< \brief (TRAM) TrustRAM 15 */
#define REG_TRAM_RAM16             (*(RwReg  *)0x42003540UL) /**< \brief (TRAM) TrustRAM 16 */
#define REG_TRAM_RAM17             (*(RwReg  *)0x42003544UL) /**< \brief (TRAM) TrustRAM 17 */
#define REG_TRAM_RAM18             (*(RwReg  *)0x42003548UL) /**< \brief (TRAM) TrustRAM 18 */
#define REG_TRAM_RAM19             (*(RwReg  *)0x4200354CUL) /**< \brief (TRAM) TrustRAM 19 */
#define REG_TRAM_RAM20             (*(RwReg  *)0x42003550UL) /**< \brief (TRAM) TrustRAM 20 */
#define REG_TRAM_RAM21             (*(RwReg  *)0x42003554UL) /**< \brief (TRAM) TrustRAM 21 */
#define REG_TRAM_RAM22             (*(RwReg  *)0x42003558UL) /**< \brief (TRAM) TrustRAM 22 */
#define REG_TRAM_RAM23             (*(RwReg  *)0x4200355CUL) /**< \brief (TRAM) TrustRAM 23 */
#define REG_TRAM_RAM24             (*(RwReg  *)0x42003560UL) /**< \brief (TRAM) TrustRAM 24 */
#define REG_TRAM_RAM25             (*(RwReg  *)0x42003564UL) /**< \brief (TRAM) TrustRAM 25 */
#define REG_TRAM_RAM26             (*(RwReg  *)0x42003568UL) /**< \brief (TRAM) TrustRAM 26 */
#define REG_TRAM_RAM27             (*(RwReg  *)0x4200356CUL) /**< \brief (TRAM) TrustRAM 27 */
#define REG_TRAM_RAM28             (*(RwReg  *)0x42003570UL) /**< \brief (TRAM) TrustRAM 28 */
#define REG_TRAM_RAM29             (*(RwReg  *)0x42003574UL) /**< \brief (TRAM) TrustRAM 29 */
#define REG_TRAM_RAM30             (*(RwReg  *)0x42003578UL) /**< \brief (TRAM) TrustRAM 30 */
#define REG_TRAM_RAM31             (*(RwReg  *)0x4200357CUL) /**< \brief (TRAM) TrustRAM 31 */
#define REG_TRAM_RAM32             (*(RwReg  *)0x42003580UL) /**< \brief (TRAM) TrustRAM 32 */
#define REG_TRAM_RAM33             (*(RwReg  *)0x42003584UL) /**< \brief (TRAM) TrustRAM 33 */
#define REG_TRAM_RAM34             (*(RwReg  *)0x42003588UL) /**< \brief (TRAM) TrustRAM 34 */
#define REG_TRAM_RAM35             (*(RwReg  *)0x4200358CUL) /**< \brief (TRAM) TrustRAM 35 */
#define REG_TRAM_RAM36             (*(RwReg  *)0x42003590UL) /**< \brief (TRAM) TrustRAM 36 */
#define REG_TRAM_RAM37             (*(RwReg  *)0x42003594UL) /**< \brief (TRAM) TrustRAM 37 */
#define REG_TRAM_RAM38             (*(RwReg  *)0x42003598UL) /**< \brief (TRAM) TrustRAM 38 */
#define REG_TRAM_RAM39             (*(RwReg  *)0x4200359CUL) /**< \brief (TRAM) TrustRAM 39 */
#define REG_TRAM_RAM40             (*(RwReg  *)0x420035A0UL) /**< \brief (TRAM) TrustRAM 40 */
#define REG_TRAM_RAM41             (*(RwReg  *)0x420035A4UL) /**< \brief (TRAM) TrustRAM 41 */
#define REG_TRAM_RAM42             (*(RwReg  *)0x420035A8UL) /**< \brief (TRAM) TrustRAM 42 */
#define REG_TRAM_RAM43             (*(RwReg  *)0x420035ACUL) /**< \brief (TRAM) TrustRAM 43 */
#define REG_TRAM_RAM44             (*(RwReg  *)0x420035B0UL) /**< \brief (TRAM) TrustRAM 44 */
#define REG_TRAM_RAM45             (*(RwReg  *)0x420035B4UL) /**< \brief (TRAM) TrustRAM 45 */
#define REG_TRAM_RAM46             (*(RwReg  *)0x420035B8UL) /**< \brief (TRAM) TrustRAM 46 */
#define REG_TRAM_RAM47             (*(RwReg  *)0x420035BCUL) /**< \brief (TRAM) TrustRAM 47 */
#define REG_TRAM_RAM48             (*(RwReg  *)0x420035C0UL) /**< \brief (TRAM) TrustRAM 48 */
#define REG_TRAM_RAM49             (*(RwReg  *)0x420035C4UL) /**< \brief (TRAM) TrustRAM 49 */
#define REG_TRAM_RAM50             (*(RwReg  *)0x420035C8UL) /**< \brief (TRAM) TrustRAM 50 */
#define REG_TRAM_RAM51             (*(RwReg  *)0x420035CCUL) /**< \brief (TRAM) TrustRAM 51 */
#define REG_TRAM_RAM52             (*(RwReg  *)0x420035D0UL) /**< \brief (TRAM) TrustRAM 52 */
#define REG_TRAM_RAM53             (*(RwReg  *)0x420035D4UL) /**< \brief (TRAM) TrustRAM 53 */
#define REG_TRAM_RAM54             (*(RwReg  *)0x420035D8UL) /**< \brief (TRAM) TrustRAM 54 */
#define REG_TRAM_RAM55             (*(RwReg  *)0x420035DCUL) /**< \brief (TRAM) TrustRAM 55 */
#define REG_TRAM_RAM56             (*(RwReg  *)0x420035E0UL) /**< \brief (TRAM) TrustRAM 56 */
#define REG_TRAM_RAM57             (*(RwReg  *)0x420035E4UL) /**< \brief (TRAM) TrustRAM 57 */
#define REG_TRAM_RAM58             (*(RwReg  *)0x420035E8UL) /**< \brief (TRAM) TrustRAM 58 */
#define REG_TRAM_RAM59             (*(RwReg  *)0x420035ECUL) /**< \brief (TRAM) TrustRAM 59 */
#define REG_TRAM_RAM60             (*(RwReg  *)0x420035F0UL) /**< \brief (TRAM) TrustRAM 60 */
#define REG_TRAM_RAM61             (*(RwReg  *)0x420035F4UL) /**< \brief (TRAM) TrustRAM 61 */
#define REG_TRAM_RAM62             (*(RwReg  *)0x420035F8UL) /**< \brief (TRAM) TrustRAM 62 */
#define REG_TRAM_RAM63             (*(RwReg  *)0x420035FCUL) /**< \brief (TRAM) TrustRAM 63 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TRAM peripheral ========== */
#define TRAM_CLK_AHB_ID             12       // AHB clock index

#endif /* _SAML11_TRAM_INSTANCE_ */
