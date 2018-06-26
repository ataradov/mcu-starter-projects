/**
 * \file
 *
 * \brief Component description for PAC
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

#ifndef _SAML11_PAC_COMPONENT_
#define _SAML11_PAC_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PAC */
/* ========================================================================== */
/** \addtogroup SAML11_PAC Peripheral Access Controller */
/*@{*/

#define PAC_U2120
#define REV_PAC                     0x200

/* -------- PAC_WRCTRL : (PAC Offset: 0x00) (R/W 32) Write control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PERID:16;         /*!< bit:  0..15  Peripheral identifier              */
    uint32_t KEY:8;            /*!< bit: 16..23  Peripheral access control key      */
    uint32_t :8;               /*!< bit: 24..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_WRCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_WRCTRL_OFFSET           0x00         /**< \brief (PAC_WRCTRL offset) Write control */
#define PAC_WRCTRL_RESETVALUE       _U_(0x00000000) /**< \brief (PAC_WRCTRL reset_value) Write control */

#define PAC_WRCTRL_PERID_Pos        0            /**< \brief (PAC_WRCTRL) Peripheral identifier */
#define PAC_WRCTRL_PERID_Msk        (_U_(0xFFFF) << PAC_WRCTRL_PERID_Pos)
#define PAC_WRCTRL_PERID(value)     (PAC_WRCTRL_PERID_Msk & ((value) << PAC_WRCTRL_PERID_Pos))
#define PAC_WRCTRL_KEY_Pos          16           /**< \brief (PAC_WRCTRL) Peripheral access control key */
#define PAC_WRCTRL_KEY_Msk          (_U_(0xFF) << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY(value)       (PAC_WRCTRL_KEY_Msk & ((value) << PAC_WRCTRL_KEY_Pos))
#define   PAC_WRCTRL_KEY_OFF_Val          _U_(0x0)   /**< \brief (PAC_WRCTRL) No action */
#define   PAC_WRCTRL_KEY_CLR_Val          _U_(0x1)   /**< \brief (PAC_WRCTRL) Clear protection */
#define   PAC_WRCTRL_KEY_SET_Val          _U_(0x2)   /**< \brief (PAC_WRCTRL) Set protection */
#define   PAC_WRCTRL_KEY_SETLCK_Val       _U_(0x3)   /**< \brief (PAC_WRCTRL) Set and lock protection */
#define   PAC_WRCTRL_KEY_SETSEC_Val       _U_(0x4)   /**< \brief (PAC_WRCTRL) Set IP secure */
#define   PAC_WRCTRL_KEY_SETNONSEC_Val    _U_(0x5)   /**< \brief (PAC_WRCTRL) Set IP non-secure */
#define   PAC_WRCTRL_KEY_SECLOCK_Val      _U_(0x6)   /**< \brief (PAC_WRCTRL) Lock IP security value */
#define PAC_WRCTRL_KEY_OFF          (PAC_WRCTRL_KEY_OFF_Val        << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_CLR          (PAC_WRCTRL_KEY_CLR_Val        << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_SET          (PAC_WRCTRL_KEY_SET_Val        << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_SETLCK       (PAC_WRCTRL_KEY_SETLCK_Val     << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_SETSEC       (PAC_WRCTRL_KEY_SETSEC_Val     << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_SETNONSEC    (PAC_WRCTRL_KEY_SETNONSEC_Val  << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_KEY_SECLOCK      (PAC_WRCTRL_KEY_SECLOCK_Val    << PAC_WRCTRL_KEY_Pos)
#define PAC_WRCTRL_MASK             _U_(0x00FFFFFF) /**< \brief (PAC_WRCTRL) MASK Register */

/* -------- PAC_EVCTRL : (PAC Offset: 0x04) (R/W  8) Event control -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ERREO:1;          /*!< bit:      0  Peripheral acess error event output */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PAC_EVCTRL_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_EVCTRL_OFFSET           0x04         /**< \brief (PAC_EVCTRL offset) Event control */
#define PAC_EVCTRL_RESETVALUE       _U_(0x00)    /**< \brief (PAC_EVCTRL reset_value) Event control */

#define PAC_EVCTRL_ERREO_Pos        0            /**< \brief (PAC_EVCTRL) Peripheral acess error event output */
#define PAC_EVCTRL_ERREO            (_U_(0x1) << PAC_EVCTRL_ERREO_Pos)
#define PAC_EVCTRL_MASK             _U_(0x01)    /**< \brief (PAC_EVCTRL) MASK Register */

/* -------- PAC_INTENCLR : (PAC Offset: 0x08) (R/W  8) Interrupt enable clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ERR:1;            /*!< bit:      0  Peripheral access error interrupt disable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PAC_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTENCLR_OFFSET         0x08         /**< \brief (PAC_INTENCLR offset) Interrupt enable clear */
#define PAC_INTENCLR_RESETVALUE     _U_(0x00)    /**< \brief (PAC_INTENCLR reset_value) Interrupt enable clear */

#define PAC_INTENCLR_ERR_Pos        0            /**< \brief (PAC_INTENCLR) Peripheral access error interrupt disable */
#define PAC_INTENCLR_ERR            (_U_(0x1) << PAC_INTENCLR_ERR_Pos)
#define PAC_INTENCLR_MASK           _U_(0x01)    /**< \brief (PAC_INTENCLR) MASK Register */

/* -------- PAC_INTENSET : (PAC Offset: 0x09) (R/W  8) Interrupt enable set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  ERR:1;            /*!< bit:      0  Peripheral access error interrupt enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PAC_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTENSET_OFFSET         0x09         /**< \brief (PAC_INTENSET offset) Interrupt enable set */
#define PAC_INTENSET_RESETVALUE     _U_(0x00)    /**< \brief (PAC_INTENSET reset_value) Interrupt enable set */

#define PAC_INTENSET_ERR_Pos        0            /**< \brief (PAC_INTENSET) Peripheral access error interrupt enable */
#define PAC_INTENSET_ERR            (_U_(0x1) << PAC_INTENSET_ERR_Pos)
#define PAC_INTENSET_MASK           _U_(0x01)    /**< \brief (PAC_INTENSET) MASK Register */

/* -------- PAC_INTFLAGAHB : (PAC Offset: 0x10) (R/W 32) Bridge interrupt flag status -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t FLASH_:1;         /*!< bit:      0  FLASH                              */
    __I uint32_t HPB0_:1;          /*!< bit:      1  HPB0                               */
    __I uint32_t HPB1_:1;          /*!< bit:      2  HPB1                               */
    __I uint32_t HPB2_:1;          /*!< bit:      3  HPB2                               */
    __I uint32_t HSRAMCPU_:1;      /*!< bit:      4  HSRAMCPU                           */
    __I uint32_t HSRAMDMAC_:1;     /*!< bit:      5  HSRAMDMAC                          */
    __I uint32_t HSRAMDSU_:1;      /*!< bit:      6  HSRAMDSU                           */
    __I uint32_t BROM_:1;          /*!< bit:      7  BROM                               */
    __I uint32_t :24;              /*!< bit:  8..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_INTFLAGAHB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGAHB_OFFSET       0x10         /**< \brief (PAC_INTFLAGAHB offset) Bridge interrupt flag status */
#define PAC_INTFLAGAHB_RESETVALUE   _U_(0x00000000) /**< \brief (PAC_INTFLAGAHB reset_value) Bridge interrupt flag status */

