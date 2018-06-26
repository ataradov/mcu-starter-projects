/**
 * \file
 *
 * \brief Component description for MCLK
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

#ifndef _SAML10_MCLK_COMPONENT_
#define _SAML10_MCLK_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR MCLK */
/* ========================================================================== */
/** \addtogroup SAML10_MCLK Main Clock */
/*@{*/

#define MCLK_U2234
#define REV_MCLK                    0x300

/* -------- MCLK_CTRLA : (MCLK Offset: 0x00) (R/W  8) Control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  :2;               /*!< bit:  0.. 1  Reserved                           */
    uint8_t  CKSEL:1;          /*!< bit:      2  Clock Select                       */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_CTRLA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_CTRLA_OFFSET           0x00         /**< \brief (MCLK_CTRLA offset) Control */
#define MCLK_CTRLA_RESETVALUE       _U_(0x00)    /**< \brief (MCLK_CTRLA reset_value) Control */

#define MCLK_CTRLA_CKSEL_Pos        2            /**< \brief (MCLK_CTRLA) Clock Select */
#define MCLK_CTRLA_CKSEL            (_U_(0x1) << MCLK_CTRLA_CKSEL_Pos)
#define MCLK_CTRLA_MASK             _U_(0x04)    /**< \brief (MCLK_CTRLA) MASK Register */

/* -------- MCLK_INTENCLR : (MCLK Offset: 0x01) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENCLR_OFFSET        0x01         /**< \brief (MCLK_INTENCLR offset) Interrupt Enable Clear */
#define MCLK_INTENCLR_RESETVALUE    _U_(0x00)    /**< \brief (MCLK_INTENCLR reset_value) Interrupt Enable Clear */

#define MCLK_INTENCLR_CKRDY_Pos     0            /**< \brief (MCLK_INTENCLR) Clock Ready Interrupt Enable */
#define MCLK_INTENCLR_CKRDY         (_U_(0x1) << MCLK_INTENCLR_CKRDY_Pos)
#define MCLK_INTENCLR_MASK          _U_(0x01)    /**< \brief (MCLK_INTENCLR) MASK Register */

/* -------- MCLK_INTENSET : (MCLK Offset: 0x02) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready Interrupt Enable       */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTENSET_OFFSET        0x02         /**< \brief (MCLK_INTENSET offset) Interrupt Enable Set */
#define MCLK_INTENSET_RESETVALUE    _U_(0x00)    /**< \brief (MCLK_INTENSET reset_value) Interrupt Enable Set */

#define MCLK_INTENSET_CKRDY_Pos     0            /**< \brief (MCLK_INTENSET) Clock Ready Interrupt Enable */
#define MCLK_INTENSET_CKRDY         (_U_(0x1) << MCLK_INTENSET_CKRDY_Pos)
#define MCLK_INTENSET_MASK          _U_(0x01)    /**< \brief (MCLK_INTENSET) MASK Register */

/* -------- MCLK_INTFLAG : (MCLK Offset: 0x03) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  CKRDY:1;          /*!< bit:      0  Clock Ready                        */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_INTFLAG_OFFSET         0x03         /**< \brief (MCLK_INTFLAG offset) Interrupt Flag Status and Clear */
#define MCLK_INTFLAG_RESETVALUE     _U_(0x01)    /**< \brief (MCLK_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define MCLK_INTFLAG_CKRDY_Pos      0            /**< \brief (MCLK_INTFLAG) Clock Ready */
#define MCLK_INTFLAG_CKRDY          (_U_(0x1) << MCLK_INTFLAG_CKRDY_Pos)
#define MCLK_INTFLAG_MASK           _U_(0x01)    /**< \brief (MCLK_INTFLAG) MASK Register */

/* -------- MCLK_CPUDIV : (MCLK Offset: 0x04) (R/W  8) CPU Clock Division -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  CPUDIV:8;         /*!< bit:  0.. 7  CPU Clock Division Factor          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} MCLK_CPUDIV_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_CPUDIV_OFFSET          0x04         /**< \brief (MCLK_CPUDIV offset) CPU Clock Division */
#define MCLK_CPUDIV_RESETVALUE      _U_(0x01)    /**< \brief (MCLK_CPUDIV reset_value) CPU Clock Division */

