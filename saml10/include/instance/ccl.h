/**
 * \file
 *
 * \brief Instance description for CCL
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

#ifndef _SAML10_CCL_INSTANCE_
#define _SAML10_CCL_INSTANCE_

/* ========== Register definition for CCL peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_CCL_CTRL               (0x42002C00) /**< \brief (CCL) Control */
#define REG_CCL_SEQCTRL0           (0x42002C04) /**< \brief (CCL) SEQ Control x 0 */
#define REG_CCL_LUTCTRL0           (0x42002C08) /**< \brief (CCL) LUT Control x 0 */
#define REG_CCL_LUTCTRL1           (0x42002C0C) /**< \brief (CCL) LUT Control x 1 */
#else
#define REG_CCL_CTRL               (*(RwReg8 *)0x42002C00UL) /**< \brief (CCL) Control */
#define REG_CCL_SEQCTRL0           (*(RwReg8 *)0x42002C04UL) /**< \brief (CCL) SEQ Control x 0 */
#define REG_CCL_LUTCTRL0           (*(RwReg  *)0x42002C08UL) /**< \brief (CCL) LUT Control x 0 */
#define REG_CCL_LUTCTRL1           (*(RwReg  *)0x42002C0CUL) /**< \brief (CCL) LUT Control x 1 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for CCL peripheral ========== */
#define CCL_GCLK_ID                 20       // GCLK index for CCL
#define CCL_LUT_NUM                 2        // Number of LUT in a CCL
#define CCL_SEQ_NUM                 1        // Number of SEQ in a CCL

#endif /* _SAML10_CCL_INSTANCE_ */