#define PAC_INTFLAGAHB_FLASH_Pos    0            /**< \brief (PAC_INTFLAGAHB) FLASH */
#define PAC_INTFLAGAHB_FLASH        (_U_(0x1) << PAC_INTFLAGAHB_FLASH_Pos)
#define PAC_INTFLAGAHB_HPB0_Pos     1            /**< \brief (PAC_INTFLAGAHB) HPB0 */
#define PAC_INTFLAGAHB_HPB0         (_U_(0x1) << PAC_INTFLAGAHB_HPB0_Pos)
#define PAC_INTFLAGAHB_HPB1_Pos     2            /**< \brief (PAC_INTFLAGAHB) HPB1 */
#define PAC_INTFLAGAHB_HPB1         (_U_(0x1) << PAC_INTFLAGAHB_HPB1_Pos)
#define PAC_INTFLAGAHB_HPB2_Pos     3            /**< \brief (PAC_INTFLAGAHB) HPB2 */
#define PAC_INTFLAGAHB_HPB2         (_U_(0x1) << PAC_INTFLAGAHB_HPB2_Pos)
#define PAC_INTFLAGAHB_HSRAMCPU_Pos 4            /**< \brief (PAC_INTFLAGAHB) HSRAMCPU */
#define PAC_INTFLAGAHB_HSRAMCPU     (_U_(0x1) << PAC_INTFLAGAHB_HSRAMCPU_Pos)
#define PAC_INTFLAGAHB_HSRAMDMAC_Pos 5            /**< \brief (PAC_INTFLAGAHB) HSRAMDMAC */
#define PAC_INTFLAGAHB_HSRAMDMAC    (_U_(0x1) << PAC_INTFLAGAHB_HSRAMDMAC_Pos)
#define PAC_INTFLAGAHB_HSRAMDSU_Pos 6            /**< \brief (PAC_INTFLAGAHB) HSRAMDSU */
#define PAC_INTFLAGAHB_HSRAMDSU     (_U_(0x1) << PAC_INTFLAGAHB_HSRAMDSU_Pos)
#define PAC_INTFLAGAHB_BROM_Pos     7            /**< \brief (PAC_INTFLAGAHB) BROM */
#define PAC_INTFLAGAHB_BROM         (_U_(0x1) << PAC_INTFLAGAHB_BROM_Pos)
#define PAC_INTFLAGAHB_MASK         _U_(0x000000FF) /**< \brief (PAC_INTFLAGAHB) MASK Register */

/* -------- PAC_INTFLAGA : (PAC Offset: 0x14) (R/W 32) Peripheral interrupt flag status - Bridge A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t PAC_:1;           /*!< bit:      0  PAC                                */
    __I uint32_t PM_:1;            /*!< bit:      1  PM                                 */
    __I uint32_t MCLK_:1;          /*!< bit:      2  MCLK                               */
    __I uint32_t RSTC_:1;          /*!< bit:      3  RSTC                               */
    __I uint32_t OSCCTRL_:1;       /*!< bit:      4  OSCCTRL                            */
    __I uint32_t OSC32KCTRL_:1;    /*!< bit:      5  OSC32KCTRL                         */
    __I uint32_t SUPC_:1;          /*!< bit:      6  SUPC                               */
    __I uint32_t GCLK_:1;          /*!< bit:      7  GCLK                               */
    __I uint32_t WDT_:1;           /*!< bit:      8  WDT                                */
    __I uint32_t RTC_:1;           /*!< bit:      9  RTC                                */
    __I uint32_t EIC_:1;           /*!< bit:     10  EIC                                */
    __I uint32_t FREQM_:1;         /*!< bit:     11  FREQM                              */
    __I uint32_t PORT_:1;          /*!< bit:     12  PORT                               */
    __I uint32_t AC_:1;            /*!< bit:     13  AC                                 */
    __I uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_INTFLAGA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGA_OFFSET         0x14         /**< \brief (PAC_INTFLAGA offset) Peripheral interrupt flag status - Bridge A */
#define PAC_INTFLAGA_RESETVALUE     _U_(0x00000000) /**< \brief (PAC_INTFLAGA reset_value) Peripheral interrupt flag status - Bridge A */

#define PAC_INTFLAGA_PAC_Pos        0            /**< \brief (PAC_INTFLAGA) PAC */
#define PAC_INTFLAGA_PAC            (_U_(0x1) << PAC_INTFLAGA_PAC_Pos)
#define PAC_INTFLAGA_PM_Pos         1            /**< \brief (PAC_INTFLAGA) PM */
#define PAC_INTFLAGA_PM             (_U_(0x1) << PAC_INTFLAGA_PM_Pos)
#define PAC_INTFLAGA_MCLK_Pos       2            /**< \brief (PAC_INTFLAGA) MCLK */
#define PAC_INTFLAGA_MCLK           (_U_(0x1) << PAC_INTFLAGA_MCLK_Pos)
#define PAC_INTFLAGA_RSTC_Pos       3            /**< \brief (PAC_INTFLAGA) RSTC */
#define PAC_INTFLAGA_RSTC           (_U_(0x1) << PAC_INTFLAGA_RSTC_Pos)
#define PAC_INTFLAGA_OSCCTRL_Pos    4            /**< \brief (PAC_INTFLAGA) OSCCTRL */
#define PAC_INTFLAGA_OSCCTRL        (_U_(0x1) << PAC_INTFLAGA_OSCCTRL_Pos)
#define PAC_INTFLAGA_OSC32KCTRL_Pos 5            /**< \brief (PAC_INTFLAGA) OSC32KCTRL */
#define PAC_INTFLAGA_OSC32KCTRL     (_U_(0x1) << PAC_INTFLAGA_OSC32KCTRL_Pos)
#define PAC_INTFLAGA_SUPC_Pos       6            /**< \brief (PAC_INTFLAGA) SUPC */
#define PAC_INTFLAGA_SUPC           (_U_(0x1) << PAC_INTFLAGA_SUPC_Pos)
#define PAC_INTFLAGA_GCLK_Pos       7            /**< \brief (PAC_INTFLAGA) GCLK */
#define PAC_INTFLAGA_GCLK           (_U_(0x1) << PAC_INTFLAGA_GCLK_Pos)
#define PAC_INTFLAGA_WDT_Pos        8            /**< \brief (PAC_INTFLAGA) WDT */
#define PAC_INTFLAGA_WDT            (_U_(0x1) << PAC_INTFLAGA_WDT_Pos)
#define PAC_INTFLAGA_RTC_Pos        9            /**< \brief (PAC_INTFLAGA) RTC */
#define PAC_INTFLAGA_RTC            (_U_(0x1) << PAC_INTFLAGA_RTC_Pos)
#define PAC_INTFLAGA_EIC_Pos        10           /**< \brief (PAC_INTFLAGA) EIC */
#define PAC_INTFLAGA_EIC            (_U_(0x1) << PAC_INTFLAGA_EIC_Pos)
#define PAC_INTFLAGA_FREQM_Pos      11           /**< \brief (PAC_INTFLAGA) FREQM */
#define PAC_INTFLAGA_FREQM          (_U_(0x1) << PAC_INTFLAGA_FREQM_Pos)
#define PAC_INTFLAGA_PORT_Pos       12           /**< \brief (PAC_INTFLAGA) PORT */
#define PAC_INTFLAGA_PORT           (_U_(0x1) << PAC_INTFLAGA_PORT_Pos)
#define PAC_INTFLAGA_AC_Pos         13           /**< \brief (PAC_INTFLAGA) AC */
#define PAC_INTFLAGA_AC             (_U_(0x1) << PAC_INTFLAGA_AC_Pos)
#define PAC_INTFLAGA_MASK           _U_(0x00003FFF) /**< \brief (PAC_INTFLAGA) MASK Register */

/* -------- PAC_INTFLAGB : (PAC Offset: 0x18) (R/W 32) Peripheral interrupt flag status - Bridge B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t IDAU_:1;          /*!< bit:      0  IDAU                               */
    __I uint32_t DSU_:1;           /*!< bit:      1  DSU                                */
    __I uint32_t NVMCTRL_:1;       /*!< bit:      2  NVMCTRL                            */
    __I uint32_t DMAC_:1;          /*!< bit:      3  DMAC                               */
    __I uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_INTFLAGB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGB_OFFSET         0x18         /**< \brief (PAC_INTFLAGB offset) Peripheral interrupt flag status - Bridge B */
#define PAC_INTFLAGB_RESETVALUE     _U_(0x00000000) /**< \brief (PAC_INTFLAGB reset_value) Peripheral interrupt flag status - Bridge B */

