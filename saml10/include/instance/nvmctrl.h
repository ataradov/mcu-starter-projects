/**
 * \file
 *
 * \brief Instance description for NVMCTRL
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

#ifndef _SAML10_NVMCTRL_INSTANCE_
#define _SAML10_NVMCTRL_INSTANCE_

/* ========== Register definition for NVMCTRL peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_NVMCTRL_CTRLA          (0x41004000) /**< \brief (NVMCTRL) Control A */
#define REG_NVMCTRL_CTRLB          (0x41004004) /**< \brief (NVMCTRL) Control B */
#define REG_NVMCTRL_CTRLC          (0x41004008) /**< \brief (NVMCTRL) Control C */
#define REG_NVMCTRL_EVCTRL         (0x4100400A) /**< \brief (NVMCTRL) Event Control */
#define REG_NVMCTRL_INTENCLR       (0x4100400C) /**< \brief (NVMCTRL) Interrupt Enable Clear */
#define REG_NVMCTRL_INTENSET       (0x41004010) /**< \brief (NVMCTRL) Interrupt Enable Set */
#define REG_NVMCTRL_INTFLAG        (0x41004014) /**< \brief (NVMCTRL) Interrupt Flag Status and Clear */
#define REG_NVMCTRL_STATUS         (0x41004018) /**< \brief (NVMCTRL) Status */
#define REG_NVMCTRL_ADDR           (0x4100401C) /**< \brief (NVMCTRL) Address */
#define REG_NVMCTRL_SULCK          (0x41004020) /**< \brief (NVMCTRL) Secure Unlock Register */
#define REG_NVMCTRL_NSULCK         (0x41004022) /**< \brief (NVMCTRL) Non-Secure Unlock Register */
#define REG_NVMCTRL_PARAM          (0x41004024) /**< \brief (NVMCTRL) NVM Parameter */
#define REG_NVMCTRL_DSCC           (0x41004030) /**< \brief (NVMCTRL) Data Scramble Configuration */
#define REG_NVMCTRL_SECCTRL        (0x41004034) /**< \brief (NVMCTRL) Security Control */
#define REG_NVMCTRL_SCFGB          (0x41004038) /**< \brief (NVMCTRL) Secure Boot Configuration */
#define REG_NVMCTRL_SCFGAD         (0x4100403C) /**< \brief (NVMCTRL) Secure Application and Data Configuration */
#define REG_NVMCTRL_NONSEC         (0x41004040) /**< \brief (NVMCTRL) Non-secure Write Enable */
#define REG_NVMCTRL_NSCHK          (0x41004044) /**< \brief (NVMCTRL) Non-secure Write Reference Value */
#else
#define REG_NVMCTRL_CTRLA          (*(WoReg16*)0x41004000UL) /**< \brief (NVMCTRL) Control A */
#define REG_NVMCTRL_CTRLB          (*(RwReg  *)0x41004004UL) /**< \brief (NVMCTRL) Control B */
#define REG_NVMCTRL_CTRLC          (*(RwReg8 *)0x41004008UL) /**< \brief (NVMCTRL) Control C */
#define REG_NVMCTRL_EVCTRL         (*(RwReg8 *)0x4100400AUL) /**< \brief (NVMCTRL) Event Control */
#define REG_NVMCTRL_INTENCLR       (*(RwReg8 *)0x4100400CUL) /**< \brief (NVMCTRL) Interrupt Enable Clear */
#define REG_NVMCTRL_INTENSET       (*(RwReg8 *)0x41004010UL) /**< \brief (NVMCTRL) Interrupt Enable Set */
#define REG_NVMCTRL_INTFLAG        (*(RwReg8 *)0x41004014UL) /**< \brief (NVMCTRL) Interrupt Flag Status and Clear */
#define REG_NVMCTRL_STATUS         (*(RoReg16*)0x41004018UL) /**< \brief (NVMCTRL) Status */
#define REG_NVMCTRL_ADDR           (*(RwReg  *)0x4100401CUL) /**< \brief (NVMCTRL) Address */
#define REG_NVMCTRL_SULCK          (*(RwReg16*)0x41004020UL) /**< \brief (NVMCTRL) Secure Unlock Register */
#define REG_NVMCTRL_NSULCK         (*(RwReg16*)0x41004022UL) /**< \brief (NVMCTRL) Non-Secure Unlock Register */
#define REG_NVMCTRL_PARAM          (*(RwReg  *)0x41004024UL) /**< \brief (NVMCTRL) NVM Parameter */
#define REG_NVMCTRL_DSCC           (*(WoReg  *)0x41004030UL) /**< \brief (NVMCTRL) Data Scramble Configuration */
#define REG_NVMCTRL_SECCTRL        (*(RwReg  *)0x41004034UL) /**< \brief (NVMCTRL) Security Control */
#define REG_NVMCTRL_SCFGB          (*(RwReg  *)0x41004038UL) /**< \brief (NVMCTRL) Secure Boot Configuration */
#define REG_NVMCTRL_SCFGAD         (*(RwReg  *)0x4100403CUL) /**< \brief (NVMCTRL) Secure Application and Data Configuration */
#define REG_NVMCTRL_NONSEC         (*(RwReg  *)0x41004040UL) /**< \brief (NVMCTRL) Non-secure Write Enable */
#define REG_NVMCTRL_NSCHK          (*(RwReg  *)0x41004044UL) /**< \brief (NVMCTRL) Non-secure Write Reference Value */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for NVMCTRL peripheral ========== */
#define NVMCTRL_CLK_AHB_ID          7        // Index of AHB Clock in PM.AHBMASK register
#define NVMCTRL_CLK_AHB_ID_PICACHU  9        // Index of PICACHU AHB Clock
#define NVMCTRL_DATAFLASH_PAGES     32      
#define NVMCTRL_FLASH_SIZE          65536   
#define NVMCTRL_PAGE_HW             32      
#define NVMCTRL_PAGE_SIZE           64      
#define NVMCTRL_PAGE_W              16      
#define NVMCTRL_PMSB                3       
#define NVMCTRL_PSZ_BITS            6       
#define NVMCTRL_ROW_PAGES           4       
#define NVMCTRL_ROW_SIZE            256     
#define NVMCTRL_SECURE_IMPLEMENTED  1        // Security Configuration implemented?

#endif /* _SAML10_NVMCTRL_INSTANCE_ */
