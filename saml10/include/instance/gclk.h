/**
 * \file
 *
 * \brief Instance description for GCLK
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

#ifndef _SAML10_GCLK_INSTANCE_
#define _SAML10_GCLK_INSTANCE_

/* ========== Register definition for GCLK peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_GCLK_CTRLA             (0x40001C00) /**< \brief (GCLK) Control */
#define REG_GCLK_SYNCBUSY          (0x40001C04) /**< \brief (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL0          (0x40001C20) /**< \brief (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1          (0x40001C24) /**< \brief (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2          (0x40001C28) /**< \brief (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3          (0x40001C2C) /**< \brief (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4          (0x40001C30) /**< \brief (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_PCHCTRL0          (0x40001C80) /**< \brief (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1          (0x40001C84) /**< \brief (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2          (0x40001C88) /**< \brief (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3          (0x40001C8C) /**< \brief (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4          (0x40001C90) /**< \brief (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5          (0x40001C94) /**< \brief (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6          (0x40001C98) /**< \brief (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7          (0x40001C9C) /**< \brief (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8          (0x40001CA0) /**< \brief (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9          (0x40001CA4) /**< \brief (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10         (0x40001CA8) /**< \brief (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11         (0x40001CAC) /**< \brief (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12         (0x40001CB0) /**< \brief (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13         (0x40001CB4) /**< \brief (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14         (0x40001CB8) /**< \brief (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15         (0x40001CBC) /**< \brief (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16         (0x40001CC0) /**< \brief (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17         (0x40001CC4) /**< \brief (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18         (0x40001CC8) /**< \brief (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19         (0x40001CCC) /**< \brief (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20         (0x40001CD0) /**< \brief (GCLK) Peripheral Clock Control 20 */
#else
#define REG_GCLK_CTRLA             (*(RwReg8 *)0x40001C00UL) /**< \brief (GCLK) Control */
#define REG_GCLK_SYNCBUSY          (*(RoReg  *)0x40001C04UL) /**< \brief (GCLK) Synchronization Busy */
#define REG_GCLK_GENCTRL0          (*(RwReg  *)0x40001C20UL) /**< \brief (GCLK) Generic Clock Generator Control 0 */
#define REG_GCLK_GENCTRL1          (*(RwReg  *)0x40001C24UL) /**< \brief (GCLK) Generic Clock Generator Control 1 */
#define REG_GCLK_GENCTRL2          (*(RwReg  *)0x40001C28UL) /**< \brief (GCLK) Generic Clock Generator Control 2 */
#define REG_GCLK_GENCTRL3          (*(RwReg  *)0x40001C2CUL) /**< \brief (GCLK) Generic Clock Generator Control 3 */
#define REG_GCLK_GENCTRL4          (*(RwReg  *)0x40001C30UL) /**< \brief (GCLK) Generic Clock Generator Control 4 */
#define REG_GCLK_PCHCTRL0          (*(RwReg  *)0x40001C80UL) /**< \brief (GCLK) Peripheral Clock Control 0 */
#define REG_GCLK_PCHCTRL1          (*(RwReg  *)0x40001C84UL) /**< \brief (GCLK) Peripheral Clock Control 1 */
#define REG_GCLK_PCHCTRL2          (*(RwReg  *)0x40001C88UL) /**< \brief (GCLK) Peripheral Clock Control 2 */
#define REG_GCLK_PCHCTRL3          (*(RwReg  *)0x40001C8CUL) /**< \brief (GCLK) Peripheral Clock Control 3 */
#define REG_GCLK_PCHCTRL4          (*(RwReg  *)0x40001C90UL) /**< \brief (GCLK) Peripheral Clock Control 4 */
#define REG_GCLK_PCHCTRL5          (*(RwReg  *)0x40001C94UL) /**< \brief (GCLK) Peripheral Clock Control 5 */
#define REG_GCLK_PCHCTRL6          (*(RwReg  *)0x40001C98UL) /**< \brief (GCLK) Peripheral Clock Control 6 */
#define REG_GCLK_PCHCTRL7          (*(RwReg  *)0x40001C9CUL) /**< \brief (GCLK) Peripheral Clock Control 7 */
#define REG_GCLK_PCHCTRL8          (*(RwReg  *)0x40001CA0UL) /**< \brief (GCLK) Peripheral Clock Control 8 */
#define REG_GCLK_PCHCTRL9          (*(RwReg  *)0x40001CA4UL) /**< \brief (GCLK) Peripheral Clock Control 9 */
#define REG_GCLK_PCHCTRL10         (*(RwReg  *)0x40001CA8UL) /**< \brief (GCLK) Peripheral Clock Control 10 */
#define REG_GCLK_PCHCTRL11         (*(RwReg  *)0x40001CACUL) /**< \brief (GCLK) Peripheral Clock Control 11 */
#define REG_GCLK_PCHCTRL12         (*(RwReg  *)0x40001CB0UL) /**< \brief (GCLK) Peripheral Clock Control 12 */
#define REG_GCLK_PCHCTRL13         (*(RwReg  *)0x40001CB4UL) /**< \brief (GCLK) Peripheral Clock Control 13 */
#define REG_GCLK_PCHCTRL14         (*(RwReg  *)0x40001CB8UL) /**< \brief (GCLK) Peripheral Clock Control 14 */
#define REG_GCLK_PCHCTRL15         (*(RwReg  *)0x40001CBCUL) /**< \brief (GCLK) Peripheral Clock Control 15 */
#define REG_GCLK_PCHCTRL16         (*(RwReg  *)0x40001CC0UL) /**< \brief (GCLK) Peripheral Clock Control 16 */
#define REG_GCLK_PCHCTRL17         (*(RwReg  *)0x40001CC4UL) /**< \brief (GCLK) Peripheral Clock Control 17 */
#define REG_GCLK_PCHCTRL18         (*(RwReg  *)0x40001CC8UL) /**< \brief (GCLK) Peripheral Clock Control 18 */
#define REG_GCLK_PCHCTRL19         (*(RwReg  *)0x40001CCCUL) /**< \brief (GCLK) Peripheral Clock Control 19 */
#define REG_GCLK_PCHCTRL20         (*(RwReg  *)0x40001CD0UL) /**< \brief (GCLK) Peripheral Clock Control 20 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for GCLK peripheral ========== */
#define GCLK_GENDIV_BITS            16      
#define GCLK_GEN_BITS               3       
#define GCLK_GEN_NUM                5        // Number of Generic Clock Generators
#define GCLK_GEN_NUM_MSB            4        // Number of Generic Clock Generators - 1
#define GCLK_GEN_SOURCE_NUM_MSB     7        // Number of Generic Clock Sources - 1
#define GCLK_NUM                    21       // Number of Generic Clock Users
#define GCLK_SOURCE_BITS            3       
#define GCLK_SOURCE_NUM             8        // Number of Generic Clock Sources
#define GCLK_SOURCE_XOSC            0        // Crystal Oscillator
#define GCLK_SOURCE_GCLKIN          1        // Input Pin of Corresponding GCLK Generator
#define GCLK_SOURCE_GCLKGEN1        2        // GCLK Generator 1 output
#define GCLK_SOURCE_OSCULP32K       3        // Ultra-low-power 32kHz Oscillator
#define GCLK_SOURCE_XOSC32K         4        // 32kHz Crystal Oscillator
#define GCLK_SOURCE_OSC16M          5        // 16 MHz Internal Oscillator
#define GCLK_SOURCE_DFLLULP         6        // Digital FLL Ultra Low Power
#define GCLK_SOURCE_FDPLL           7        // Digital PLL
#define GCLK_GEN_DIV_BITS           { 8, 16, 8, 8, 8 }

#endif /* _SAML10_GCLK_INSTANCE_ */