#define PAC_INTFLAGB_IDAU_Pos       0            /**< \brief (PAC_INTFLAGB) IDAU */
#define PAC_INTFLAGB_IDAU           (_U_(0x1) << PAC_INTFLAGB_IDAU_Pos)
#define PAC_INTFLAGB_DSU_Pos        1            /**< \brief (PAC_INTFLAGB) DSU */
#define PAC_INTFLAGB_DSU            (_U_(0x1) << PAC_INTFLAGB_DSU_Pos)
#define PAC_INTFLAGB_NVMCTRL_Pos    2            /**< \brief (PAC_INTFLAGB) NVMCTRL */
#define PAC_INTFLAGB_NVMCTRL        (_U_(0x1) << PAC_INTFLAGB_NVMCTRL_Pos)
#define PAC_INTFLAGB_DMAC_Pos       3            /**< \brief (PAC_INTFLAGB) DMAC */
#define PAC_INTFLAGB_DMAC           (_U_(0x1) << PAC_INTFLAGB_DMAC_Pos)
#define PAC_INTFLAGB_MASK           _U_(0x0000000F) /**< \brief (PAC_INTFLAGB) MASK Register */

/* -------- PAC_INTFLAGC : (PAC Offset: 0x1C) (R/W 32) Peripheral interrupt flag status - Bridge C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint32_t EVSYS_:1;         /*!< bit:      0  EVSYS                              */
    __I uint32_t SERCOM0_:1;       /*!< bit:      1  SERCOM0                            */
    __I uint32_t SERCOM1_:1;       /*!< bit:      2  SERCOM1                            */
    __I uint32_t SERCOM2_:1;       /*!< bit:      3  SERCOM2                            */
    __I uint32_t TC0_:1;           /*!< bit:      4  TC0                                */
    __I uint32_t TC1_:1;           /*!< bit:      5  TC1                                */
    __I uint32_t TC2_:1;           /*!< bit:      6  TC2                                */
    __I uint32_t ADC_:1;           /*!< bit:      7  ADC                                */
    __I uint32_t DAC_:1;           /*!< bit:      8  DAC                                */
    __I uint32_t PTC_:1;           /*!< bit:      9  PTC                                */
    __I uint32_t TRNG_:1;          /*!< bit:     10  TRNG                               */
    __I uint32_t CCL_:1;           /*!< bit:     11  CCL                                */
    __I uint32_t OPAMP_:1;         /*!< bit:     12  OPAMP                              */
    __I uint32_t TRAM_:1;          /*!< bit:     13  TRAM                               */
    __I uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_INTFLAGC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_INTFLAGC_OFFSET         0x1C         /**< \brief (PAC_INTFLAGC offset) Peripheral interrupt flag status - Bridge C */
#define PAC_INTFLAGC_RESETVALUE     _U_(0x00000000) /**< \brief (PAC_INTFLAGC reset_value) Peripheral interrupt flag status - Bridge C */

#define PAC_INTFLAGC_EVSYS_Pos      0            /**< \brief (PAC_INTFLAGC) EVSYS */
#define PAC_INTFLAGC_EVSYS          (_U_(0x1) << PAC_INTFLAGC_EVSYS_Pos)
#define PAC_INTFLAGC_SERCOM0_Pos    1            /**< \brief (PAC_INTFLAGC) SERCOM0 */
#define PAC_INTFLAGC_SERCOM0        (_U_(0x1) << PAC_INTFLAGC_SERCOM0_Pos)
#define PAC_INTFLAGC_SERCOM1_Pos    2            /**< \brief (PAC_INTFLAGC) SERCOM1 */
#define PAC_INTFLAGC_SERCOM1        (_U_(0x1) << PAC_INTFLAGC_SERCOM1_Pos)
#define PAC_INTFLAGC_SERCOM2_Pos    3            /**< \brief (PAC_INTFLAGC) SERCOM2 */
#define PAC_INTFLAGC_SERCOM2        (_U_(0x1) << PAC_INTFLAGC_SERCOM2_Pos)
#define PAC_INTFLAGC_TC0_Pos        4            /**< \brief (PAC_INTFLAGC) TC0 */
#define PAC_INTFLAGC_TC0            (_U_(0x1) << PAC_INTFLAGC_TC0_Pos)
#define PAC_INTFLAGC_TC1_Pos        5            /**< \brief (PAC_INTFLAGC) TC1 */
#define PAC_INTFLAGC_TC1            (_U_(0x1) << PAC_INTFLAGC_TC1_Pos)
#define PAC_INTFLAGC_TC2_Pos        6            /**< \brief (PAC_INTFLAGC) TC2 */
#define PAC_INTFLAGC_TC2            (_U_(0x1) << PAC_INTFLAGC_TC2_Pos)
#define PAC_INTFLAGC_ADC_Pos        7            /**< \brief (PAC_INTFLAGC) ADC */
#define PAC_INTFLAGC_ADC            (_U_(0x1) << PAC_INTFLAGC_ADC_Pos)
#define PAC_INTFLAGC_DAC_Pos        8            /**< \brief (PAC_INTFLAGC) DAC */
#define PAC_INTFLAGC_DAC            (_U_(0x1) << PAC_INTFLAGC_DAC_Pos)
#define PAC_INTFLAGC_PTC_Pos        9            /**< \brief (PAC_INTFLAGC) PTC */
#define PAC_INTFLAGC_PTC            (_U_(0x1) << PAC_INTFLAGC_PTC_Pos)
#define PAC_INTFLAGC_TRNG_Pos       10           /**< \brief (PAC_INTFLAGC) TRNG */
#define PAC_INTFLAGC_TRNG           (_U_(0x1) << PAC_INTFLAGC_TRNG_Pos)
#define PAC_INTFLAGC_CCL_Pos        11           /**< \brief (PAC_INTFLAGC) CCL */
#define PAC_INTFLAGC_CCL            (_U_(0x1) << PAC_INTFLAGC_CCL_Pos)
#define PAC_INTFLAGC_OPAMP_Pos      12           /**< \brief (PAC_INTFLAGC) OPAMP */
#define PAC_INTFLAGC_OPAMP          (_U_(0x1) << PAC_INTFLAGC_OPAMP_Pos)
#define PAC_INTFLAGC_TRAM_Pos       13           /**< \brief (PAC_INTFLAGC) TRAM */
#define PAC_INTFLAGC_TRAM           (_U_(0x1) << PAC_INTFLAGC_TRAM_Pos)
#define PAC_INTFLAGC_MASK           _U_(0x00003FFF) /**< \brief (PAC_INTFLAGC) MASK Register */

/* -------- PAC_STATUSA : (PAC Offset: 0x34) (R/  32) Peripheral write protection status - Bridge A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PAC_:1;           /*!< bit:      0  PAC APB Protect Enable             */
    uint32_t PM_:1;            /*!< bit:      1  PM APB Protect Enable              */
    uint32_t MCLK_:1;          /*!< bit:      2  MCLK APB Protect Enable            */
    uint32_t RSTC_:1;          /*!< bit:      3  RSTC APB Protect Enable            */
    uint32_t OSCCTRL_:1;       /*!< bit:      4  OSCCTRL APB Protect Enable         */
    uint32_t OSC32KCTRL_:1;    /*!< bit:      5  OSC32KCTRL APB Protect Enable      */
    uint32_t SUPC_:1;          /*!< bit:      6  SUPC APB Protect Enable            */
    uint32_t GCLK_:1;          /*!< bit:      7  GCLK APB Protect Enable            */
    uint32_t WDT_:1;           /*!< bit:      8  WDT APB Protect Enable             */
    uint32_t RTC_:1;           /*!< bit:      9  RTC APB Protect Enable             */
    uint32_t EIC_:1;           /*!< bit:     10  EIC APB Protect Enable             */
    uint32_t FREQM_:1;         /*!< bit:     11  FREQM APB Protect Enable           */
    uint32_t PORT_:1;          /*!< bit:     12  PORT APB Protect Enable            */
    uint32_t AC_:1;            /*!< bit:     13  AC APB Protect Enable              */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_STATUSA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSA_OFFSET          0x34         /**< \brief (PAC_STATUSA offset) Peripheral write protection status - Bridge A */
#define PAC_STATUSA_RESETVALUE      _U_(0x0000C000) /**< \brief (PAC_STATUSA reset_value) Peripheral write protection status - Bridge A */

