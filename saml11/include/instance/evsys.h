/**
 * \file
 *
 * \brief Instance description for EVSYS
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

#ifndef _SAML11_EVSYS_INSTANCE_
#define _SAML11_EVSYS_INSTANCE_

/* ========== Register definition for EVSYS peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_EVSYS_CTRLA            (0x42000000) /**< \brief (EVSYS) Control */
#define REG_EVSYS_SWEVT            (0x42000004) /**< \brief (EVSYS) Software Event */
#define REG_EVSYS_PRICTRL          (0x42000008) /**< \brief (EVSYS) Priority Control */
#define REG_EVSYS_INTPEND          (0x42000010) /**< \brief (EVSYS) Channel Pending Interrupt */
#define REG_EVSYS_INTSTATUS        (0x42000014) /**< \brief (EVSYS) Interrupt Status */
#define REG_EVSYS_BUSYCH           (0x42000018) /**< \brief (EVSYS) Busy Channels */
#define REG_EVSYS_READYUSR         (0x4200001C) /**< \brief (EVSYS) Ready Users */
#define REG_EVSYS_CHANNEL0         (0x42000020) /**< \brief (EVSYS) Channel 0 Control */
#define REG_EVSYS_CHINTENCLR0      (0x42000024) /**< \brief (EVSYS) Channel 0 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET0      (0x42000025) /**< \brief (EVSYS) Channel 0 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG0       (0x42000026) /**< \brief (EVSYS) Channel 0 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS0        (0x42000027) /**< \brief (EVSYS) Channel 0 Status */
#define REG_EVSYS_CHANNEL1         (0x42000028) /**< \brief (EVSYS) Channel 1 Control */
#define REG_EVSYS_CHINTENCLR1      (0x4200002C) /**< \brief (EVSYS) Channel 1 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET1      (0x4200002D) /**< \brief (EVSYS) Channel 1 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG1       (0x4200002E) /**< \brief (EVSYS) Channel 1 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS1        (0x4200002F) /**< \brief (EVSYS) Channel 1 Status */
#define REG_EVSYS_CHANNEL2         (0x42000030) /**< \brief (EVSYS) Channel 2 Control */
#define REG_EVSYS_CHINTENCLR2      (0x42000034) /**< \brief (EVSYS) Channel 2 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET2      (0x42000035) /**< \brief (EVSYS) Channel 2 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG2       (0x42000036) /**< \brief (EVSYS) Channel 2 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS2        (0x42000037) /**< \brief (EVSYS) Channel 2 Status */
#define REG_EVSYS_CHANNEL3         (0x42000038) /**< \brief (EVSYS) Channel 3 Control */
#define REG_EVSYS_CHINTENCLR3      (0x4200003C) /**< \brief (EVSYS) Channel 3 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET3      (0x4200003D) /**< \brief (EVSYS) Channel 3 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG3       (0x4200003E) /**< \brief (EVSYS) Channel 3 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS3        (0x4200003F) /**< \brief (EVSYS) Channel 3 Status */
#define REG_EVSYS_CHANNEL4         (0x42000040) /**< \brief (EVSYS) Channel 4 Control */
#define REG_EVSYS_CHINTENCLR4      (0x42000044) /**< \brief (EVSYS) Channel 4 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET4      (0x42000045) /**< \brief (EVSYS) Channel 4 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG4       (0x42000046) /**< \brief (EVSYS) Channel 4 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS4        (0x42000047) /**< \brief (EVSYS) Channel 4 Status */
#define REG_EVSYS_CHANNEL5         (0x42000048) /**< \brief (EVSYS) Channel 5 Control */
#define REG_EVSYS_CHINTENCLR5      (0x4200004C) /**< \brief (EVSYS) Channel 5 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET5      (0x4200004D) /**< \brief (EVSYS) Channel 5 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG5       (0x4200004E) /**< \brief (EVSYS) Channel 5 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS5        (0x4200004F) /**< \brief (EVSYS) Channel 5 Status */
#define REG_EVSYS_CHANNEL6         (0x42000050) /**< \brief (EVSYS) Channel 6 Control */
#define REG_EVSYS_CHINTENCLR6      (0x42000054) /**< \brief (EVSYS) Channel 6 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET6      (0x42000055) /**< \brief (EVSYS) Channel 6 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG6       (0x42000056) /**< \brief (EVSYS) Channel 6 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS6        (0x42000057) /**< \brief (EVSYS) Channel 6 Status */
#define REG_EVSYS_CHANNEL7         (0x42000058) /**< \brief (EVSYS) Channel 7 Control */
#define REG_EVSYS_CHINTENCLR7      (0x4200005C) /**< \brief (EVSYS) Channel 7 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET7      (0x4200005D) /**< \brief (EVSYS) Channel 7 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG7       (0x4200005E) /**< \brief (EVSYS) Channel 7 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS7        (0x4200005F) /**< \brief (EVSYS) Channel 7 Status */
#define REG_EVSYS_USER0            (0x42000120) /**< \brief (EVSYS) User Multiplexer 0 */
#define REG_EVSYS_USER1            (0x42000121) /**< \brief (EVSYS) User Multiplexer 1 */
#define REG_EVSYS_USER2            (0x42000122) /**< \brief (EVSYS) User Multiplexer 2 */
#define REG_EVSYS_USER3            (0x42000123) /**< \brief (EVSYS) User Multiplexer 3 */
#define REG_EVSYS_USER4            (0x42000124) /**< \brief (EVSYS) User Multiplexer 4 */
#define REG_EVSYS_USER5            (0x42000125) /**< \brief (EVSYS) User Multiplexer 5 */
#define REG_EVSYS_USER6            (0x42000126) /**< \brief (EVSYS) User Multiplexer 6 */
#define REG_EVSYS_USER7            (0x42000127) /**< \brief (EVSYS) User Multiplexer 7 */
#define REG_EVSYS_USER8            (0x42000128) /**< \brief (EVSYS) User Multiplexer 8 */
#define REG_EVSYS_USER9            (0x42000129) /**< \brief (EVSYS) User Multiplexer 9 */
#define REG_EVSYS_USER10           (0x4200012A) /**< \brief (EVSYS) User Multiplexer 10 */
#define REG_EVSYS_USER11           (0x4200012B) /**< \brief (EVSYS) User Multiplexer 11 */
#define REG_EVSYS_USER12           (0x4200012C) /**< \brief (EVSYS) User Multiplexer 12 */
#define REG_EVSYS_USER13           (0x4200012D) /**< \brief (EVSYS) User Multiplexer 13 */
#define REG_EVSYS_USER14           (0x4200012E) /**< \brief (EVSYS) User Multiplexer 14 */
#define REG_EVSYS_USER15           (0x4200012F) /**< \brief (EVSYS) User Multiplexer 15 */
#define REG_EVSYS_USER16           (0x42000130) /**< \brief (EVSYS) User Multiplexer 16 */
#define REG_EVSYS_USER17           (0x42000131) /**< \brief (EVSYS) User Multiplexer 17 */
#define REG_EVSYS_USER18           (0x42000132) /**< \brief (EVSYS) User Multiplexer 18 */
#define REG_EVSYS_USER19           (0x42000133) /**< \brief (EVSYS) User Multiplexer 19 */
#define REG_EVSYS_USER20           (0x42000134) /**< \brief (EVSYS) User Multiplexer 20 */
#define REG_EVSYS_USER21           (0x42000135) /**< \brief (EVSYS) User Multiplexer 21 */
#define REG_EVSYS_USER22           (0x42000136) /**< \brief (EVSYS) User Multiplexer 22 */
#define REG_EVSYS_INTENCLR         (0x420001D4) /**< \brief (EVSYS) Interrupt Enable Clear */
#define REG_EVSYS_INTENSET         (0x420001D5) /**< \brief (EVSYS) Interrupt Enable Set */
#define REG_EVSYS_INTFLAG          (0x420001D6) /**< \brief (EVSYS) Interrupt Flag Status and Clear */
#define REG_EVSYS_NONSECCHAN       (0x420001D8) /**< \brief (EVSYS) Channels Security Attribution */
#define REG_EVSYS_NSCHKCHAN        (0x420001DC) /**< \brief (EVSYS) Non-Secure Channels Check */
#define REG_EVSYS_NONSECUSER0      (0x420001E0) /**< \brief (EVSYS) Users Security Attribution 0 */
#define REG_EVSYS_NSCHKUSER0       (0x420001F0) /**< \brief (EVSYS) Non-Secure Users Check 0 */
#else
#define REG_EVSYS_CTRLA            (*(WoReg8 *)0x42000000UL) /**< \brief (EVSYS) Control */
#define REG_EVSYS_SWEVT            (*(WoReg  *)0x42000004UL) /**< \brief (EVSYS) Software Event */
#define REG_EVSYS_PRICTRL          (*(RwReg8 *)0x42000008UL) /**< \brief (EVSYS) Priority Control */
#define REG_EVSYS_INTPEND          (*(RwReg16*)0x42000010UL) /**< \brief (EVSYS) Channel Pending Interrupt */
#define REG_EVSYS_INTSTATUS        (*(RoReg  *)0x42000014UL) /**< \brief (EVSYS) Interrupt Status */
#define REG_EVSYS_BUSYCH           (*(RoReg  *)0x42000018UL) /**< \brief (EVSYS) Busy Channels */
#define REG_EVSYS_READYUSR         (*(RoReg  *)0x4200001CUL) /**< \brief (EVSYS) Ready Users */
#define REG_EVSYS_CHANNEL0         (*(RwReg  *)0x42000020UL) /**< \brief (EVSYS) Channel 0 Control */
#define REG_EVSYS_CHINTENCLR0      (*(RwReg  *)0x42000024UL) /**< \brief (EVSYS) Channel 0 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET0      (*(RwReg  *)0x42000025UL) /**< \brief (EVSYS) Channel 0 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG0       (*(RwReg  *)0x42000026UL) /**< \brief (EVSYS) Channel 0 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS0        (*(RoReg  *)0x42000027UL) /**< \brief (EVSYS) Channel 0 Status */
#define REG_EVSYS_CHANNEL1         (*(RwReg  *)0x42000028UL) /**< \brief (EVSYS) Channel 1 Control */
#define REG_EVSYS_CHINTENCLR1      (*(RwReg  *)0x4200002CUL) /**< \brief (EVSYS) Channel 1 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET1      (*(RwReg  *)0x4200002DUL) /**< \brief (EVSYS) Channel 1 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG1       (*(RwReg  *)0x4200002EUL) /**< \brief (EVSYS) Channel 1 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS1        (*(RoReg  *)0x4200002FUL) /**< \brief (EVSYS) Channel 1 Status */
#define REG_EVSYS_CHANNEL2         (*(RwReg  *)0x42000030UL) /**< \brief (EVSYS) Channel 2 Control */
#define REG_EVSYS_CHINTENCLR2      (*(RwReg  *)0x42000034UL) /**< \brief (EVSYS) Channel 2 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET2      (*(RwReg  *)0x42000035UL) /**< \brief (EVSYS) Channel 2 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG2       (*(RwReg  *)0x42000036UL) /**< \brief (EVSYS) Channel 2 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS2        (*(RoReg  *)0x42000037UL) /**< \brief (EVSYS) Channel 2 Status */
#define REG_EVSYS_CHANNEL3         (*(RwReg  *)0x42000038UL) /**< \brief (EVSYS) Channel 3 Control */
#define REG_EVSYS_CHINTENCLR3      (*(RwReg  *)0x4200003CUL) /**< \brief (EVSYS) Channel 3 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET3      (*(RwReg  *)0x4200003DUL) /**< \brief (EVSYS) Channel 3 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG3       (*(RwReg  *)0x4200003EUL) /**< \brief (EVSYS) Channel 3 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS3        (*(RoReg  *)0x4200003FUL) /**< \brief (EVSYS) Channel 3 Status */
#define REG_EVSYS_CHANNEL4         (*(RwReg  *)0x42000040UL) /**< \brief (EVSYS) Channel 4 Control */
#define REG_EVSYS_CHINTENCLR4      (*(RwReg  *)0x42000044UL) /**< \brief (EVSYS) Channel 4 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET4      (*(RwReg  *)0x42000045UL) /**< \brief (EVSYS) Channel 4 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG4       (*(RwReg  *)0x42000046UL) /**< \brief (EVSYS) Channel 4 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS4        (*(RoReg  *)0x42000047UL) /**< \brief (EVSYS) Channel 4 Status */
#define REG_EVSYS_CHANNEL5         (*(RwReg  *)0x42000048UL) /**< \brief (EVSYS) Channel 5 Control */
#define REG_EVSYS_CHINTENCLR5      (*(RwReg  *)0x4200004CUL) /**< \brief (EVSYS) Channel 5 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET5      (*(RwReg  *)0x4200004DUL) /**< \brief (EVSYS) Channel 5 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG5       (*(RwReg  *)0x4200004EUL) /**< \brief (EVSYS) Channel 5 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS5        (*(RoReg  *)0x4200004FUL) /**< \brief (EVSYS) Channel 5 Status */
#define REG_EVSYS_CHANNEL6         (*(RwReg  *)0x42000050UL) /**< \brief (EVSYS) Channel 6 Control */
#define REG_EVSYS_CHINTENCLR6      (*(RwReg  *)0x42000054UL) /**< \brief (EVSYS) Channel 6 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET6      (*(RwReg  *)0x42000055UL) /**< \brief (EVSYS) Channel 6 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG6       (*(RwReg  *)0x42000056UL) /**< \brief (EVSYS) Channel 6 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS6        (*(RoReg  *)0x42000057UL) /**< \brief (EVSYS) Channel 6 Status */
#define REG_EVSYS_CHANNEL7         (*(RwReg  *)0x42000058UL) /**< \brief (EVSYS) Channel 7 Control */
#define REG_EVSYS_CHINTENCLR7      (*(RwReg  *)0x4200005CUL) /**< \brief (EVSYS) Channel 7 Interrupt Enable Clear */
#define REG_EVSYS_CHINTENSET7      (*(RwReg  *)0x4200005DUL) /**< \brief (EVSYS) Channel 7 Interrupt Enable Set */
#define REG_EVSYS_CHINTFLAG7       (*(RwReg  *)0x4200005EUL) /**< \brief (EVSYS) Channel 7 Interrupt Flag Status and Clear */
#define REG_EVSYS_CHSTATUS7        (*(RoReg  *)0x4200005FUL) /**< \brief (EVSYS) Channel 7 Status */
#define REG_EVSYS_USER0            (*(RwReg8 *)0x42000120UL) /**< \brief (EVSYS) User Multiplexer 0 */
#define REG_EVSYS_USER1            (*(RwReg8 *)0x42000121UL) /**< \brief (EVSYS) User Multiplexer 1 */
#define REG_EVSYS_USER2            (*(RwReg8 *)0x42000122UL) /**< \brief (EVSYS) User Multiplexer 2 */
#define REG_EVSYS_USER3            (*(RwReg8 *)0x42000123UL) /**< \brief (EVSYS) User Multiplexer 3 */
#define REG_EVSYS_USER4            (*(RwReg8 *)0x42000124UL) /**< \brief (EVSYS) User Multiplexer 4 */
#define REG_EVSYS_USER5            (*(RwReg8 *)0x42000125UL) /**< \brief (EVSYS) User Multiplexer 5 */
#define REG_EVSYS_USER6            (*(RwReg8 *)0x42000126UL) /**< \brief (EVSYS) User Multiplexer 6 */
#define REG_EVSYS_USER7            (*(RwReg8 *)0x42000127UL) /**< \brief (EVSYS) User Multiplexer 7 */
#define REG_EVSYS_USER8            (*(RwReg8 *)0x42000128UL) /**< \brief (EVSYS) User Multiplexer 8 */
#define REG_EVSYS_USER9            (*(RwReg8 *)0x42000129UL) /**< \brief (EVSYS) User Multiplexer 9 */
#define REG_EVSYS_USER10           (*(RwReg8 *)0x4200012AUL) /**< \brief (EVSYS) User Multiplexer 10 */
#define REG_EVSYS_USER11           (*(RwReg8 *)0x4200012BUL) /**< \brief (EVSYS) User Multiplexer 11 */
#define REG_EVSYS_USER12           (*(RwReg8 *)0x4200012CUL) /**< \brief (EVSYS) User Multiplexer 12 */
#define REG_EVSYS_USER13           (*(RwReg8 *)0x4200012DUL) /**< \brief (EVSYS) User Multiplexer 13 */
#define REG_EVSYS_USER14           (*(RwReg8 *)0x4200012EUL) /**< \brief (EVSYS) User Multiplexer 14 */
#define REG_EVSYS_USER15           (*(RwReg8 *)0x4200012FUL) /**< \brief (EVSYS) User Multiplexer 15 */
#define REG_EVSYS_USER16           (*(RwReg8 *)0x42000130UL) /**< \brief (EVSYS) User Multiplexer 16 */
#define REG_EVSYS_USER17           (*(RwReg8 *)0x42000131UL) /**< \brief (EVSYS) User Multiplexer 17 */
#define REG_EVSYS_USER18           (*(RwReg8 *)0x42000132UL) /**< \brief (EVSYS) User Multiplexer 18 */
#define REG_EVSYS_USER19           (*(RwReg8 *)0x42000133UL) /**< \brief (EVSYS) User Multiplexer 19 */
#define REG_EVSYS_USER20           (*(RwReg8 *)0x42000134UL) /**< \brief (EVSYS) User Multiplexer 20 */
#define REG_EVSYS_USER21           (*(RwReg8 *)0x42000135UL) /**< \brief (EVSYS) User Multiplexer 21 */
#define REG_EVSYS_USER22           (*(RwReg8 *)0x42000136UL) /**< \brief (EVSYS) User Multiplexer 22 */
#define REG_EVSYS_INTENCLR         (*(RwReg8 *)0x420001D4UL) /**< \brief (EVSYS) Interrupt Enable Clear */
#define REG_EVSYS_INTENSET         (*(RwReg8 *)0x420001D5UL) /**< \brief (EVSYS) Interrupt Enable Set */
#define REG_EVSYS_INTFLAG          (*(RwReg8 *)0x420001D6UL) /**< \brief (EVSYS) Interrupt Flag Status and Clear */
#define REG_EVSYS_NONSECCHAN       (*(RwReg  *)0x420001D8UL) /**< \brief (EVSYS) Channels Security Attribution */
#define REG_EVSYS_NSCHKCHAN        (*(RwReg  *)0x420001DCUL) /**< \brief (EVSYS) Non-Secure Channels Check */
#define REG_EVSYS_NONSECUSER0      (*(RwReg  *)0x420001E0UL) /**< \brief (EVSYS) Users Security Attribution 0 */
#define REG_EVSYS_NSCHKUSER0       (*(RwReg  *)0x420001F0UL) /**< \brief (EVSYS) Non-Secure Users Check 0 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for EVSYS peripheral ========== */
#define EVSYS_ASYNCHRONOUS_CHANNELS 0x000000F0 // Mask of Only Asynchronous Channels
#define EVSYS_CHANNELS              8        // Number of Channels
#define EVSYS_CHANNELS_BITS         3        // Number of bits to select Channel
#define EVSYS_GCLK_ID_0             6
#define EVSYS_GCLK_ID_1             7
#define EVSYS_GCLK_ID_2             8
#define EVSYS_GCLK_ID_3             9
#define EVSYS_GCLK_ID_LSB           6
#define EVSYS_GCLK_ID_MSB           9
#define EVSYS_GCLK_ID_SIZE          4
#define EVSYS_GENERATORS            49       // Total Number of Event Generators
#define EVSYS_GENERATORS_BITS       6        // Number of bits to select Event Generator
#define EVSYS_SECURE_IMPLEMENTED    1        // Secure Channels/Users supported?
#define EVSYS_SYNCH_NUM             4        // Number of Synchronous Channels
#define EVSYS_SYNCH_NUM_BITS        2        // Number of bits to select Synchronous Channels
#define EVSYS_USERS                 23       // Total Number of Event Users
#define EVSYS_USERS_BITS            5        // Number of bits to select Event User
#define EVSYS_USERS_GROUPS          1        // Number of 32-user groups

