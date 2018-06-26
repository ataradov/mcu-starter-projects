/**
 * \file
 *
 * \brief Header file for SAML10D14A
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

#ifndef _SAML10D14A_
#define _SAML10D14A_

/**
 * \ingroup SAML10_definitions
 * \addtogroup SAML10D14A_definitions SAML10D14A definitions
 * This file defines all structures and symbols for SAML10D14A:
 *   - registers and bitfields
 *   - peripheral base address
 *   - peripheral ID
 *   - PIO definitions
*/
/*@{*/

#ifdef __cplusplus
 extern "C" {
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#include <stdint.h>
#ifndef __cplusplus
typedef volatile const uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile const uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile const uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#else
typedef volatile       uint32_t RoReg;   /**< Read only 32-bit register (volatile const unsigned int) */
typedef volatile       uint16_t RoReg16; /**< Read only 16-bit register (volatile const unsigned int) */
typedef volatile       uint8_t  RoReg8;  /**< Read only  8-bit register (volatile const unsigned int) */
#endif
typedef volatile       uint32_t WoReg;   /**< Write only 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t WoReg16; /**< Write only 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  WoReg8;  /**< Write only  8-bit register (volatile unsigned int) */
typedef volatile       uint32_t RwReg;   /**< Read-Write 32-bit register (volatile unsigned int) */
typedef volatile       uint16_t RwReg16; /**< Read-Write 16-bit register (volatile unsigned int) */
typedef volatile       uint8_t  RwReg8;  /**< Read-Write  8-bit register (volatile unsigned int) */
#endif

#if !defined(SKIP_INTEGER_LITERALS)
#if defined(_U_) || defined(_L_) || defined(_UL_)
  #error "Integer Literals macros already defined elsewhere"
#endif

#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
/* Macros that deal with adding suffixes to integer literal constants for C/C++ */
#define _U_(x)         x ## U            /**< C code: Unsigned integer literal constant value */
#define _L_(x)         x ## L            /**< C code: Long integer literal constant value */
#define _UL_(x)        x ## UL           /**< C code: Unsigned Long integer literal constant value */
#else /* Assembler */
#define _U_(x)         x                 /**< Assembler: Unsigned integer literal constant value */
#define _L_(x)         x                 /**< Assembler: Long integer literal constant value */
#define _UL_(x)        x                 /**< Assembler: Unsigned Long integer literal constant value */
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
#endif /* SKIP_INTEGER_LITERALS */

/* ************************************************************************** */
/**  CMSIS DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_cmsis CMSIS Definitions */
/*@{*/

/** Interrupt Number Definition */
typedef enum IRQn
{
  /******  Cortex-M23 Processor Exceptions Numbers ******************************/
  NonMaskableInt_IRQn      = -14,/**<  2 Non Maskable Interrupt                 */
  HardFault_IRQn           = -13,/**<  3 Cortex-M23 Hard Fault Interrupt        */
  SecureFault_IRQn         = -9, /**<  7 Cortex-M23 Secure Fault Interrupt      */
  SVCall_IRQn              = -5, /**< 11 Cortex-M23 SV Call Interrupt           */
  PendSV_IRQn              = -2, /**< 14 Cortex-M23 Pend SV Interrupt           */
  SysTick_IRQn             = -1, /**< 15 Cortex-M23 System Tick Interrupt       */
  /******  SAML10D14A-specific Interrupt Numbers ***********************/
  SYSTEM_IRQn              =  0, /**<  0 SAML10D14A SYSTEM: MCLK, OSCCTRL, OSC32KCTRL, PM, SUPC */
  WDT_IRQn                 =  1, /**<  1 SAML10D14A Watchdog Timer (WDT) */
  RTC_IRQn                 =  2, /**<  2 SAML10D14A Real-Time Counter (RTC) */
  EIC_0_IRQn               =  3, /**<  3 SAML10D14A External Interrupt Controller (EIC): EIC_EXTINT_0 */
  EIC_1_IRQn               =  4, /**<  4 SAML10D14A External Interrupt Controller (EIC): EIC_EXTINT_1 */
  EIC_2_IRQn               =  5, /**<  5 SAML10D14A External Interrupt Controller (EIC): EIC_EXTINT_2 */
  EIC_3_IRQn               =  6, /**<  6 SAML10D14A External Interrupt Controller (EIC): EIC_EXTINT_3 */
  EIC_4_IRQn               =  7, /**<  7 SAML10D14A External Interrupt Controller (EIC): EIC_EXTINT_4, EIC_EXTINT_5, EIC_EXTINT_6, EIC_EXTINT_7, EIC_NSCHK */
  FREQM_IRQn               =  8, /**<  8 SAML10D14A Frequency Meter (FREQM) */
  NVMCTRL_IRQn             =  9, /**<  9 SAML10D14A Non-Volatile Memory Controller (NVMCTRL) */
  PORT_IRQn                = 10, /**< 10 SAML10D14A Port Module (PORT) */
  DMAC_0_IRQn              = 11, /**< 11 SAML10D14A Direct Memory Access Controller (DMAC): DMAC_SUSP_0, DMAC_TCMPL_0, DMAC_TERR_0 */
  DMAC_1_IRQn              = 12, /**< 12 SAML10D14A Direct Memory Access Controller (DMAC): DMAC_SUSP_1, DMAC_TCMPL_1, DMAC_TERR_1 */
  DMAC_2_IRQn              = 13, /**< 13 SAML10D14A Direct Memory Access Controller (DMAC): DMAC_SUSP_2, DMAC_TCMPL_2, DMAC_TERR_2 */
  DMAC_3_IRQn              = 14, /**< 14 SAML10D14A Direct Memory Access Controller (DMAC): DMAC_SUSP_3, DMAC_TCMPL_3, DMAC_TERR_3 */
  DMAC_4_IRQn              = 15, /**< 15 SAML10D14A Direct Memory Access Controller (DMAC): DMAC_SUSP_4, DMAC_SUSP_5, DMAC_SUSP_6, DMAC_SUSP_7, DMAC_TCMPL_4, DMAC_TCMPL_5, DMAC_TCMPL_6, DMAC_TCMPL_7, DMAC_TERR_4, DMAC_TERR_5, DMAC_TERR_6, DMAC_TERR_7 */
  EVSYS_0_IRQn             = 16, /**< 16 SAML10D14A Event System Interface (EVSYS): EVSYS_EVD_0, EVSYS_OVR_0 */
  EVSYS_1_IRQn             = 17, /**< 17 SAML10D14A Event System Interface (EVSYS): EVSYS_EVD_1, EVSYS_OVR_1 */
  EVSYS_2_IRQn             = 18, /**< 18 SAML10D14A Event System Interface (EVSYS): EVSYS_EVD_2, EVSYS_OVR_2 */
  EVSYS_3_IRQn             = 19, /**< 19 SAML10D14A Event System Interface (EVSYS): EVSYS_EVD_3, EVSYS_OVR_3 */
  EVSYS_4_IRQn             = 20, /**< 20 SAML10D14A Event System Interface (EVSYS): EVSYS_NSCHK */
  PAC_IRQn                 = 21, /**< 21 SAML10D14A Peripheral Access Controller (PAC) */
  SERCOM0_0_IRQn           = 22, /**< 22 SAML10D14A Serial Communication Interface 0 (SERCOM0): SERCOM0_0 */
  SERCOM0_1_IRQn           = 23, /**< 23 SAML10D14A Serial Communication Interface 0 (SERCOM0): SERCOM0_1 */
  SERCOM0_2_IRQn           = 24, /**< 24 SAML10D14A Serial Communication Interface 0 (SERCOM0): SERCOM0_2 */
  SERCOM0_3_IRQn           = 25, /**< 25 SAML10D14A Serial Communication Interface 0 (SERCOM0): SERCOM0_3, SERCOM0_4, SERCOM0_5, SERCOM0_6 */
  SERCOM1_0_IRQn           = 26, /**< 26 SAML10D14A Serial Communication Interface 1 (SERCOM1): SERCOM1_0 */
  SERCOM1_1_IRQn           = 27, /**< 27 SAML10D14A Serial Communication Interface 1 (SERCOM1): SERCOM1_1 */
  SERCOM1_2_IRQn           = 28, /**< 28 SAML10D14A Serial Communication Interface 1 (SERCOM1): SERCOM1_2 */
  SERCOM1_3_IRQn           = 29, /**< 29 SAML10D14A Serial Communication Interface 1 (SERCOM1): SERCOM1_3, SERCOM1_4, SERCOM1_5, SERCOM1_6 */
  TC0_IRQn                 = 34, /**< 34 SAML10D14A Basic Timer Counter 0 (TC0) */
  TC1_IRQn                 = 35, /**< 35 SAML10D14A Basic Timer Counter 1 (TC1) */
  TC2_IRQn                 = 36, /**< 36 SAML10D14A Basic Timer Counter 2 (TC2) */
  ADC_0_IRQn               = 37, /**< 37 SAML10D14A Analog Digital Converter (ADC): ADC_OVERRUN, ADC_WINMON */
  ADC_1_IRQn               = 38, /**< 38 SAML10D14A Analog Digital Converter (ADC): ADC_RESRDY */
  AC_IRQn                  = 39, /**< 39 SAML10D14A Analog Comparators (AC) */
  DAC_0_IRQn               = 40, /**< 40 SAML10D14A Digital Analog Converter (DAC): DAC_UNDERRUN_A */
  DAC_1_IRQn               = 41, /**< 41 SAML10D14A Digital Analog Converter (DAC): DAC_EMPTY */
  PTC_IRQn                 = 42, /**< 42 SAML10D14A Peripheral Touch Controller (PTC) */
  TRNG_IRQn                = 43, /**< 43 SAML10D14A True Random Generator (TRNG) */
  TRAM_IRQn                = 44, /**< 44 SAML10D14A TrustRAM (TRAM) */

  PERIPH_COUNT_IRQn        = 45  /**< Number of peripheral IDs */
} IRQn_Type;

typedef struct _DeviceVectors
{
  /* Stack pointer */
  void* pvStack;

  /* Cortex-M handlers */
  void* pfnReset_Handler;
  void* pfnNMI_Handler;
  void* pfnHardFault_Handler;
  void* pvReservedM12;
  void* pvReservedM11;
  void* pvReservedM10;
  void* pfnSecureFault_Handler;
  void* pvReservedM8;
  void* pvReservedM7;
  void* pvReservedM6;
  void* pfnSVC_Handler;
  void* pvReservedM4;
  void* pvReservedM3;
  void* pfnPendSV_Handler;
  void* pfnSysTick_Handler;

  /* Peripheral handlers */
  void* pfnSYSTEM_Handler;                /*  0 MCLK, OSCCTRL, OSC32KCTRL, PM, SUPC */
  void* pfnWDT_Handler;                   /*  1 Watchdog Timer */
  void* pfnRTC_Handler;                   /*  2 Real-Time Counter */
  void* pfnEIC_0_Handler;                 /*  3 External Interrupt Controller IRQ 0 */
  void* pfnEIC_1_Handler;                 /*  4 External Interrupt Controller IRQ 1 */
  void* pfnEIC_2_Handler;                 /*  5 External Interrupt Controller IRQ 2 */
  void* pfnEIC_3_Handler;                 /*  6 External Interrupt Controller IRQ 3 */
  void* pfnEIC_4_Handler;                 /*  7 External Interrupt Controller IRQ 4 */
  void* pfnFREQM_Handler;                 /*  8 Frequency Meter */
  void* pfnNVMCTRL_Handler;               /*  9 Non-Volatile Memory Controller */
  void* pfnPORT_Handler;                  /* 10 Port Module */
  void* pfnDMAC_0_Handler;                /* 11 Direct Memory Access Controller IRQ 0 */
  void* pfnDMAC_1_Handler;                /* 12 Direct Memory Access Controller IRQ 1 */
  void* pfnDMAC_2_Handler;                /* 13 Direct Memory Access Controller IRQ 2 */
  void* pfnDMAC_3_Handler;                /* 14 Direct Memory Access Controller IRQ 3 */
  void* pfnDMAC_4_Handler;                /* 15 Direct Memory Access Controller IRQ 4 */
  void* pfnEVSYS_0_Handler;               /* 16 Event System Interface IRQ 0 */
  void* pfnEVSYS_1_Handler;               /* 17 Event System Interface IRQ 1 */
  void* pfnEVSYS_2_Handler;               /* 18 Event System Interface IRQ 2 */
  void* pfnEVSYS_3_Handler;               /* 19 Event System Interface IRQ 3 */
  void* pfnEVSYS_4_Handler;               /* 20 Event System Interface IRQ 4 */
  void* pfnPAC_Handler;                   /* 21 Peripheral Access Controller */
  void* pfnSERCOM0_0_Handler;             /* 22 Serial Communication Interface 0 IRQ 0 */
  void* pfnSERCOM0_1_Handler;             /* 23 Serial Communication Interface 0 IRQ 1 */
  void* pfnSERCOM0_2_Handler;             /* 24 Serial Communication Interface 0 IRQ 2 */
  void* pfnSERCOM0_3_Handler;             /* 25 Serial Communication Interface 0 IRQ 3 */
  void* pfnSERCOM1_0_Handler;             /* 26 Serial Communication Interface 1 IRQ 0 */
  void* pfnSERCOM1_1_Handler;             /* 27 Serial Communication Interface 1 IRQ 1 */
  void* pfnSERCOM1_2_Handler;             /* 28 Serial Communication Interface 1 IRQ 2 */
  void* pfnSERCOM1_3_Handler;             /* 29 Serial Communication Interface 1 IRQ 3 */
  void* pvReserved30;
  void* pvReserved31;
  void* pvReserved32;
  void* pvReserved33;
  void* pfnTC0_Handler;                   /* 34 Basic Timer Counter 0 */
  void* pfnTC1_Handler;                   /* 35 Basic Timer Counter 1 */
  void* pfnTC2_Handler;                   /* 36 Basic Timer Counter 2 */
  void* pfnADC_0_Handler;                 /* 37 Analog Digital Converter IRQ 0 */
  void* pfnADC_1_Handler;                 /* 38 Analog Digital Converter IRQ 1 */
  void* pfnAC_Handler;                    /* 39 Analog Comparators */
  void* pfnDAC_0_Handler;                 /* 40 Digital Analog Converter IRQ 0 */
  void* pfnDAC_1_Handler;                 /* 41 Digital Analog Converter IRQ 1 */
  void* pfnPTC_Handler;                   /* 42 Peripheral Touch Controller */
  void* pfnTRNG_Handler;                  /* 43 True Random Generator */
  void* pfnTRAM_Handler;                  /* 44 TrustRAM */
} DeviceVectors;

/* Cortex-M23 processor handlers */
void Reset_Handler               ( void );
void NMI_Handler                 ( void );
void HardFault_Handler           ( void );
void SecureFault_Handler         ( void );
void SVC_Handler                 ( void );
void PendSV_Handler              ( void );
void SysTick_Handler             ( void );

/* Peripherals handlers */
void SYSTEM_Handler              ( void );
void WDT_Handler                 ( void );
void RTC_Handler                 ( void );
void EIC_0_Handler               ( void );
void EIC_1_Handler               ( void );
void EIC_2_Handler               ( void );
void EIC_3_Handler               ( void );
void EIC_4_Handler               ( void );
void FREQM_Handler               ( void );
void NVMCTRL_Handler             ( void );
void PORT_Handler                ( void );
void DMAC_0_Handler              ( void );
void DMAC_1_Handler              ( void );
void DMAC_2_Handler              ( void );
void DMAC_3_Handler              ( void );
void DMAC_4_Handler              ( void );
void EVSYS_0_Handler             ( void );
void EVSYS_1_Handler             ( void );
void EVSYS_2_Handler             ( void );
void EVSYS_3_Handler             ( void );
void EVSYS_4_Handler             ( void );
void PAC_Handler                 ( void );
void SERCOM0_0_Handler           ( void );
void SERCOM0_1_Handler           ( void );
void SERCOM0_2_Handler           ( void );
void SERCOM0_3_Handler           ( void );
void SERCOM1_0_Handler           ( void );
void SERCOM1_1_Handler           ( void );
void SERCOM1_2_Handler           ( void );
void SERCOM1_3_Handler           ( void );
void TC0_Handler                 ( void );
void TC1_Handler                 ( void );
void TC2_Handler                 ( void );
void ADC_0_Handler               ( void );
void ADC_1_Handler               ( void );
void AC_Handler                  ( void );
void DAC_0_Handler               ( void );
void DAC_1_Handler               ( void );
void PTC_Handler                 ( void );
void TRNG_Handler                ( void );
void TRAM_Handler                ( void );

/*
 * \brief Configuration of the Cortex-M23 Processor and Core Peripherals
 */

#define LITTLE_ENDIAN          1        
#define __ARMv8MBL_REV         0         /*!< Core revision r0p0 */
#define __ETM_PRESENT          0         /*!< ETM present or not */
#define __FPU_PRESENT          0         /*!< FPU present or not */
#define __MPU_PRESENT          1         /*!< MPU present or not */
#define __MTB_PRESENT          0         /*!< MTB present or not */
#define __NVIC_PRIO_BITS       2         /*!< Number of bits used for Priority Levels */
#define __SAU_PRESENT          0         /*!< SAU present or not */
#define __VTOR_PRESENT         1         /*!< VTOR present or not */
#define __Vendor_SysTickConfig 0         /*!< Set to 1 if different SysTick Config is used */

/**
 * \brief CMSIS includes
 */

#include <core_armv8mbl.h>
#if !defined DONT_USE_CMSIS_INIT
#include "system_saml10.h"
#endif /* DONT_USE_CMSIS_INIT */

/*@}*/

/* ************************************************************************** */
/**  SOFTWARE PERIPHERAL API DEFINITION FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_api Peripheral Software API */
/*@{*/

#include "component/ac.h"
#include "component/adc.h"
#include "component/ccl.h"
#include "component/dac.h"
#include "component/dmac.h"
#include "component/dsu.h"
#include "component/eic.h"
#include "component/evsys.h"
#include "component/freqm.h"
#include "component/gclk.h"
#include "component/mclk.h"
#include "component/nvmctrl.h"
#include "component/opamp.h"
#include "component/oscctrl.h"
#include "component/osc32kctrl.h"
#include "component/pac.h"
#include "component/pm.h"
#include "component/port.h"
#include "component/rstc.h"
#include "component/rtc.h"
#include "component/sercom.h"
#include "component/supc.h"
#include "component/tc.h"
#include "component/tram.h"
#include "component/trng.h"
#include "component/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  REGISTERS ACCESS DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_reg Registers Access Definitions */
/*@{*/

#include "instance/ac.h"
#include "instance/adc.h"
#include "instance/ccl.h"
#include "instance/dac.h"
#include "instance/dmac.h"
#include "instance/dsu.h"
#include "instance/eic.h"
#include "instance/evsys.h"
#include "instance/freqm.h"
#include "instance/gclk.h"
#include "instance/mclk.h"
#include "instance/nvmctrl.h"
#include "instance/opamp.h"
#include "instance/oscctrl.h"
#include "instance/osc32kctrl.h"
#include "instance/pac.h"
#include "instance/pm.h"
#include "instance/port.h"
#include "instance/rstc.h"
#include "instance/rtc.h"
#include "instance/sercom0.h"
#include "instance/sercom1.h"
#include "instance/supc.h"
#include "instance/tc0.h"
#include "instance/tc1.h"
#include "instance/tc2.h"
#include "instance/tram.h"
#include "instance/trng.h"
#include "instance/wdt.h"
/*@}*/

/* ************************************************************************** */
/**  PERIPHERAL ID DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_id Peripheral Ids Definitions */
/*@{*/

// Peripheral instances on HPB0 bridge
#define ID_PAC            0 /**< \brief Peripheral Access Controller (PAC) */
#define ID_PM             1 /**< \brief Power Manager (PM) */
#define ID_MCLK           2 /**< \brief Main Clock (MCLK) */
#define ID_RSTC           3 /**< \brief Reset Controller (RSTC) */
#define ID_OSCCTRL        4 /**< \brief Oscillators Control (OSCCTRL) */
#define ID_OSC32KCTRL     5 /**< \brief 32k Oscillators Control (OSC32KCTRL) */
#define ID_SUPC           6 /**< \brief Supply Controller (SUPC) */
#define ID_GCLK           7 /**< \brief Generic Clock Generator (GCLK) */
#define ID_WDT            8 /**< \brief Watchdog Timer (WDT) */
#define ID_RTC            9 /**< \brief Real-Time Counter (RTC) */
#define ID_EIC           10 /**< \brief External Interrupt Controller (EIC) */
#define ID_FREQM         11 /**< \brief Frequency Meter (FREQM) */
#define ID_PORT          12 /**< \brief Port Module (PORT) */
#define ID_AC            13 /**< \brief Analog Comparators (AC) */

// Peripheral instances on HPB1 bridge
#define ID_IDAU          32 /**< \brief Implementation Defined Attribution Unit (IDAU) */
#define ID_DSU           33 /**< \brief Device Service Unit (DSU) */
#define ID_NVMCTRL       34 /**< \brief Non-Volatile Memory Controller (NVMCTRL) */
#define ID_DMAC          35 /**< \brief Direct Memory Access Controller (DMAC) */

// Peripheral instances on HPB2 bridge
#define ID_EVSYS         64 /**< \brief Event System Interface (EVSYS) */
#define ID_SERCOM0       65 /**< \brief Serial Communication Interface 0 (SERCOM0) */
#define ID_SERCOM1       66 /**< \brief Serial Communication Interface 1 (SERCOM1) */
#define ID_TC0           68 /**< \brief Basic Timer Counter 0 (TC0) */
#define ID_TC1           69 /**< \brief Basic Timer Counter 1 (TC1) */
#define ID_TC2           70 /**< \brief Basic Timer Counter 2 (TC2) */
#define ID_ADC           71 /**< \brief Analog Digital Converter (ADC) */
#define ID_DAC           72 /**< \brief Digital Analog Converter (DAC) */
#define ID_PTC           73 /**< \brief Peripheral Touch Controller (PTC) */
#define ID_TRNG          74 /**< \brief True Random Generator (TRNG) */
#define ID_CCL           75 /**< \brief Configurable Custom Logic (CCL) */
#define ID_OPAMP         76 /**< \brief Operational Amplifier (OPAMP) */
#define ID_TRAM          77 /**< \brief TrustRAM (TRAM) */

#define ID_PERIPH_COUNT  78 /**< \brief Max number of peripheral IDs */
/*@}*/

/* ************************************************************************** */
/**  BASE ADDRESS DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_base Peripheral Base Address Definitions */
/*@{*/

#if defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)
#define AC                            (0x40003400) /**< \brief (AC) APB Base Address */
#define ADC                           (0x42001C00) /**< \brief (ADC) APB Base Address */
#define CCL                           (0x42002C00) /**< \brief (CCL) APB Base Address */
#define DAC                           (0x42002000) /**< \brief (DAC) APB Base Address */
#define DMAC                          (0x41006000) /**< \brief (DMAC) APB Base Address */
#define DSU                           (0x41002000) /**< \brief (DSU) APB Base Address */
#define EIC                           (0x40002800) /**< \brief (EIC) APB Base Address */
#define EVSYS                         (0x42000000) /**< \brief (EVSYS) APB Base Address */
#define FREQM                         (0x40002C00) /**< \brief (FREQM) APB Base Address */
#define GCLK                          (0x40001C00) /**< \brief (GCLK) APB Base Address */
#define IDAU                          (0x41000000) /**< \brief (IDAU) APB Base Address */
#define MCLK                          (0x40000800) /**< \brief (MCLK) APB Base Address */
#define NVMCTRL                       (0x41004000) /**< \brief (NVMCTRL) APB Base Address */
#define NVMCTRL_BOCOR                 (0x0080C000) /**< \brief (NVMCTRL) BOCOR Base Address */
#define NVMCTRL_DATAFLASH             (0x00400000) /**< \brief (NVMCTRL) DATAFLASH Base Address */
#define NVMCTRL_SW_CALIB              (0x00806020) /**< \brief (NVMCTRL) SW_CALIB Base Address */
#define NVMCTRL_TEMP_LOG              (0x00806038) /**< \brief (NVMCTRL) TEMP_LOG Base Address */
#define NVMCTRL_USER                  (0x00804000) /**< \brief (NVMCTRL) USER Base Address */
#define OPAMP                         (0x42003000) /**< \brief (OPAMP) APB Base Address */
#define OSCCTRL                       (0x40001000) /**< \brief (OSCCTRL) APB Base Address */
#define OSC32KCTRL                    (0x40001400) /**< \brief (OSC32KCTRL) APB Base Address */
#define PAC                           (0x40000000) /**< \brief (PAC) APB Base Address */
#define PM                            (0x40000400) /**< \brief (PM) APB Base Address */
#define PORT                          (0x40003000) /**< \brief (PORT) APB Base Address */
#define PORT_IOBUS                    (0x60000000) /**< \brief (PORT) IOBUS Base Address */
#define PTC                           (0x42002400) /**< \brief (PTC) APB Base Address */
#define RSTC                          (0x40000C00) /**< \brief (RSTC) APB Base Address */
#define RTC                           (0x40002400) /**< \brief (RTC) APB Base Address */
#define SERCOM0                       (0x42000400) /**< \brief (SERCOM0) APB Base Address */
#define SERCOM1                       (0x42000800) /**< \brief (SERCOM1) APB Base Address */
#define SUPC                          (0x40001800) /**< \brief (SUPC) APB Base Address */
#define TC0                           (0x42001000) /**< \brief (TC0) APB Base Address */
#define TC1                           (0x42001400) /**< \brief (TC1) APB Base Address */
#define TC2                           (0x42001800) /**< \brief (TC2) APB Base Address */
#define TRAM                          (0x42003400) /**< \brief (TRAM) APB Base Address */
#define TRNG                          (0x42002800) /**< \brief (TRNG) APB Base Address */
#define WDT                           (0x40002000) /**< \brief (WDT) APB Base Address */
#else
#define AC                ((Ac       *)0x40003400UL) /**< \brief (AC) APB Base Address */
#define AC_INST_NUM       1                          /**< \brief (AC) Number of instances */
#define AC_INSTS          { AC }                     /**< \brief (AC) Instances List */

#define ADC               ((Adc      *)0x42001C00UL) /**< \brief (ADC) APB Base Address */
#define ADC_INST_NUM      1                          /**< \brief (ADC) Number of instances */
#define ADC_INSTS         { ADC }                    /**< \brief (ADC) Instances List */

#define CCL               ((Ccl      *)0x42002C00UL) /**< \brief (CCL) APB Base Address */
#define CCL_INST_NUM      1                          /**< \brief (CCL) Number of instances */
#define CCL_INSTS         { CCL }                    /**< \brief (CCL) Instances List */

#define DAC               ((Dac      *)0x42002000UL) /**< \brief (DAC) APB Base Address */
#define DAC_INST_NUM      1                          /**< \brief (DAC) Number of instances */
#define DAC_INSTS         { DAC }                    /**< \brief (DAC) Instances List */

#define DMAC              ((Dmac     *)0x41006000UL) /**< \brief (DMAC) APB Base Address */
#define DMAC_INST_NUM     1                          /**< \brief (DMAC) Number of instances */
#define DMAC_INSTS        { DMAC }                   /**< \brief (DMAC) Instances List */

#define DSU               ((Dsu      *)0x41002000UL) /**< \brief (DSU) APB Base Address */
#define DSU_INST_NUM      1                          /**< \brief (DSU) Number of instances */
#define DSU_INSTS         { DSU }                    /**< \brief (DSU) Instances List */

#define EIC               ((Eic      *)0x40002800UL) /**< \brief (EIC) APB Base Address */
#define EIC_INST_NUM      1                          /**< \brief (EIC) Number of instances */
#define EIC_INSTS         { EIC }                    /**< \brief (EIC) Instances List */

#define EVSYS             ((Evsys    *)0x42000000UL) /**< \brief (EVSYS) APB Base Address */
#define EVSYS_INST_NUM    1                          /**< \brief (EVSYS) Number of instances */
#define EVSYS_INSTS       { EVSYS }                  /**< \brief (EVSYS) Instances List */

#define FREQM             ((Freqm    *)0x40002C00UL) /**< \brief (FREQM) APB Base Address */
#define FREQM_INST_NUM    1                          /**< \brief (FREQM) Number of instances */
#define FREQM_INSTS       { FREQM }                  /**< \brief (FREQM) Instances List */

#define GCLK              ((Gclk     *)0x40001C00UL) /**< \brief (GCLK) APB Base Address */
#define GCLK_INST_NUM     1                          /**< \brief (GCLK) Number of instances */
#define GCLK_INSTS        { GCLK }                   /**< \brief (GCLK) Instances List */

#define IDAU              ((void     *)0x41000000UL) /**< \brief (IDAU) APB Base Address */
#define IDAU_INST_NUM     1                          /**< \brief (IDAU) Number of instances */
#define IDAU_INSTS        { IDAU }                   /**< \brief (IDAU) Instances List */

#define MCLK              ((Mclk     *)0x40000800UL) /**< \brief (MCLK) APB Base Address */
#define MCLK_INST_NUM     1                          /**< \brief (MCLK) Number of instances */
#define MCLK_INSTS        { MCLK }                   /**< \brief (MCLK) Instances List */

#define NVMCTRL           ((Nvmctrl  *)0x41004000UL) /**< \brief (NVMCTRL) APB Base Address */
#define NVMCTRL_BOCOR                 (0x0080C000UL) /**< \brief (NVMCTRL) BOCOR Base Address */
#define NVMCTRL_DATAFLASH             (0x00400000UL) /**< \brief (NVMCTRL) DATAFLASH Base Address */
#define NVMCTRL_SW_CALIB              (0x00806020UL) /**< \brief (NVMCTRL) SW_CALIB Base Address */
#define NVMCTRL_TEMP_LOG              (0x00806038UL) /**< \brief (NVMCTRL) TEMP_LOG Base Address */
#define NVMCTRL_USER                  (0x00804000UL) /**< \brief (NVMCTRL) USER Base Address */
#define NVMCTRL_INST_NUM  1                          /**< \brief (NVMCTRL) Number of instances */
#define NVMCTRL_INSTS     { NVMCTRL }                /**< \brief (NVMCTRL) Instances List */

#define OPAMP             ((Opamp    *)0x42003000UL) /**< \brief (OPAMP) APB Base Address */
#define OPAMP_INST_NUM    1                          /**< \brief (OPAMP) Number of instances */
#define OPAMP_INSTS       { OPAMP }                  /**< \brief (OPAMP) Instances List */

#define OSCCTRL           ((Oscctrl  *)0x40001000UL) /**< \brief (OSCCTRL) APB Base Address */
#define OSCCTRL_INST_NUM  1                          /**< \brief (OSCCTRL) Number of instances */
#define OSCCTRL_INSTS     { OSCCTRL }                /**< \brief (OSCCTRL) Instances List */

#define OSC32KCTRL        ((Osc32kctrl *)0x40001400UL) /**< \brief (OSC32KCTRL) APB Base Address */
#define OSC32KCTRL_INST_NUM 1                          /**< \brief (OSC32KCTRL) Number of instances */
#define OSC32KCTRL_INSTS  { OSC32KCTRL }             /**< \brief (OSC32KCTRL) Instances List */

#define PAC               ((Pac      *)0x40000000UL) /**< \brief (PAC) APB Base Address */
#define PAC_INST_NUM      1                          /**< \brief (PAC) Number of instances */
#define PAC_INSTS         { PAC }                    /**< \brief (PAC) Instances List */

#define PM                ((Pm       *)0x40000400UL) /**< \brief (PM) APB Base Address */
#define PM_INST_NUM       1                          /**< \brief (PM) Number of instances */
#define PM_INSTS          { PM }                     /**< \brief (PM) Instances List */

#define PORT              ((Port     *)0x40003000UL) /**< \brief (PORT) APB Base Address */
#define PORT_IOBUS        ((Port     *)0x60000000UL) /**< \brief (PORT) IOBUS Base Address */
#define PORT_INST_NUM     1                          /**< \brief (PORT) Number of instances */
#define PORT_INSTS        { PORT }                   /**< \brief (PORT) Instances List */
#define PORT_IOBUS_INST_NUM 1                          /**< \brief (PORT) Number of instances */
#define PORT_IOBUS_INSTS  { PORT_IOBUS }             /**< \brief (PORT) Instances List */

#define PTC               ((void     *)0x42002400UL) /**< \brief (PTC) APB Base Address */
#define PTC_GCLK_ID       19
#define PTC_INST_NUM      1                          /**< \brief (PTC) Number of instances */
#define PTC_INSTS         { PTC }                    /**< \brief (PTC) Instances List */

#define RSTC              ((Rstc     *)0x40000C00UL) /**< \brief (RSTC) APB Base Address */
#define RSTC_INST_NUM     1                          /**< \brief (RSTC) Number of instances */
#define RSTC_INSTS        { RSTC }                   /**< \brief (RSTC) Instances List */

#define RTC               ((Rtc      *)0x40002400UL) /**< \brief (RTC) APB Base Address */
#define RTC_INST_NUM      1                          /**< \brief (RTC) Number of instances */
#define RTC_INSTS         { RTC }                    /**< \brief (RTC) Instances List */

#define SERCOM0           ((Sercom   *)0x42000400UL) /**< \brief (SERCOM0) APB Base Address */
#define SERCOM1           ((Sercom   *)0x42000800UL) /**< \brief (SERCOM1) APB Base Address */
#define SERCOM_INST_NUM   2                          /**< \brief (SERCOM) Number of instances */
#define SERCOM_INSTS      { SERCOM0, SERCOM1 }       /**< \brief (SERCOM) Instances List */

#define SUPC              ((Supc     *)0x40001800UL) /**< \brief (SUPC) APB Base Address */
#define SUPC_INST_NUM     1                          /**< \brief (SUPC) Number of instances */
#define SUPC_INSTS        { SUPC }                   /**< \brief (SUPC) Instances List */

#define TC0               ((Tc       *)0x42001000UL) /**< \brief (TC0) APB Base Address */
#define TC1               ((Tc       *)0x42001400UL) /**< \brief (TC1) APB Base Address */
#define TC2               ((Tc       *)0x42001800UL) /**< \brief (TC2) APB Base Address */
#define TC_INST_NUM       3                          /**< \brief (TC) Number of instances */
#define TC_INSTS          { TC0, TC1, TC2 }          /**< \brief (TC) Instances List */

#define TRAM              ((Tram     *)0x42003400UL) /**< \brief (TRAM) APB Base Address */
#define TRAM_INST_NUM     1                          /**< \brief (TRAM) Number of instances */
#define TRAM_INSTS        { TRAM }                   /**< \brief (TRAM) Instances List */

#define TRNG              ((Trng     *)0x42002800UL) /**< \brief (TRNG) APB Base Address */
#define TRNG_INST_NUM     1                          /**< \brief (TRNG) Number of instances */
#define TRNG_INSTS        { TRNG }                   /**< \brief (TRNG) Instances List */

#define WDT               ((Wdt      *)0x40002000UL) /**< \brief (WDT) APB Base Address */
#define WDT_INST_NUM      1                          /**< \brief (WDT) Number of instances */
#define WDT_INSTS         { WDT }                    /**< \brief (WDT) Instances List */

#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */
/*@}*/

/* ************************************************************************** */
/**  PORT DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */
/** \defgroup SAML10D14A_port PORT Definitions */
/*@{*/

#include "pio/saml10d14a.h"
/*@}*/

/* ************************************************************************** */
/**  MEMORY MAPPING DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */

#define FLASH_SIZE            _UL_(0x00004000) /* 16 kB */
#define FLASH_PAGE_SIZE       64
#define FLASH_NB_OF_PAGES     256
#define FLASH_USER_PAGE_SIZE  64
#define HSRAM_SIZE            _UL_(0x00001000) /* 4 kB */

#define FLASH_ADDR            _UL_(0x00000000) /**< FLASH base address */
#define BROM_ADDR             _UL_(0x02000000) /**< BROM base address */
#define HSRAM_ADDR            _UL_(0x20000000) /**< HSRAM base address */
#define HPB0_ADDR             _UL_(0x40000000) /**< HPB0 base address */
#define HPB1_ADDR             _UL_(0x41000000) /**< HPB1 base address */
#define HPB2_ADDR             _UL_(0x42000000) /**< HPB2 base address */
#define PPB_ADDR              _UL_(0xE0000000) /**< PPB base address */

#define DSU_DID_RESETVALUE    _UL_(0x20840005)
#define CPU___SEC_ENABLED     0
#define DEFAULT_STACK_SIZE    _UL_(0x00000400) /* 1 kB */
#define PORT_GROUPS           1

/* ************************************************************************** */
/**  ELECTRICAL DEFINITIONS FOR SAML10D14A */
/* ************************************************************************** */


#ifdef __cplusplus
}
#endif

/*@}*/

#endif /* SAML10D14A_H */