#define PAC_STATUSA_PAC_Pos         0            /**< \brief (PAC_STATUSA) PAC APB Protect Enable */
#define PAC_STATUSA_PAC             (_U_(0x1) << PAC_STATUSA_PAC_Pos)
#define PAC_STATUSA_PM_Pos          1            /**< \brief (PAC_STATUSA) PM APB Protect Enable */
#define PAC_STATUSA_PM              (_U_(0x1) << PAC_STATUSA_PM_Pos)
#define PAC_STATUSA_MCLK_Pos        2            /**< \brief (PAC_STATUSA) MCLK APB Protect Enable */
#define PAC_STATUSA_MCLK            (_U_(0x1) << PAC_STATUSA_MCLK_Pos)
#define PAC_STATUSA_RSTC_Pos        3            /**< \brief (PAC_STATUSA) RSTC APB Protect Enable */
#define PAC_STATUSA_RSTC            (_U_(0x1) << PAC_STATUSA_RSTC_Pos)
#define PAC_STATUSA_OSCCTRL_Pos     4            /**< \brief (PAC_STATUSA) OSCCTRL APB Protect Enable */
#define PAC_STATUSA_OSCCTRL         (_U_(0x1) << PAC_STATUSA_OSCCTRL_Pos)
#define PAC_STATUSA_OSC32KCTRL_Pos  5            /**< \brief (PAC_STATUSA) OSC32KCTRL APB Protect Enable */
#define PAC_STATUSA_OSC32KCTRL      (_U_(0x1) << PAC_STATUSA_OSC32KCTRL_Pos)
#define PAC_STATUSA_SUPC_Pos        6            /**< \brief (PAC_STATUSA) SUPC APB Protect Enable */
#define PAC_STATUSA_SUPC            (_U_(0x1) << PAC_STATUSA_SUPC_Pos)
#define PAC_STATUSA_GCLK_Pos        7            /**< \brief (PAC_STATUSA) GCLK APB Protect Enable */
#define PAC_STATUSA_GCLK            (_U_(0x1) << PAC_STATUSA_GCLK_Pos)
#define PAC_STATUSA_WDT_Pos         8            /**< \brief (PAC_STATUSA) WDT APB Protect Enable */
#define PAC_STATUSA_WDT             (_U_(0x1) << PAC_STATUSA_WDT_Pos)
#define PAC_STATUSA_RTC_Pos         9            /**< \brief (PAC_STATUSA) RTC APB Protect Enable */
#define PAC_STATUSA_RTC             (_U_(0x1) << PAC_STATUSA_RTC_Pos)
#define PAC_STATUSA_EIC_Pos         10           /**< \brief (PAC_STATUSA) EIC APB Protect Enable */
#define PAC_STATUSA_EIC             (_U_(0x1) << PAC_STATUSA_EIC_Pos)
#define PAC_STATUSA_FREQM_Pos       11           /**< \brief (PAC_STATUSA) FREQM APB Protect Enable */
#define PAC_STATUSA_FREQM           (_U_(0x1) << PAC_STATUSA_FREQM_Pos)
#define PAC_STATUSA_PORT_Pos        12           /**< \brief (PAC_STATUSA) PORT APB Protect Enable */
#define PAC_STATUSA_PORT            (_U_(0x1) << PAC_STATUSA_PORT_Pos)
#define PAC_STATUSA_AC_Pos          13           /**< \brief (PAC_STATUSA) AC APB Protect Enable */
#define PAC_STATUSA_AC              (_U_(0x1) << PAC_STATUSA_AC_Pos)
#define PAC_STATUSA_MASK            _U_(0x00003FFF) /**< \brief (PAC_STATUSA) MASK Register */

/* -------- PAC_STATUSB : (PAC Offset: 0x38) (R/  32) Peripheral write protection status - Bridge B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDAU_:1;          /*!< bit:      0  IDAU APB Protect Enable            */
    uint32_t DSU_:1;           /*!< bit:      1  DSU APB Protect Enable             */
    uint32_t NVMCTRL_:1;       /*!< bit:      2  NVMCTRL APB Protect Enable         */
    uint32_t DMAC_:1;          /*!< bit:      3  DMAC APB Protect Enable            */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_STATUSB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSB_OFFSET          0x38         /**< \brief (PAC_STATUSB offset) Peripheral write protection status - Bridge B */
#define PAC_STATUSB_RESETVALUE      _U_(0x00000002) /**< \brief (PAC_STATUSB reset_value) Peripheral write protection status - Bridge B */

#define PAC_STATUSB_IDAU_Pos        0            /**< \brief (PAC_STATUSB) IDAU APB Protect Enable */
#define PAC_STATUSB_IDAU            (_U_(0x1) << PAC_STATUSB_IDAU_Pos)
#define PAC_STATUSB_DSU_Pos         1            /**< \brief (PAC_STATUSB) DSU APB Protect Enable */
#define PAC_STATUSB_DSU             (_U_(0x1) << PAC_STATUSB_DSU_Pos)
#define PAC_STATUSB_NVMCTRL_Pos     2            /**< \brief (PAC_STATUSB) NVMCTRL APB Protect Enable */
#define PAC_STATUSB_NVMCTRL         (_U_(0x1) << PAC_STATUSB_NVMCTRL_Pos)
#define PAC_STATUSB_DMAC_Pos        3            /**< \brief (PAC_STATUSB) DMAC APB Protect Enable */
#define PAC_STATUSB_DMAC            (_U_(0x1) << PAC_STATUSB_DMAC_Pos)
#define PAC_STATUSB_MASK            _U_(0x0000000F) /**< \brief (PAC_STATUSB) MASK Register */

/* -------- PAC_STATUSC : (PAC Offset: 0x3C) (R/  32) Peripheral write protection status - Bridge C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVSYS_:1;         /*!< bit:      0  EVSYS APB Protect Enable           */
    uint32_t SERCOM0_:1;       /*!< bit:      1  SERCOM0 APB Protect Enable         */
    uint32_t SERCOM1_:1;       /*!< bit:      2  SERCOM1 APB Protect Enable         */
    uint32_t SERCOM2_:1;       /*!< bit:      3  SERCOM2 APB Protect Enable         */
    uint32_t TC0_:1;           /*!< bit:      4  TC0 APB Protect Enable             */
    uint32_t TC1_:1;           /*!< bit:      5  TC1 APB Protect Enable             */
    uint32_t TC2_:1;           /*!< bit:      6  TC2 APB Protect Enable             */
    uint32_t ADC_:1;           /*!< bit:      7  ADC APB Protect Enable             */
    uint32_t DAC_:1;           /*!< bit:      8  DAC APB Protect Enable             */
    uint32_t PTC_:1;           /*!< bit:      9  PTC APB Protect Enable             */
    uint32_t TRNG_:1;          /*!< bit:     10  TRNG APB Protect Enable            */
    uint32_t CCL_:1;           /*!< bit:     11  CCL APB Protect Enable             */
    uint32_t OPAMP_:1;         /*!< bit:     12  OPAMP APB Protect Enable           */
    uint32_t TRAM_:1;          /*!< bit:     13  TRAM APB Protect Enable            */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_STATUSC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_STATUSC_OFFSET          0x3C         /**< \brief (PAC_STATUSC offset) Peripheral write protection status - Bridge C */
#define PAC_STATUSC_RESETVALUE      _U_(0x00000000) /**< \brief (PAC_STATUSC reset_value) Peripheral write protection status - Bridge C */

