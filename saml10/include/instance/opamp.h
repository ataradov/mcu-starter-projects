/**
 * \file
 *
 * \brief Instance description for OPAMP
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

#ifndef _SAML10_OPAMP_INSTANCE_
#define _SAML10_OPAMP_INSTANCE_

/* ========== Register definition for OPAMP peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_OPAMP_CTRLA            (0x42003000) /**< \brief (OPAMP) Control A */
#define REG_OPAMP_STATUS           (0x42003002) /**< \brief (OPAMP) Status */
#define REG_OPAMP_OPAMPCTRL0       (0x42003004) /**< \brief (OPAMP) OPAMP 0 Control */
#define REG_OPAMP_OPAMPCTRL1       (0x42003008) /**< \brief (OPAMP) OPAMP 1 Control */
#define REG_OPAMP_OPAMPCTRL2       (0x4200300C) /**< \brief (OPAMP) OPAMP 2 Control */
#define REG_OPAMP_RESCTRL          (0x42003010) /**< \brief (OPAMP) Resister Control */
#else
#define REG_OPAMP_CTRLA            (*(RwReg8 *)0x42003000UL) /**< \brief (OPAMP) Control A */
#define REG_OPAMP_STATUS           (*(RoReg8 *)0x42003002UL) /**< \brief (OPAMP) Status */
#define REG_OPAMP_OPAMPCTRL0       (*(RwReg  *)0x42003004UL) /**< \brief (OPAMP) OPAMP 0 Control */
#define REG_OPAMP_OPAMPCTRL1       (*(RwReg  *)0x42003008UL) /**< \brief (OPAMP) OPAMP 1 Control */
#define REG_OPAMP_OPAMPCTRL2       (*(RwReg  *)0x4200300CUL) /**< \brief (OPAMP) OPAMP 2 Control */
#define REG_OPAMP_RESCTRL          (*(RwReg8 *)0x42003010UL) /**< \brief (OPAMP) Resister Control */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */


#endif /* _SAML10_OPAMP_INSTANCE_ */