#define MCLK_CPUDIV_CPUDIV_Pos      0            /**< \brief (MCLK_CPUDIV) CPU Clock Division Factor */
#define MCLK_CPUDIV_CPUDIV_Msk      (_U_(0xFF) << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV(value)   (MCLK_CPUDIV_CPUDIV_Msk & ((value) << MCLK_CPUDIV_CPUDIV_Pos))
#define   MCLK_CPUDIV_CPUDIV_DIV1_Val     _U_(0x1)   /**< \brief (MCLK_CPUDIV) Divide by 1 */
#define   MCLK_CPUDIV_CPUDIV_DIV2_Val     _U_(0x2)   /**< \brief (MCLK_CPUDIV) Divide by 2 */
#define   MCLK_CPUDIV_CPUDIV_DIV4_Val     _U_(0x4)   /**< \brief (MCLK_CPUDIV) Divide by 4 */
#define   MCLK_CPUDIV_CPUDIV_DIV8_Val     _U_(0x8)   /**< \brief (MCLK_CPUDIV) Divide by 8 */
#define   MCLK_CPUDIV_CPUDIV_DIV16_Val    _U_(0x10)   /**< \brief (MCLK_CPUDIV) Divide by 16 */
#define   MCLK_CPUDIV_CPUDIV_DIV32_Val    _U_(0x20)   /**< \brief (MCLK_CPUDIV) Divide by 32 */
#define   MCLK_CPUDIV_CPUDIV_DIV64_Val    _U_(0x40)   /**< \brief (MCLK_CPUDIV) Divide by 64 */
#define   MCLK_CPUDIV_CPUDIV_DIV128_Val   _U_(0x80)   /**< \brief (MCLK_CPUDIV) Divide by 128 */
#define MCLK_CPUDIV_CPUDIV_DIV1     (MCLK_CPUDIV_CPUDIV_DIV1_Val   << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV2     (MCLK_CPUDIV_CPUDIV_DIV2_Val   << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV4     (MCLK_CPUDIV_CPUDIV_DIV4_Val   << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV8     (MCLK_CPUDIV_CPUDIV_DIV8_Val   << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV16    (MCLK_CPUDIV_CPUDIV_DIV16_Val  << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV32    (MCLK_CPUDIV_CPUDIV_DIV32_Val  << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV64    (MCLK_CPUDIV_CPUDIV_DIV64_Val  << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_CPUDIV_DIV128   (MCLK_CPUDIV_CPUDIV_DIV128_Val << MCLK_CPUDIV_CPUDIV_Pos)
#define MCLK_CPUDIV_MASK            _U_(0xFF)    /**< \brief (MCLK_CPUDIV) MASK Register */

/* -------- MCLK_AHBMASK : (MCLK Offset: 0x10) (R/W 32) AHB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t HPB0_:1;          /*!< bit:      0  HPB0 AHB Clock Mask                */
    uint32_t HPB1_:1;          /*!< bit:      1  HPB1 AHB Clock Mask                */
    uint32_t HPB2_:1;          /*!< bit:      2  HPB2 AHB Clock Mask                */
    uint32_t DMAC_:1;          /*!< bit:      3  DMAC AHB Clock Mask                */
    uint32_t DSU_:1;           /*!< bit:      4  DSU AHB Clock Mask                 */
    uint32_t :1;               /*!< bit:      5  Reserved                           */
    uint32_t PAC_:1;           /*!< bit:      6  PAC AHB Clock Mask                 */
    uint32_t NVMCTRL_:1;       /*!< bit:      7  NVMCTRL AHB Clock Mask             */
    uint32_t HSRAM_:1;         /*!< bit:      8  HSRAM AHB Clock Mask               */
    uint32_t NVMCTRL_PICACHU_:1; /*!< bit:      9  NVMCTRL_PICACHU AHB Clock Mask     */
    uint32_t BROM_:1;          /*!< bit:     10  BROM AHB Clock Mask                */
    uint32_t :1;               /*!< bit:     11  Reserved                           */
    uint32_t TRAM_:1;          /*!< bit:     12  TRAM AHB Clock Mask                */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_AHBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_AHBMASK_OFFSET         0x10         /**< \brief (MCLK_AHBMASK offset) AHB Mask */
#define MCLK_AHBMASK_RESETVALUE     _U_(0x00001FFF) /**< \brief (MCLK_AHBMASK reset_value) AHB Mask */