#define PAC_STATUSC_EVSYS_Pos       0            /**< \brief (PAC_STATUSC) EVSYS APB Protect Enable */
#define PAC_STATUSC_EVSYS           (_U_(0x1) << PAC_STATUSC_EVSYS_Pos)
#define PAC_STATUSC_SERCOM0_Pos     1            /**< \brief (PAC_STATUSC) SERCOM0 APB Protect Enable */
#define PAC_STATUSC_SERCOM0         (_U_(0x1) << PAC_STATUSC_SERCOM0_Pos)
#define PAC_STATUSC_SERCOM1_Pos     2            /**< \brief (PAC_STATUSC) SERCOM1 APB Protect Enable */
#define PAC_STATUSC_SERCOM1         (_U_(0x1) << PAC_STATUSC_SERCOM1_Pos)
#define PAC_STATUSC_SERCOM2_Pos     3            /**< \brief (PAC_STATUSC) SERCOM2 APB Protect Enable */
#define PAC_STATUSC_SERCOM2         (_U_(0x1) << PAC_STATUSC_SERCOM2_Pos)
#define PAC_STATUSC_TC0_Pos         4            /**< \brief (PAC_STATUSC) TC0 APB Protect Enable */
#define PAC_STATUSC_TC0             (_U_(0x1) << PAC_STATUSC_TC0_Pos)
#define PAC_STATUSC_TC1_Pos         5            /**< \brief (PAC_STATUSC) TC1 APB Protect Enable */
#define PAC_STATUSC_TC1             (_U_(0x1) << PAC_STATUSC_TC1_Pos)
#define PAC_STATUSC_TC2_Pos         6            /**< \brief (PAC_STATUSC) TC2 APB Protect Enable */
#define PAC_STATUSC_TC2             (_U_(0x1) << PAC_STATUSC_TC2_Pos)
#define PAC_STATUSC_ADC_Pos         7            /**< \brief (PAC_STATUSC) ADC APB Protect Enable */
#define PAC_STATUSC_ADC             (_U_(0x1) << PAC_STATUSC_ADC_Pos)
#define PAC_STATUSC_DAC_Pos         8            /**< \brief (PAC_STATUSC) DAC APB Protect Enable */
#define PAC_STATUSC_DAC             (_U_(0x1) << PAC_STATUSC_DAC_Pos)
#define PAC_STATUSC_PTC_Pos         9            /**< \brief (PAC_STATUSC) PTC APB Protect Enable */
#define PAC_STATUSC_PTC             (_U_(0x1) << PAC_STATUSC_PTC_Pos)
#define PAC_STATUSC_TRNG_Pos        10           /**< \brief (PAC_STATUSC) TRNG APB Protect Enable */
#define PAC_STATUSC_TRNG            (_U_(0x1) << PAC_STATUSC_TRNG_Pos)
#define PAC_STATUSC_CCL_Pos         11           /**< \brief (PAC_STATUSC) CCL APB Protect Enable */
#define PAC_STATUSC_CCL             (_U_(0x1) << PAC_STATUSC_CCL_Pos)
#define PAC_STATUSC_OPAMP_Pos       12           /**< \brief (PAC_STATUSC) OPAMP APB Protect Enable */
#define PAC_STATUSC_OPAMP           (_U_(0x1) << PAC_STATUSC_OPAMP_Pos)
#define PAC_STATUSC_TRAM_Pos        13           /**< \brief (PAC_STATUSC) TRAM APB Protect Enable */
#define PAC_STATUSC_TRAM            (_U_(0x1) << PAC_STATUSC_TRAM_Pos)
#define PAC_STATUSC_MASK            _U_(0x00003FFF) /**< \brief (PAC_STATUSC) MASK Register */

/* -------- PAC_NONSECA : (PAC Offset: 0x54) (R/  32) Peripheral non-secure status - Bridge A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PAC_:1;           /*!< bit:      0  PAC Non-Secure                     */
    uint32_t PM_:1;            /*!< bit:      1  PM Non-Secure                      */
    uint32_t MCLK_:1;          /*!< bit:      2  MCLK Non-Secure                    */
    uint32_t RSTC_:1;          /*!< bit:      3  RSTC Non-Secure                    */
    uint32_t OSCCTRL_:1;       /*!< bit:      4  OSCCTRL Non-Secure                 */
    uint32_t OSC32KCTRL_:1;    /*!< bit:      5  OSC32KCTRL Non-Secure              */
    uint32_t SUPC_:1;          /*!< bit:      6  SUPC Non-Secure                    */
    uint32_t GCLK_:1;          /*!< bit:      7  GCLK Non-Secure                    */
    uint32_t WDT_:1;           /*!< bit:      8  WDT Non-Secure                     */
    uint32_t RTC_:1;           /*!< bit:      9  RTC Non-Secure                     */
    uint32_t EIC_:1;           /*!< bit:     10  EIC Non-Secure                     */
    uint32_t FREQM_:1;         /*!< bit:     11  FREQM Non-Secure                   */
    uint32_t PORT_:1;          /*!< bit:     12  PORT Non-Secure                    */
    uint32_t AC_:1;            /*!< bit:     13  AC Non-Secure                      */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_NONSECA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_NONSECA_OFFSET          0x54         /**< \brief (PAC_NONSECA offset) Peripheral non-secure status - Bridge A */
#define PAC_NONSECA_RESETVALUE      _U_(0x00000000) /**< \brief (PAC_NONSECA reset_value) Peripheral non-secure status - Bridge A */

#define PAC_NONSECA_PAC_Pos         0            /**< \brief (PAC_NONSECA) PAC Non-Secure */
#define PAC_NONSECA_PAC             (_U_(0x1) << PAC_NONSECA_PAC_Pos)
#define PAC_NONSECA_PM_Pos          1            /**< \brief (PAC_NONSECA) PM Non-Secure */
#define PAC_NONSECA_PM              (_U_(0x1) << PAC_NONSECA_PM_Pos)
#define PAC_NONSECA_MCLK_Pos        2            /**< \brief (PAC_NONSECA) MCLK Non-Secure */
#define PAC_NONSECA_MCLK            (_U_(0x1) << PAC_NONSECA_MCLK_Pos)
#define PAC_NONSECA_RSTC_Pos        3            /**< \brief (PAC_NONSECA) RSTC Non-Secure */
#define PAC_NONSECA_RSTC            (_U_(0x1) << PAC_NONSECA_RSTC_Pos)
#define PAC_NONSECA_OSCCTRL_Pos     4            /**< \brief (PAC_NONSECA) OSCCTRL Non-Secure */
#define PAC_NONSECA_OSCCTRL         (_U_(0x1) << PAC_NONSECA_OSCCTRL_Pos)
#define PAC_NONSECA_OSC32KCTRL_Pos  5            /**< \brief (PAC_NONSECA) OSC32KCTRL Non-Secure */
#define PAC_NONSECA_OSC32KCTRL      (_U_(0x1) << PAC_NONSECA_OSC32KCTRL_Pos)
#define PAC_NONSECA_SUPC_Pos        6            /**< \brief (PAC_NONSECA) SUPC Non-Secure */
#define PAC_NONSECA_SUPC            (_U_(0x1) << PAC_NONSECA_SUPC_Pos)
#define PAC_NONSECA_GCLK_Pos        7            /**< \brief (PAC_NONSECA) GCLK Non-Secure */
#define PAC_NONSECA_GCLK            (_U_(0x1) << PAC_NONSECA_GCLK_Pos)
#define PAC_NONSECA_WDT_Pos         8            /**< \brief (PAC_NONSECA) WDT Non-Secure */
#define PAC_NONSECA_WDT             (_U_(0x1) << PAC_NONSECA_WDT_Pos)
#define PAC_NONSECA_RTC_Pos         9            /**< \brief (PAC_NONSECA) RTC Non-Secure */
#define PAC_NONSECA_RTC             (_U_(0x1) << PAC_NONSECA_RTC_Pos)
#define PAC_NONSECA_EIC_Pos         10           /**< \brief (PAC_NONSECA) EIC Non-Secure */
#define PAC_NONSECA_EIC             (_U_(0x1) << PAC_NONSECA_EIC_Pos)
#define PAC_NONSECA_FREQM_Pos       11           /**< \brief (PAC_NONSECA) FREQM Non-Secure */
#define PAC_NONSECA_FREQM           (_U_(0x1) << PAC_NONSECA_FREQM_Pos)
#define PAC_NONSECA_PORT_Pos        12           /**< \brief (PAC_NONSECA) PORT Non-Secure */
#define PAC_NONSECA_PORT            (_U_(0x1) << PAC_NONSECA_PORT_Pos)
#define PAC_NONSECA_AC_Pos          13           /**< \brief (PAC_NONSECA) AC Non-Secure */
#define PAC_NONSECA_AC              (_U_(0x1) << PAC_NONSECA_AC_Pos)
#define PAC_NONSECA_MASK            _U_(0x00003FFF) /**< \brief (PAC_NONSECA) MASK Register */

/* -------- PAC_NONSECB : (PAC Offset: 0x58) (R/  32) Peripheral non-secure status - Bridge B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDAU_:1;          /*!< bit:      0  IDAU Non-Secure                    */
    uint32_t DSU_:1;           /*!< bit:      1  DSU Non-Secure                     */
    uint32_t NVMCTRL_:1;       /*!< bit:      2  NVMCTRL Non-Secure                 */
    uint32_t DMAC_:1;          /*!< bit:      3  DMAC Non-Secure                    */
    uint32_t :28;              /*!< bit:  4..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_NONSECB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_NONSECB_OFFSET          0x58         /**< \brief (PAC_NONSECB offset) Peripheral non-secure status - Bridge B */