// GENERATORS
#define EVSYS_ID_GEN_OSCCTRL_XOSC_FAIL 1
#define EVSYS_ID_GEN_OSC32KCTRL_XOSC32K_FAIL 2
#define EVSYS_ID_GEN_SUPC_BOD33DET  3
#define EVSYS_ID_GEN_RTC_PER_0      4
#define EVSYS_ID_GEN_RTC_PER_1      5
#define EVSYS_ID_GEN_RTC_PER_2      6
#define EVSYS_ID_GEN_RTC_PER_3      7
#define EVSYS_ID_GEN_RTC_PER_4      8
#define EVSYS_ID_GEN_RTC_PER_5      9
#define EVSYS_ID_GEN_RTC_PER_6      10
#define EVSYS_ID_GEN_RTC_PER_7      11
#define EVSYS_ID_GEN_RTC_CMP_0      12
#define EVSYS_ID_GEN_RTC_CMP_1      13
#define EVSYS_ID_GEN_RTC_TAMPER     14
#define EVSYS_ID_GEN_RTC_OVF        15
#define EVSYS_ID_GEN_RTC_PERD       16
#define EVSYS_ID_GEN_EIC_EXTINT_0   17
#define EVSYS_ID_GEN_EIC_EXTINT_1   18
#define EVSYS_ID_GEN_EIC_EXTINT_2   19
#define EVSYS_ID_GEN_EIC_EXTINT_3   20
#define EVSYS_ID_GEN_EIC_EXTINT_4   21
#define EVSYS_ID_GEN_EIC_EXTINT_5   22
#define EVSYS_ID_GEN_EIC_EXTINT_6   23
#define EVSYS_ID_GEN_EIC_EXTINT_7   24
#define EVSYS_ID_GEN_DMAC_CH_0      25
#define EVSYS_ID_GEN_DMAC_CH_1      26
#define EVSYS_ID_GEN_DMAC_CH_2      27
#define EVSYS_ID_GEN_DMAC_CH_3      28
#define EVSYS_ID_GEN_TC0_OVF        29
#define EVSYS_ID_GEN_TC0_MCX_0      30
#define EVSYS_ID_GEN_TC0_MCX_1      31
#define EVSYS_ID_GEN_TC1_OVF        32
#define EVSYS_ID_GEN_TC1_MCX_0      33
#define EVSYS_ID_GEN_TC1_MCX_1      34
#define EVSYS_ID_GEN_TC2_OVF        35
#define EVSYS_ID_GEN_TC2_MCX_0      36
#define EVSYS_ID_GEN_TC2_MCX_1      37
#define EVSYS_ID_GEN_ADC_RESRDY     38
#define EVSYS_ID_GEN_ADC_WINMON     39
#define EVSYS_ID_GEN_AC_COMP_0      40
#define EVSYS_ID_GEN_AC_COMP_1      41
#define EVSYS_ID_GEN_AC_WIN_0       42
#define EVSYS_ID_GEN_DAC_EMPTY      43
#define EVSYS_ID_GEN_TRNG_READY     46
#define EVSYS_ID_GEN_CCL_LUTOUT_0   47
#define EVSYS_ID_GEN_CCL_LUTOUT_1   48
#define EVSYS_ID_GEN_PAC_ACCERR     49