#define MCLK_AHBMASK_HPB0_Pos       0            /**< \brief (MCLK_AHBMASK) HPB0 AHB Clock Mask */
#define MCLK_AHBMASK_HPB0           (_U_(0x1) << MCLK_AHBMASK_HPB0_Pos)
#define MCLK_AHBMASK_HPB1_Pos       1            /**< \brief (MCLK_AHBMASK) HPB1 AHB Clock Mask */
#define MCLK_AHBMASK_HPB1           (_U_(0x1) << MCLK_AHBMASK_HPB1_Pos)
#define MCLK_AHBMASK_HPB2_Pos       2            /**< \brief (MCLK_AHBMASK) HPB2 AHB Clock Mask */
#define MCLK_AHBMASK_HPB2           (_U_(0x1) << MCLK_AHBMASK_HPB2_Pos)
#define MCLK_AHBMASK_DMAC_Pos       3            /**< \brief (MCLK_AHBMASK) DMAC AHB Clock Mask */
#define MCLK_AHBMASK_DMAC           (_U_(0x1) << MCLK_AHBMASK_DMAC_Pos)
#define MCLK_AHBMASK_DSU_Pos        4            /**< \brief (MCLK_AHBMASK) DSU AHB Clock Mask */
#define MCLK_AHBMASK_DSU            (_U_(0x1) << MCLK_AHBMASK_DSU_Pos)
#define MCLK_AHBMASK_PAC_Pos        6            /**< \brief (MCLK_AHBMASK) PAC AHB Clock Mask */
#define MCLK_AHBMASK_PAC            (_U_(0x1) << MCLK_AHBMASK_PAC_Pos)
#define MCLK_AHBMASK_NVMCTRL_Pos    7            /**< \brief (MCLK_AHBMASK) NVMCTRL AHB Clock Mask */
#define MCLK_AHBMASK_NVMCTRL        (_U_(0x1) << MCLK_AHBMASK_NVMCTRL_Pos)
#define MCLK_AHBMASK_HSRAM_Pos      8            /**< \brief (MCLK_AHBMASK) HSRAM AHB Clock Mask */
#define MCLK_AHBMASK_HSRAM          (_U_(0x1) << MCLK_AHBMASK_HSRAM_Pos)
#define MCLK_AHBMASK_NVMCTRL_PICACHU_Pos 9            /**< \brief (MCLK_AHBMASK) NVMCTRL_PICACHU AHB Clock Mask */
#define MCLK_AHBMASK_NVMCTRL_PICACHU (_U_(0x1) << MCLK_AHBMASK_NVMCTRL_PICACHU_Pos)
#define MCLK_AHBMASK_BROM_Pos       10           /**< \brief (MCLK_AHBMASK) BROM AHB Clock Mask */
#define MCLK_AHBMASK_BROM           (_U_(0x1) << MCLK_AHBMASK_BROM_Pos)
#define MCLK_AHBMASK_TRAM_Pos       12           /**< \brief (MCLK_AHBMASK) TRAM AHB Clock Mask */
#define MCLK_AHBMASK_TRAM           (_U_(0x1) << MCLK_AHBMASK_TRAM_Pos)
#define MCLK_AHBMASK_MASK           _U_(0x000017DF) /**< \brief (MCLK_AHBMASK) MASK Register */

/* -------- MCLK_APBAMASK : (MCLK Offset: 0x14) (R/W 32) APBA Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PAC_:1;           /*!< bit:      0  PAC APB Clock Enable               */
    uint32_t PM_:1;            /*!< bit:      1  PM APB Clock Enable                */
    uint32_t MCLK_:1;          /*!< bit:      2  MCLK APB Clock Enable              */
    uint32_t RSTC_:1;          /*!< bit:      3  RSTC APB Clock Enable              */
    uint32_t OSCCTRL_:1;       /*!< bit:      4  OSCCTRL APB Clock Enable           */
    uint32_t OSC32KCTRL_:1;    /*!< bit:      5  OSC32KCTRL APB Clock Enable        */
    uint32_t SUPC_:1;          /*!< bit:      6  SUPC APB Clock Enable              */
    uint32_t GCLK_:1;          /*!< bit:      7  GCLK APB Clock Enable              */
    uint32_t WDT_:1;           /*!< bit:      8  WDT APB Clock Enable               */
    uint32_t RTC_:1;           /*!< bit:      9  RTC APB Clock Enable               */
    uint32_t EIC_:1;           /*!< bit:     10  EIC APB Clock Enable               */
    uint32_t FREQM_:1;         /*!< bit:     11  FREQM APB Clock Enable             */
    uint32_t PORT_:1;          /*!< bit:     12  PORT APB Clock Enable              */
    uint32_t AC_:1;            /*!< bit:     13  AC APB Clock Enable                */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBAMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBAMASK_OFFSET        0x14         /**< \brief (MCLK_APBAMASK offset) APBA Mask */
