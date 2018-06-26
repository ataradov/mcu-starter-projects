/**
 * \file
 *
 * \brief Instance description for PORT
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

#ifndef _SAML11_PORT_INSTANCE_
#define _SAML11_PORT_INSTANCE_

/* ========== Register definition for PORT peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_PORT_DIR0              (0x40003000) /**< \brief (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0           (0x40003004) /**< \brief (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0           (0x40003008) /**< \brief (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0           (0x4000300C) /**< \brief (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0              (0x40003010) /**< \brief (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0           (0x40003014) /**< \brief (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0           (0x40003018) /**< \brief (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0           (0x4000301C) /**< \brief (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0               (0x40003020) /**< \brief (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0             (0x40003024) /**< \brief (PORT) Control 0 */
#define REG_PORT_WRCONFIG0         (0x40003028) /**< \brief (PORT) Write Configuration 0 */
#define REG_PORT_EVCTRL0           (0x4000302C) /**< \brief (PORT) Event Input Control 0 */
#define REG_PORT_PMUX0             (0x40003030) /**< \brief (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0           (0x40003040) /**< \brief (PORT) Pin Configuration 0 */
#define REG_PORT_INTENCLR0         (0x40003060) /**< \brief (PORT) Interrupt Enable Clear 0 */
#define REG_PORT_INTENSET0         (0x40003064) /**< \brief (PORT) Interrupt Enable Set 0 */
#define REG_PORT_INTFLAG0          (0x40003068) /**< \brief (PORT) Interrupt Flag Status and Clear 0 */
#define REG_PORT_NONSEC0           (0x4000306C) /**< \brief (PORT) Security Attribution 0 */
#define REG_PORT_NSCHK0            (0x40003070) /**< \brief (PORT) Security Attribution Check 0 */
#else
#define REG_PORT_DIR0              (*(RwReg  *)0x40003000UL) /**< \brief (PORT) Data Direction 0 */
#define REG_PORT_DIRCLR0           (*(RwReg  *)0x40003004UL) /**< \brief (PORT) Data Direction Clear 0 */
#define REG_PORT_DIRSET0           (*(RwReg  *)0x40003008UL) /**< \brief (PORT) Data Direction Set 0 */
#define REG_PORT_DIRTGL0           (*(RwReg  *)0x4000300CUL) /**< \brief (PORT) Data Direction Toggle 0 */
#define REG_PORT_OUT0              (*(RwReg  *)0x40003010UL) /**< \brief (PORT) Data Output Value 0 */
#define REG_PORT_OUTCLR0           (*(RwReg  *)0x40003014UL) /**< \brief (PORT) Data Output Value Clear 0 */
#define REG_PORT_OUTSET0           (*(RwReg  *)0x40003018UL) /**< \brief (PORT) Data Output Value Set 0 */
#define REG_PORT_OUTTGL0           (*(RwReg  *)0x4000301CUL) /**< \brief (PORT) Data Output Value Toggle 0 */
#define REG_PORT_IN0               (*(RoReg  *)0x40003020UL) /**< \brief (PORT) Data Input Value 0 */
#define REG_PORT_CTRL0             (*(RwReg  *)0x40003024UL) /**< \brief (PORT) Control 0 */
#define REG_PORT_WRCONFIG0         (*(WoReg  *)0x40003028UL) /**< \brief (PORT) Write Configuration 0 */
#define REG_PORT_EVCTRL0           (*(RwReg  *)0x4000302CUL) /**< \brief (PORT) Event Input Control 0 */
#define REG_PORT_PMUX0             (*(RwReg  *)0x40003030UL) /**< \brief (PORT) Peripheral Multiplexing 0 */
#define REG_PORT_PINCFG0           (*(RwReg  *)0x40003040UL) /**< \brief (PORT) Pin Configuration 0 */
#define REG_PORT_INTENCLR0         (*(RwReg  *)0x40003060UL) /**< \brief (PORT) Interrupt Enable Clear 0 */
#define REG_PORT_INTENSET0         (*(RwReg  *)0x40003064UL) /**< \brief (PORT) Interrupt Enable Set 0 */
#define REG_PORT_INTFLAG0          (*(RwReg  *)0x40003068UL) /**< \brief (PORT) Interrupt Flag Status and Clear 0 */
#define REG_PORT_NONSEC0           (*(RwReg  *)0x4000306CUL) /**< \brief (PORT) Security Attribution 0 */
#define REG_PORT_NSCHK0            (*(RwReg  *)0x40003070UL) /**< \brief (PORT) Security Attribution Check 0 */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for PORT peripheral ========== */
#define PORT_BITS                   32      
#define PORT_DIR_DEFAULT_VAL        { 0x00000000 }
#define PORT_DIR_IMPLEMENTED        { 0xCBDFCFFF }
#define PORT_DRVSTR                 1        // DRVSTR supported
#define PORT_DRVSTR_DEFAULT_VAL     { 0x00000000 }
#define PORT_DRVSTR_IMPLEMENTED     { 0xCBDFCFFF }
#define PORT_EVENT_IMPLEMENTED      { 0xCBDFCFFF }
#define PORT_EV_NUM                 4       
#define PORT_INEN_DEFAULT_VAL       { 0x00000000 }
#define PORT_INEN_IMPLEMENTED       { 0xCBDFCFFF }
#define PORT_MSB                    31      
#define PORT_NONSEC_DEFAULT_VAL     { 0x00000000 }
#define PORT_NONSEC_IMPLEMENTED     { 0xCBDFCFFF }
#define PORT_ODRAIN                 0        // ODRAIN supported
#define PORT_ODRAIN_DEFAULT_VAL     { 0x00000000 }
#define PORT_ODRAIN_IMPLEMENTED     { 0x00000000 }
#define PORT_OUT_DEFAULT_VAL        { 0x00000000 }
#define PORT_OUT_IMPLEMENTED        { 0xCBDFCFFF }
#define PORT_PIN_IMPLEMENTED        { 0xCBDFCFFF }
#define PORT_PMUXBIT0_DEFAULT_VAL   { 0x00000000 }
#define PORT_PMUXBIT0_IMPLEMENTED   { 0xCBCFCFFF }
#define PORT_PMUXBIT1_DEFAULT_VAL   { 0x40000000 }
#define PORT_PMUXBIT1_IMPLEMENTED   { 0xCBCFCFFF }
#define PORT_PMUXBIT2_DEFAULT_VAL   { 0x40000000 }
#define PORT_PMUXBIT2_IMPLEMENTED   { 0xCBCFCFFF }
#define PORT_PMUXBIT3_DEFAULT_VAL   { 0x00000000 }
#define PORT_PMUXBIT3_IMPLEMENTED   { 0xC00F0FF0 }
#define PORT_PMUXEN_DEFAULT_VAL     { 0x40000000 }
#define PORT_PMUXEN_IMPLEMENTED     { 0xCBCFCFFF }
#define PORT_PPP_IMPLEMENTED        0        // IOBUS2 implemented?
#define PORT_PULLEN_DEFAULT_VAL     { 0x00000000 }
#define PORT_PULLEN_IMPLEMENTED     { 0xCBDFCFFF }
#define PORT_SECURE_IMPLEMENTED     1        // Secure I/Os supported?
#define PORT_SLEWLIM                0        // SLEWLIM supported
#define PORT_SLEWLIM_DEFAULT_VAL    { 0x00000000 }
#define PORT_SLEWLIM_IMPLEMENTED    { 0x00000000 }

#endif /* _SAML11_PORT_INSTANCE_ */