#define PAC_NONSECB_RESETVALUE      _U_(0x00000002) /**< \brief (PAC_NONSECB reset_value) Peripheral non-secure status - Bridge B */

#define PAC_NONSECB_IDAU_Pos        0            /**< \brief (PAC_NONSECB) IDAU Non-Secure */
#define PAC_NONSECB_IDAU            (_U_(0x1) << PAC_NONSECB_IDAU_Pos)
#define PAC_NONSECB_DSU_Pos         1            /**< \brief (PAC_NONSECB) DSU Non-Secure */
#define PAC_NONSECB_DSU             (_U_(0x1) << PAC_NONSECB_DSU_Pos)
#define PAC_NONSECB_NVMCTRL_Pos     2            /**< \brief (PAC_NONSECB) NVMCTRL Non-Secure */
#define PAC_NONSECB_NVMCTRL         (_U_(0x1) << PAC_NONSECB_NVMCTRL_Pos)
#define PAC_NONSECB_DMAC_Pos        3            /**< \brief (PAC_NONSECB) DMAC Non-Secure */
#define PAC_NONSECB_DMAC            (_U_(0x1) << PAC_NONSECB_DMAC_Pos)
#define PAC_NONSECB_MASK            _U_(0x0000000F) /**< \brief (PAC_NONSECB) MASK Register */

/* -------- PAC_NONSECC : (PAC Offset: 0x5C) (R/  32) Peripheral non-secure status - Bridge C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVSYS_:1;         /*!< bit:      0  EVSYS Non-Secure                   */
    uint32_t SERCOM0_:1;       /*!< bit:      1  SERCOM0 Non-Secure                 */
    uint32_t SERCOM1_:1;       /*!< bit:      2  SERCOM1 Non-Secure                 */
    uint32_t SERCOM2_:1;       /*!< bit:      3  SERCOM2 Non-Secure                 */
    uint32_t TC0_:1;           /*!< bit:      4  TC0 Non-Secure                     */
    uint32_t TC1_:1;           /*!< bit:      5  TC1 Non-Secure                     */
    uint32_t TC2_:1;           /*!< bit:      6  TC2 Non-Secure                     */
    uint32_t ADC_:1;           /*!< bit:      7  ADC Non-Secure                     */
    uint32_t DAC_:1;           /*!< bit:      8  DAC Non-Secure                     */
    uint32_t PTC_:1;           /*!< bit:      9  PTC Non-Secure                     */
    uint32_t TRNG_:1;          /*!< bit:     10  TRNG Non-Secure                    */
    uint32_t CCL_:1;           /*!< bit:     11  CCL Non-Secure                     */
    uint32_t OPAMP_:1;         /*!< bit:     12  OPAMP Non-Secure                   */
    uint32_t TRAM_:1;          /*!< bit:     13  TRAM Non-Secure                    */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_NONSECC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_NONSECC_OFFSET          0x5C         /**< \brief (PAC_NONSECC offset) Peripheral non-secure status - Bridge C */
#define PAC_NONSECC_RESETVALUE      _U_(0x00000000) /**< \brief (PAC_NONSECC reset_value) Peripheral non-secure status - Bridge C */

#define PAC_NONSECC_EVSYS_Pos       0            /**< \brief (PAC_NONSECC) EVSYS Non-Secure */
#define PAC_NONSECC_EVSYS           (_U_(0x1) << PAC_NONSECC_EVSYS_Pos)
#define PAC_NONSECC_SERCOM0_Pos     1            /**< \brief (PAC_NONSECC) SERCOM0 Non-Secure */
#define PAC_NONSECC_SERCOM0         (_U_(0x1) << PAC_NONSECC_SERCOM0_Pos)
#define PAC_NONSECC_SERCOM1_Pos     2            /**< \brief (PAC_NONSECC) SERCOM1 Non-Secure */
#define PAC_NONSECC_SERCOM1         (_U_(0x1) << PAC_NONSECC_SERCOM1_Pos)
#define PAC_NONSECC_SERCOM2_Pos     3            /**< \brief (PAC_NONSECC) SERCOM2 Non-Secure */
#define PAC_NONSECC_SERCOM2         (_U_(0x1) << PAC_NONSECC_SERCOM2_Pos)
#define PAC_NONSECC_TC0_Pos         4            /**< \brief (PAC_NONSECC) TC0 Non-Secure */
#define PAC_NONSECC_TC0             (_U_(0x1) << PAC_NONSECC_TC0_Pos)
#define PAC_NONSECC_TC1_Pos         5            /**< \brief (PAC_NONSECC) TC1 Non-Secure */
#define PAC_NONSECC_TC1             (_U_(0x1) << PAC_NONSECC_TC1_Pos)
#define PAC_NONSECC_TC2_Pos         6            /**< \brief (PAC_NONSECC) TC2 Non-Secure */
#define PAC_NONSECC_TC2             (_U_(0x1) << PAC_NONSECC_TC2_Pos)
#define PAC_NONSECC_ADC_Pos         7            /**< \brief (PAC_NONSECC) ADC Non-Secure */
#define PAC_NONSECC_ADC             (_U_(0x1) << PAC_NONSECC_ADC_Pos)
#define PAC_NONSECC_DAC_Pos         8            /**< \brief (PAC_NONSECC) DAC Non-Secure */
#define PAC_NONSECC_DAC             (_U_(0x1) << PAC_NONSECC_DAC_Pos)
#define PAC_NONSECC_PTC_Pos         9            /**< \brief (PAC_NONSECC) PTC Non-Secure */
#define PAC_NONSECC_PTC             (_U_(0x1) << PAC_NONSECC_PTC_Pos)
#define PAC_NONSECC_TRNG_Pos        10           /**< \brief (PAC_NONSECC) TRNG Non-Secure */
#define PAC_NONSECC_TRNG            (_U_(0x1) << PAC_NONSECC_TRNG_Pos)
#define PAC_NONSECC_CCL_Pos         11           /**< \brief (PAC_NONSECC) CCL Non-Secure */
#define PAC_NONSECC_CCL             (_U_(0x1) << PAC_NONSECC_CCL_Pos)
#define PAC_NONSECC_OPAMP_Pos       12           /**< \brief (PAC_NONSECC) OPAMP Non-Secure */
#define PAC_NONSECC_OPAMP           (_U_(0x1) << PAC_NONSECC_OPAMP_Pos)
#define PAC_NONSECC_TRAM_Pos        13           /**< \brief (PAC_NONSECC) TRAM Non-Secure */
#define PAC_NONSECC_TRAM            (_U_(0x1) << PAC_NONSECC_TRAM_Pos)
#define PAC_NONSECC_MASK            _U_(0x00003FFF) /**< \brief (PAC_NONSECC) MASK Register */

/* -------- PAC_SECLOCKA : (PAC Offset: 0x74) (R/  32) Peripheral secure status locked - Bridge A -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t PAC:1;            /*!< bit:      0  PAC Secure Status Locked           */
    uint32_t PM:1;             /*!< bit:      1  PM Secure Status Locked            */
    uint32_t MCLK:1;           /*!< bit:      2  MCLK Secure Status Locked          */
    uint32_t RSTC:1;           /*!< bit:      3  RSTC Secure Status Locked          */
    uint32_t OSCCTRL:1;        /*!< bit:      4  OSCCTRL Secure Status Locked       */
    uint32_t OSC32KCTRL:1;     /*!< bit:      5  OSC32KCTRL Secure Status Locked    */
    uint32_t SUPC:1;           /*!< bit:      6  SUPC Secure Status Locked          */
    uint32_t GCLK:1;           /*!< bit:      7  GCLK Secure Status Locked          */
    uint32_t WDT:1;            /*!< bit:      8  WDT Secure Status Locked           */
    uint32_t RTC:1;            /*!< bit:      9  RTC Secure Status Locked           */
    uint32_t EIC:1;            /*!< bit:     10  EIC Secure Status Locked           */
    uint32_t FREQM:1;          /*!< bit:     11  FREQM Secure Status Locked         */
    uint32_t PORT:1;           /*!< bit:     12  PORT Secure Status Locked          */
    uint32_t AC:1;             /*!< bit:     13  AC Secure Status Locked            */
    uint32_t DSUSTANDBY:1;     /*!< bit:     14  DSUSTANDBY Secure Status Locked    */
    uint32_t ATW:1;            /*!< bit:     15  ATW Secure Status Locked           */
    uint32_t :16;              /*!< bit: 16..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_SECLOCKA_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_SECLOCKA_OFFSET         0x74         /**< \brief (PAC_SECLOCKA offset) Peripheral secure status locked - Bridge A */