#define MCLK_APBAMASK_RESETVALUE    _U_(0x00007FFF) /**< \brief (MCLK_APBAMASK reset_value) APBA Mask */

#define MCLK_APBAMASK_PAC_Pos       0            /**< \brief (MCLK_APBAMASK) PAC APB Clock Enable */
#define MCLK_APBAMASK_PAC           (_U_(0x1) << MCLK_APBAMASK_PAC_Pos)
#define MCLK_APBAMASK_PM_Pos        1            /**< \brief (MCLK_APBAMASK) PM APB Clock Enable */
#define MCLK_APBAMASK_PM            (_U_(0x1) << MCLK_APBAMASK_PM_Pos)
#define MCLK_APBAMASK_MCLK_Pos      2            /**< \brief (MCLK_APBAMASK) MCLK APB Clock Enable */
#define MCLK_APBAMASK_MCLK          (_U_(0x1) << MCLK_APBAMASK_MCLK_Pos)
#define MCLK_APBAMASK_RSTC_Pos      3            /**< \brief (MCLK_APBAMASK) RSTC APB Clock Enable */
#define MCLK_APBAMASK_RSTC          (_U_(0x1) << MCLK_APBAMASK_RSTC_Pos)
#define MCLK_APBAMASK_OSCCTRL_Pos   4            /**< \brief (MCLK_APBAMASK) OSCCTRL APB Clock Enable */
#define MCLK_APBAMASK_OSCCTRL       (_U_(0x1) << MCLK_APBAMASK_OSCCTRL_Pos)
#define MCLK_APBAMASK_OSC32KCTRL_Pos 5            /**< \brief (MCLK_APBAMASK) OSC32KCTRL APB Clock Enable */
#define MCLK_APBAMASK_OSC32KCTRL    (_U_(0x1) << MCLK_APBAMASK_OSC32KCTRL_Pos)
#define MCLK_APBAMASK_SUPC_Pos      6            /**< \brief (MCLK_APBAMASK) SUPC APB Clock Enable */
#define MCLK_APBAMASK_SUPC          (_U_(0x1) << MCLK_APBAMASK_SUPC_Pos)
#define MCLK_APBAMASK_GCLK_Pos      7            /**< \brief (MCLK_APBAMASK) GCLK APB Clock Enable */
#define MCLK_APBAMASK_GCLK          (_U_(0x1) << MCLK_APBAMASK_GCLK_Pos)
#define MCLK_APBAMASK_WDT_Pos       8            /**< \brief (MCLK_APBAMASK) WDT APB Clock Enable */
#define MCLK_APBAMASK_WDT           (_U_(0x1) << MCLK_APBAMASK_WDT_Pos)
#define MCLK_APBAMASK_RTC_Pos       9            /**< \brief (MCLK_APBAMASK) RTC APB Clock Enable */
#define MCLK_APBAMASK_RTC           (_U_(0x1) << MCLK_APBAMASK_RTC_Pos)
#define MCLK_APBAMASK_EIC_Pos       10           /**< \brief (MCLK_APBAMASK) EIC APB Clock Enable */
#define MCLK_APBAMASK_EIC           (_U_(0x1) << MCLK_APBAMASK_EIC_Pos)
#define MCLK_APBAMASK_FREQM_Pos     11           /**< \brief (MCLK_APBAMASK) FREQM APB Clock Enable */
#define MCLK_APBAMASK_FREQM         (_U_(0x1) << MCLK_APBAMASK_FREQM_Pos)
#define MCLK_APBAMASK_PORT_Pos      12           /**< \brief (MCLK_APBAMASK) PORT APB Clock Enable */
#define MCLK_APBAMASK_PORT          (_U_(0x1) << MCLK_APBAMASK_PORT_Pos)
#define MCLK_APBAMASK_AC_Pos        13           /**< \brief (MCLK_APBAMASK) AC APB Clock Enable */
#define MCLK_APBAMASK_AC            (_U_(0x1) << MCLK_APBAMASK_AC_Pos)
#define MCLK_APBAMASK_MASK          _U_(0x00003FFF) /**< \brief (MCLK_APBAMASK) MASK Register */