// USERS
#define EVSYS_ID_USER_OSCCTRL_TUNE  0
#define EVSYS_ID_USER_RTC_TAMPER    1
#define EVSYS_ID_USER_NVMCTRL_PAGEW 2
#define EVSYS_ID_USER_PORT_EV_0     3
#define EVSYS_ID_USER_PORT_EV_1     4
#define EVSYS_ID_USER_PORT_EV_2     5
#define EVSYS_ID_USER_PORT_EV_3     6
#define EVSYS_ID_USER_DMAC_CH_0     7
#define EVSYS_ID_USER_DMAC_CH_1     8
#define EVSYS_ID_USER_DMAC_CH_2     9
#define EVSYS_ID_USER_DMAC_CH_3     10
#define EVSYS_ID_USER_TC0_EVU       11
#define EVSYS_ID_USER_TC1_EVU       12
#define EVSYS_ID_USER_TC2_EVU       13
#define EVSYS_ID_USER_ADC_START     14
#define EVSYS_ID_USER_ADC_SYNC      15
#define EVSYS_ID_USER_AC_SOC_0      16
#define EVSYS_ID_USER_AC_SOC_1      17
#define EVSYS_ID_USER_DAC_START     18
#define EVSYS_ID_USER_CCL_LUTIN_0   21
#define EVSYS_ID_USER_CCL_LUTIN_1   22

#endif /* _SAML11_EVSYS_INSTANCE_ */