#define PAC_SECLOCKA_RESETVALUE     _U_(0x00000000) /**< \brief (PAC_SECLOCKA reset_value) Peripheral secure status locked - Bridge A */

#define PAC_SECLOCKA_PAC_Pos        0            /**< \brief (PAC_SECLOCKA) PAC Secure Status Locked */
#define PAC_SECLOCKA_PAC            (_U_(0x1) << PAC_SECLOCKA_PAC_Pos)
#define PAC_SECLOCKA_PM_Pos         1            /**< \brief (PAC_SECLOCKA) PM Secure Status Locked */
#define PAC_SECLOCKA_PM             (_U_(0x1) << PAC_SECLOCKA_PM_Pos)
#define PAC_SECLOCKA_MCLK_Pos       2            /**< \brief (PAC_SECLOCKA) MCLK Secure Status Locked */
#define PAC_SECLOCKA_MCLK           (_U_(0x1) << PAC_SECLOCKA_MCLK_Pos)
#define PAC_SECLOCKA_RSTC_Pos       3            /**< \brief (PAC_SECLOCKA) RSTC Secure Status Locked */
#define PAC_SECLOCKA_RSTC           (_U_(0x1) << PAC_SECLOCKA_RSTC_Pos)
#define PAC_SECLOCKA_OSCCTRL_Pos    4            /**< \brief (PAC_SECLOCKA) OSCCTRL Secure Status Locked */
#define PAC_SECLOCKA_OSCCTRL        (_U_(0x1) << PAC_SECLOCKA_OSCCTRL_Pos)
#define PAC_SECLOCKA_OSC32KCTRL_Pos 5            /**< \brief (PAC_SECLOCKA) OSC32KCTRL Secure Status Locked */
#define PAC_SECLOCKA_OSC32KCTRL     (_U_(0x1) << PAC_SECLOCKA_OSC32KCTRL_Pos)
#define PAC_SECLOCKA_SUPC_Pos       6            /**< \brief (PAC_SECLOCKA) SUPC Secure Status Locked */
#define PAC_SECLOCKA_SUPC           (_U_(0x1) << PAC_SECLOCKA_SUPC_Pos)
#define PAC_SECLOCKA_GCLK_Pos       7            /**< \brief (PAC_SECLOCKA) GCLK Secure Status Locked */
#define PAC_SECLOCKA_GCLK           (_U_(0x1) << PAC_SECLOCKA_GCLK_Pos)
#define PAC_SECLOCKA_WDT_Pos        8            /**< \brief (PAC_SECLOCKA) WDT Secure Status Locked */
#define PAC_SECLOCKA_WDT            (_U_(0x1) << PAC_SECLOCKA_WDT_Pos)
#define PAC_SECLOCKA_RTC_Pos        9            /**< \brief (PAC_SECLOCKA) RTC Secure Status Locked */
#define PAC_SECLOCKA_RTC            (_U_(0x1) << PAC_SECLOCKA_RTC_Pos)
#define PAC_SECLOCKA_EIC_Pos        10           /**< \brief (PAC_SECLOCKA) EIC Secure Status Locked */
#define PAC_SECLOCKA_EIC            (_U_(0x1) << PAC_SECLOCKA_EIC_Pos)
#define PAC_SECLOCKA_FREQM_Pos      11           /**< \brief (PAC_SECLOCKA) FREQM Secure Status Locked */
#define PAC_SECLOCKA_FREQM          (_U_(0x1) << PAC_SECLOCKA_FREQM_Pos)
#define PAC_SECLOCKA_PORT_Pos       12           /**< \brief (PAC_SECLOCKA) PORT Secure Status Locked */
#define PAC_SECLOCKA_PORT           (_U_(0x1) << PAC_SECLOCKA_PORT_Pos)
#define PAC_SECLOCKA_AC_Pos         13           /**< \brief (PAC_SECLOCKA) AC Secure Status Locked */
#define PAC_SECLOCKA_AC             (_U_(0x1) << PAC_SECLOCKA_AC_Pos)
#define PAC_SECLOCKA_DSUSTANDBY_Pos 14           /**< \brief (PAC_SECLOCKA) DSUSTANDBY Secure Status Locked */
#define PAC_SECLOCKA_DSUSTANDBY     (_U_(0x1) << PAC_SECLOCKA_DSUSTANDBY_Pos)
#define PAC_SECLOCKA_ATW_Pos        15           /**< \brief (PAC_SECLOCKA) ATW Secure Status Locked */
#define PAC_SECLOCKA_ATW            (_U_(0x1) << PAC_SECLOCKA_ATW_Pos)
#define PAC_SECLOCKA_MASK           _U_(0x0000FFFF) /**< \brief (PAC_SECLOCKA) MASK Register */

/* -------- PAC_SECLOCKB : (PAC Offset: 0x78) (R/  32) Peripheral secure status locked - Bridge B -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t IDAU:1;           /*!< bit:      0  IDAU Secure Status Locked          */
    uint32_t DSU:1;            /*!< bit:      1  DSU Secure Status Locked           */
    uint32_t NVMCTRL:1;        /*!< bit:      2  NVMCTRL Secure Status Locked       */
    uint32_t DMAC:1;           /*!< bit:      3  DMAC Secure Status Locked          */
    uint32_t HMATRIXHS:1;      /*!< bit:      4  HMATRIXHS Secure Status Locked     */
    uint32_t :27;              /*!< bit:  5..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_SECLOCKB_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_SECLOCKB_OFFSET         0x78         /**< \brief (PAC_SECLOCKB offset) Peripheral secure status locked - Bridge B */
#define PAC_SECLOCKB_RESETVALUE     _U_(0x00000003) /**< \brief (PAC_SECLOCKB reset_value) Peripheral secure status locked - Bridge B */

#define PAC_SECLOCKB_IDAU_Pos       0            /**< \brief (PAC_SECLOCKB) IDAU Secure Status Locked */
#define PAC_SECLOCKB_IDAU           (_U_(0x1) << PAC_SECLOCKB_IDAU_Pos)
#define PAC_SECLOCKB_DSU_Pos        1            /**< \brief (PAC_SECLOCKB) DSU Secure Status Locked */
#define PAC_SECLOCKB_DSU            (_U_(0x1) << PAC_SECLOCKB_DSU_Pos)
#define PAC_SECLOCKB_NVMCTRL_Pos    2            /**< \brief (PAC_SECLOCKB) NVMCTRL Secure Status Locked */
#define PAC_SECLOCKB_NVMCTRL        (_U_(0x1) << PAC_SECLOCKB_NVMCTRL_Pos)
#define PAC_SECLOCKB_DMAC_Pos       3            /**< \brief (PAC_SECLOCKB) DMAC Secure Status Locked */
#define PAC_SECLOCKB_DMAC           (_U_(0x1) << PAC_SECLOCKB_DMAC_Pos)
#define PAC_SECLOCKB_HMATRIXHS_Pos  4            /**< \brief (PAC_SECLOCKB) HMATRIXHS Secure Status Locked */
#define PAC_SECLOCKB_HMATRIXHS      (_U_(0x1) << PAC_SECLOCKB_HMATRIXHS_Pos)
#define PAC_SECLOCKB_MASK           _U_(0x0000001F) /**< \brief (PAC_SECLOCKB) MASK Register */