/* -------- MCLK_APBBMASK : (MCLK Offset: 0x18) (R/W 32) APBB Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDAU_:1;          /*!< bit:      0  IDAU APB Clock Enable              */
    uint32_t DSU_:1;           /*!< bit:      1  DSU APB Clock Enable               */
    uint32_t NVMCTRL_:1;       /*!< bit:      2  NVMCTRL APB Clock Enable           */
    uint32_t :29;              /*!< bit:  3..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBBMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBBMASK_OFFSET        0x18         /**< \brief (MCLK_APBBMASK offset) APBB Mask */
#define MCLK_APBBMASK_RESETVALUE    _U_(0x00000017) /**< \brief (MCLK_APBBMASK reset_value) APBB Mask */

#define MCLK_APBBMASK_IDAU_Pos      0            /**< \brief (MCLK_APBBMASK) IDAU APB Clock Enable */
#define MCLK_APBBMASK_IDAU          (_U_(0x1) << MCLK_APBBMASK_IDAU_Pos)
#define MCLK_APBBMASK_DSU_Pos       1            /**< \brief (MCLK_APBBMASK) DSU APB Clock Enable */
#define MCLK_APBBMASK_DSU           (_U_(0x1) << MCLK_APBBMASK_DSU_Pos)
#define MCLK_APBBMASK_NVMCTRL_Pos   2            /**< \brief (MCLK_APBBMASK) NVMCTRL APB Clock Enable */
#define MCLK_APBBMASK_NVMCTRL       (_U_(0x1) << MCLK_APBBMASK_NVMCTRL_Pos)
#define MCLK_APBBMASK_MASK          _U_(0x00000007) /**< \brief (MCLK_APBBMASK) MASK Register */

/* -------- MCLK_APBCMASK : (MCLK Offset: 0x1C) (R/W 32) APBC Mask -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVSYS_:1;         /*!< bit:      0  EVSYS APB Clock Enable             */
    uint32_t SERCOM0_:1;       /*!< bit:      1  SERCOM0 APB Clock Enable           */
    uint32_t SERCOM1_:1;       /*!< bit:      2  SERCOM1 APB Clock Enable           */
    uint32_t SERCOM2_:1;       /*!< bit:      3  SERCOM2 APB Clock Enable           */
    uint32_t TC0_:1;           /*!< bit:      4  TC0 APB Clock Enable               */
    uint32_t TC1_:1;           /*!< bit:      5  TC1 APB Clock Enable               */
    uint32_t TC2_:1;           /*!< bit:      6  TC2 APB Clock Enable               */
    uint32_t ADC_:1;           /*!< bit:      7  ADC APB Clock Enable               */
    uint32_t DAC_:1;           /*!< bit:      8  DAC APB Clock Enable               */
    uint32_t PTC_:1;           /*!< bit:      9  PTC APB Clock Enable               */
    uint32_t TRNG_:1;          /*!< bit:     10  TRNG APB Clock Enable              */
    uint32_t CCL_:1;           /*!< bit:     11  CCL APB Clock Enable               */
    uint32_t OPAMP_:1;         /*!< bit:     12  OPAMP APB Clock Enable             */
    uint32_t :19;              /*!< bit: 13..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} MCLK_APBCMASK_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define MCLK_APBCMASK_OFFSET        0x1C         /**< \brief (MCLK_APBCMASK offset) APBC Mask */
#define MCLK_APBCMASK_RESETVALUE    _U_(0x00001FFF) /**< \brief (MCLK_APBCMASK reset_value) APBC Mask */

#define MCLK_APBCMASK_EVSYS_Pos     0            /**< \brief (MCLK_APBCMASK) EVSYS APB Clock Enable */
#define MCLK_APBCMASK_EVSYS         (_U_(0x1) << MCLK_APBCMASK_EVSYS_Pos)
#define MCLK_APBCMASK_SERCOM0_Pos   1            /**< \brief (MCLK_APBCMASK) SERCOM0 APB Clock Enable */
#define MCLK_APBCMASK_SERCOM0       (_U_(0x1) << MCLK_APBCMASK_SERCOM0_Pos)
#define MCLK_APBCMASK_SERCOM1_Pos   2            /**< \brief (MCLK_APBCMASK) SERCOM1 APB Clock Enable */
#define MCLK_APBCMASK_SERCOM1       (_U_(0x1) << MCLK_APBCMASK_SERCOM1_Pos)
#define MCLK_APBCMASK_SERCOM2_Pos   3            /**< \brief (MCLK_APBCMASK) SERCOM2 APB Clock Enable */
#define MCLK_APBCMASK_SERCOM2       (_U_(0x1) << MCLK_APBCMASK_SERCOM2_Pos)
#define MCLK_APBCMASK_TC0_Pos       4            /**< \brief (MCLK_APBCMASK) TC0 APB Clock Enable */
#define MCLK_APBCMASK_TC0           (_U_(0x1) << MCLK_APBCMASK_TC0_Pos)
#define MCLK_APBCMASK_TC1_Pos       5            /**< \brief (MCLK_APBCMASK) TC1 APB Clock Enable */
#define MCLK_APBCMASK_TC1           (_U_(0x1) << MCLK_APBCMASK_TC1_Pos)
#define MCLK_APBCMASK_TC2_Pos       6            /**< \brief (MCLK_APBCMASK) TC2 APB Clock Enable */
#define MCLK_APBCMASK_TC2           (_U_(0x1) << MCLK_APBCMASK_TC2_Pos)
#define MCLK_APBCMASK_ADC_Pos       7            /**< \brief (MCLK_APBCMASK) ADC APB Clock Enable */
#define MCLK_APBCMASK_ADC           (_U_(0x1) << MCLK_APBCMASK_ADC_Pos)
#define MCLK_APBCMASK_DAC_Pos       8            /**< \brief (MCLK_APBCMASK) DAC APB Clock Enable */
#define MCLK_APBCMASK_DAC           (_U_(0x1) << MCLK_APBCMASK_DAC_Pos)
#define MCLK_APBCMASK_PTC_Pos       9            /**< \brief (MCLK_APBCMASK) PTC APB Clock Enable */
#define MCLK_APBCMASK_PTC           (_U_(0x1) << MCLK_APBCMASK_PTC_Pos)
#define MCLK_APBCMASK_TRNG_Pos      10           /**< \brief (MCLK_APBCMASK) TRNG APB Clock Enable */
#define MCLK_APBCMASK_TRNG          (_U_(0x1) << MCLK_APBCMASK_TRNG_Pos)
#define MCLK_APBCMASK_CCL_Pos       11           /**< \brief (MCLK_APBCMASK) CCL APB Clock Enable */
#define MCLK_APBCMASK_CCL           (_U_(0x1) << MCLK_APBCMASK_CCL_Pos)
#define MCLK_APBCMASK_OPAMP_Pos     12           /**< \brief (MCLK_APBCMASK) OPAMP APB Clock Enable */
#define MCLK_APBCMASK_OPAMP         (_U_(0x1) << MCLK_APBCMASK_OPAMP_Pos)
#define MCLK_APBCMASK_MASK          _U_(0x00001FFF) /**< \brief (MCLK_APBCMASK) MASK Register */

/** \brief MCLK hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO MCLK_CTRLA_Type           CTRLA;       /**< \brief Offset: 0x00 (R/W  8) Control */
  __IO MCLK_INTENCLR_Type        INTENCLR;    /**< \brief Offset: 0x01 (R/W  8) Interrupt Enable Clear */
  __IO MCLK_INTENSET_Type        INTENSET;    /**< \brief Offset: 0x02 (R/W  8) Interrupt Enable Set */
  __IO MCLK_INTFLAG_Type         INTFLAG;     /**< \brief Offset: 0x03 (R/W  8) Interrupt Flag Status and Clear */
  __IO MCLK_CPUDIV_Type          CPUDIV;      /**< \brief Offset: 0x04 (R/W  8) CPU Clock Division */
       RoReg8                    Reserved1[0xB];
  __IO MCLK_AHBMASK_Type         AHBMASK;     /**< \brief Offset: 0x10 (R/W 32) AHB Mask */
  __IO MCLK_APBAMASK_Type        APBAMASK;    /**< \brief Offset: 0x14 (R/W 32) APBA Mask */
  __IO MCLK_APBBMASK_Type        APBBMASK;    /**< \brief Offset: 0x18 (R/W 32) APBB Mask */
  __IO MCLK_APBCMASK_Type        APBCMASK;    /**< \brief Offset: 0x1C (R/W 32) APBC Mask */
} Mclk;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML10_MCLK_COMPONENT_ */