/* -------- PAC_SECLOCKC : (PAC Offset: 0x7C) (R/  32) Peripheral secure status locked - Bridge C -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint32_t EVSYS:1;          /*!< bit:      0  EVSYS Secure Status Locked         */
    uint32_t SERCOM0:1;        /*!< bit:      1  SERCOM0 Secure Status Locked       */
    uint32_t SERCOM1:1;        /*!< bit:      2  SERCOM1 Secure Status Locked       */
    uint32_t SERCOM2:1;        /*!< bit:      3  SERCOM2 Secure Status Locked       */
    uint32_t TC0:1;            /*!< bit:      4  TC0 Secure Status Locked           */
    uint32_t TC1:1;            /*!< bit:      5  TC1 Secure Status Locked           */
    uint32_t TC2:1;            /*!< bit:      6  TC2 Secure Status Locked           */
    uint32_t ADC:1;            /*!< bit:      7  ADC Secure Status Locked           */
    uint32_t DAC:1;            /*!< bit:      8  DAC Secure Status Locked           */
    uint32_t PTC:1;            /*!< bit:      9  PTC Secure Status Locked           */
    uint32_t TRNG:1;           /*!< bit:     10  TRNG Secure Status Locked          */
    uint32_t CCL:1;            /*!< bit:     11  CCL Secure Status Locked           */
    uint32_t OPAMP:1;          /*!< bit:     12  OPAMP Secure Status Locked         */
    uint32_t TRAM:1;           /*!< bit:     13  TRAM Secure Status Locked          */
    uint32_t :18;              /*!< bit: 14..31  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint32_t reg;                /*!< Type      used for register access              */
} PAC_SECLOCKC_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PAC_SECLOCKC_OFFSET         0x7C         /**< \brief (PAC_SECLOCKC offset) Peripheral secure status locked - Bridge C */
#define PAC_SECLOCKC_RESETVALUE     _U_(0x00000000) /**< \brief (PAC_SECLOCKC reset_value) Peripheral secure status locked - Bridge C */

#define PAC_SECLOCKC_EVSYS_Pos      0            /**< \brief (PAC_SECLOCKC) EVSYS Secure Status Locked */
#define PAC_SECLOCKC_EVSYS          (_U_(0x1) << PAC_SECLOCKC_EVSYS_Pos)
#define PAC_SECLOCKC_SERCOM0_Pos    1            /**< \brief (PAC_SECLOCKC) SERCOM0 Secure Status Locked */
#define PAC_SECLOCKC_SERCOM0        (_U_(0x1) << PAC_SECLOCKC_SERCOM0_Pos)
#define PAC_SECLOCKC_SERCOM1_Pos    2            /**< \brief (PAC_SECLOCKC) SERCOM1 Secure Status Locked */
#define PAC_SECLOCKC_SERCOM1        (_U_(0x1) << PAC_SECLOCKC_SERCOM1_Pos)
#define PAC_SECLOCKC_SERCOM2_Pos    3            /**< \brief (PAC_SECLOCKC) SERCOM2 Secure Status Locked */
#define PAC_SECLOCKC_SERCOM2        (_U_(0x1) << PAC_SECLOCKC_SERCOM2_Pos)
#define PAC_SECLOCKC_TC0_Pos        4            /**< \brief (PAC_SECLOCKC) TC0 Secure Status Locked */
#define PAC_SECLOCKC_TC0            (_U_(0x1) << PAC_SECLOCKC_TC0_Pos)
#define PAC_SECLOCKC_TC1_Pos        5            /**< \brief (PAC_SECLOCKC) TC1 Secure Status Locked */
#define PAC_SECLOCKC_TC1            (_U_(0x1) << PAC_SECLOCKC_TC1_Pos)
#define PAC_SECLOCKC_TC2_Pos        6            /**< \brief (PAC_SECLOCKC) TC2 Secure Status Locked */
#define PAC_SECLOCKC_TC2            (_U_(0x1) << PAC_SECLOCKC_TC2_Pos)
#define PAC_SECLOCKC_ADC_Pos        7            /**< \brief (PAC_SECLOCKC) ADC Secure Status Locked */
#define PAC_SECLOCKC_ADC            (_U_(0x1) << PAC_SECLOCKC_ADC_Pos)
#define PAC_SECLOCKC_DAC_Pos        8            /**< \brief (PAC_SECLOCKC) DAC Secure Status Locked */
#define PAC_SECLOCKC_DAC            (_U_(0x1) << PAC_SECLOCKC_DAC_Pos)
#define PAC_SECLOCKC_PTC_Pos        9            /**< \brief (PAC_SECLOCKC) PTC Secure Status Locked */
#define PAC_SECLOCKC_PTC            (_U_(0x1) << PAC_SECLOCKC_PTC_Pos)
#define PAC_SECLOCKC_TRNG_Pos       10           /**< \brief (PAC_SECLOCKC) TRNG Secure Status Locked */
#define PAC_SECLOCKC_TRNG           (_U_(0x1) << PAC_SECLOCKC_TRNG_Pos)
#define PAC_SECLOCKC_CCL_Pos        11           /**< \brief (PAC_SECLOCKC) CCL Secure Status Locked */
#define PAC_SECLOCKC_CCL            (_U_(0x1) << PAC_SECLOCKC_CCL_Pos)
#define PAC_SECLOCKC_OPAMP_Pos      12           /**< \brief (PAC_SECLOCKC) OPAMP Secure Status Locked */
#define PAC_SECLOCKC_OPAMP          (_U_(0x1) << PAC_SECLOCKC_OPAMP_Pos)
#define PAC_SECLOCKC_TRAM_Pos       13           /**< \brief (PAC_SECLOCKC) TRAM Secure Status Locked */
#define PAC_SECLOCKC_TRAM           (_U_(0x1) << PAC_SECLOCKC_TRAM_Pos)
#define PAC_SECLOCKC_MASK           _U_(0x00003FFF) /**< \brief (PAC_SECLOCKC) MASK Register */

/** \brief PAC hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
  __IO PAC_WRCTRL_Type           WRCTRL;      /**< \brief Offset: 0x00 (R/W 32) Write control */
  __IO PAC_EVCTRL_Type           EVCTRL;      /**< \brief Offset: 0x04 (R/W  8) Event control */
       RoReg8                    Reserved1[0x3];
  __IO PAC_INTENCLR_Type         INTENCLR;    /**< \brief Offset: 0x08 (R/W  8) Interrupt enable clear */
  __IO PAC_INTENSET_Type         INTENSET;    /**< \brief Offset: 0x09 (R/W  8) Interrupt enable set */
       RoReg8                    Reserved2[0x6];
  __IO PAC_INTFLAGAHB_Type       INTFLAGAHB;  /**< \brief Offset: 0x10 (R/W 32) Bridge interrupt flag status */
  __IO PAC_INTFLAGA_Type         INTFLAGA;    /**< \brief Offset: 0x14 (R/W 32) Peripheral interrupt flag status - Bridge A */
  __IO PAC_INTFLAGB_Type         INTFLAGB;    /**< \brief Offset: 0x18 (R/W 32) Peripheral interrupt flag status - Bridge B */
  __IO PAC_INTFLAGC_Type         INTFLAGC;    /**< \brief Offset: 0x1C (R/W 32) Peripheral interrupt flag status - Bridge C */
       RoReg8                    Reserved3[0x14];
  __I  PAC_STATUSA_Type          STATUSA;     /**< \brief Offset: 0x34 (R/  32) Peripheral write protection status - Bridge A */
  __I  PAC_STATUSB_Type          STATUSB;     /**< \brief Offset: 0x38 (R/  32) Peripheral write protection status - Bridge B */
  __I  PAC_STATUSC_Type          STATUSC;     /**< \brief Offset: 0x3C (R/  32) Peripheral write protection status - Bridge C */
       RoReg8                    Reserved4[0x14];
  __I  PAC_NONSECA_Type          NONSECA;     /**< \brief Offset: 0x54 (R/  32) Peripheral non-secure status - Bridge A */
  __I  PAC_NONSECB_Type          NONSECB;     /**< \brief Offset: 0x58 (R/  32) Peripheral non-secure status - Bridge B */
  __I  PAC_NONSECC_Type          NONSECC;     /**< \brief Offset: 0x5C (R/  32) Peripheral non-secure status - Bridge C */
       RoReg8                    Reserved5[0x14];
  __I  PAC_SECLOCKA_Type         SECLOCKA;    /**< \brief Offset: 0x74 (R/  32) Peripheral secure status locked - Bridge A */
  __I  PAC_SECLOCKB_Type         SECLOCKB;    /**< \brief Offset: 0x78 (R/  32) Peripheral secure status locked - Bridge B */
  __I  PAC_SECLOCKC_Type         SECLOCKC;    /**< \brief Offset: 0x7C (R/  32) Peripheral secure status locked - Bridge C */
} Pac;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML11_PAC_COMPONENT_ */
