/**
 * \file
 *
 * \brief Component description for PM
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

#ifndef _SAML10_PM_COMPONENT_
#define _SAML10_PM_COMPONENT_

/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR PM */
/* ========================================================================== */
/** \addtogroup SAML10_PM Power Manager */
/*@{*/

#define PM_U2240
#define REV_PM                      0x310

/* -------- PM_SLEEPCFG : (PM Offset: 0x01) (R/W  8) Sleep Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  SLEEPMODE:3;      /*!< bit:  0.. 2  Sleep Mode                         */
    uint8_t  :5;               /*!< bit:  3.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_SLEEPCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_SLEEPCFG_OFFSET          0x01         /**< \brief (PM_SLEEPCFG offset) Sleep Configuration */
#define PM_SLEEPCFG_RESETVALUE      _U_(0x02)    /**< \brief (PM_SLEEPCFG reset_value) Sleep Configuration */

#define PM_SLEEPCFG_SLEEPMODE_Pos   0            /**< \brief (PM_SLEEPCFG) Sleep Mode */
#define PM_SLEEPCFG_SLEEPMODE_Msk   (_U_(0x7) << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE(value) (PM_SLEEPCFG_SLEEPMODE_Msk & ((value) << PM_SLEEPCFG_SLEEPMODE_Pos))
#define   PM_SLEEPCFG_SLEEPMODE_IDLE_Val  _U_(0x2)   /**< \brief (PM_SLEEPCFG) CPU, AHB, APB clocks are OFF */
#define   PM_SLEEPCFG_SLEEPMODE_STANDBY_Val _U_(0x4)   /**< \brief (PM_SLEEPCFG) All Clocks are OFF */
#define   PM_SLEEPCFG_SLEEPMODE_OFF_Val   _U_(0x6)   /**< \brief (PM_SLEEPCFG) All power domains are powered OFF */
#define PM_SLEEPCFG_SLEEPMODE_IDLE  (PM_SLEEPCFG_SLEEPMODE_IDLE_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_STANDBY (PM_SLEEPCFG_SLEEPMODE_STANDBY_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_SLEEPMODE_OFF   (PM_SLEEPCFG_SLEEPMODE_OFF_Val << PM_SLEEPCFG_SLEEPMODE_Pos)
#define PM_SLEEPCFG_MASK            _U_(0x07)    /**< \brief (PM_SLEEPCFG) MASK Register */

/* -------- PM_PLCFG : (PM Offset: 0x02) (R/W  8) Performance Level Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLSEL:2;          /*!< bit:  0.. 1  Performance Level Select           */
    uint8_t  :5;               /*!< bit:  2.. 6  Reserved                           */
    uint8_t  PLDIS:1;          /*!< bit:      7  Performance Level Disable          */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_PLCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PLCFG_OFFSET             0x02         /**< \brief (PM_PLCFG offset) Performance Level Configuration */
#define PM_PLCFG_RESETVALUE         _U_(0x00)    /**< \brief (PM_PLCFG reset_value) Performance Level Configuration */

#define PM_PLCFG_PLSEL_Pos          0            /**< \brief (PM_PLCFG) Performance Level Select */
#define PM_PLCFG_PLSEL_Msk          (_U_(0x3) << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLSEL(value)       (PM_PLCFG_PLSEL_Msk & ((value) << PM_PLCFG_PLSEL_Pos))
#define   PM_PLCFG_PLSEL_PL0_Val          _U_(0x0)   /**< \brief (PM_PLCFG) Performance Level 0 */
#define   PM_PLCFG_PLSEL_PL2_Val          _U_(0x2)   /**< \brief (PM_PLCFG) Performance Level 2 */
#define PM_PLCFG_PLSEL_PL0          (PM_PLCFG_PLSEL_PL0_Val        << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLSEL_PL2          (PM_PLCFG_PLSEL_PL2_Val        << PM_PLCFG_PLSEL_Pos)
#define PM_PLCFG_PLDIS_Pos          7            /**< \brief (PM_PLCFG) Performance Level Disable */
#define PM_PLCFG_PLDIS              (_U_(0x1) << PM_PLCFG_PLDIS_Pos)
#define PM_PLCFG_MASK               _U_(0x83)    /**< \brief (PM_PLCFG) MASK Register */

/* -------- PM_PWCFG : (PM Offset: 0x03) (R/W  8) Power Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  RAMPSWC:2;        /*!< bit:  0.. 1  RAM Power Switch Configuration     */
    uint8_t  :6;               /*!< bit:  2.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_PWCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_PWCFG_OFFSET             0x03         /**< \brief (PM_PWCFG offset) Power Configuration */
#define PM_PWCFG_RESETVALUE         _U_(0x00)    /**< \brief (PM_PWCFG reset_value) Power Configuration */

#define PM_PWCFG_RAMPSWC_Pos        0            /**< \brief (PM_PWCFG) RAM Power Switch Configuration */
#define PM_PWCFG_RAMPSWC_Msk        (_U_(0x3) << PM_PWCFG_RAMPSWC_Pos)
#define PM_PWCFG_RAMPSWC(value)     (PM_PWCFG_RAMPSWC_Msk & ((value) << PM_PWCFG_RAMPSWC_Pos))
#define   PM_PWCFG_RAMPSWC_16KB_Val       _U_(0x0)   /**< \brief (PM_PWCFG) 16KB Available */
#define   PM_PWCFG_RAMPSWC_12KB_Val       _U_(0x1)   /**< \brief (PM_PWCFG) 12KB Available */
#define   PM_PWCFG_RAMPSWC_8KB_Val        _U_(0x2)   /**< \brief (PM_PWCFG) 8KB Available */
#define   PM_PWCFG_RAMPSWC_4KB_Val        _U_(0x3)   /**< \brief (PM_PWCFG) 4KB Available */
#define PM_PWCFG_RAMPSWC_16KB       (PM_PWCFG_RAMPSWC_16KB_Val     << PM_PWCFG_RAMPSWC_Pos)
#define PM_PWCFG_RAMPSWC_12KB       (PM_PWCFG_RAMPSWC_12KB_Val     << PM_PWCFG_RAMPSWC_Pos)
#define PM_PWCFG_RAMPSWC_8KB        (PM_PWCFG_RAMPSWC_8KB_Val      << PM_PWCFG_RAMPSWC_Pos)
#define PM_PWCFG_RAMPSWC_4KB        (PM_PWCFG_RAMPSWC_4KB_Val      << PM_PWCFG_RAMPSWC_Pos)
#define PM_PWCFG_MASK               _U_(0x03)    /**< \brief (PM_PWCFG) MASK Register */

/* -------- PM_INTENCLR : (PM Offset: 0x04) (R/W  8) Interrupt Enable Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Interrupt Enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTENCLR_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENCLR_OFFSET          0x04         /**< \brief (PM_INTENCLR offset) Interrupt Enable Clear */
#define PM_INTENCLR_RESETVALUE      _U_(0x00)    /**< \brief (PM_INTENCLR reset_value) Interrupt Enable Clear */

#define PM_INTENCLR_PLRDY_Pos       0            /**< \brief (PM_INTENCLR) Performance Level Interrupt Enable */
#define PM_INTENCLR_PLRDY           (_U_(0x1) << PM_INTENCLR_PLRDY_Pos)
#define PM_INTENCLR_MASK            _U_(0x01)    /**< \brief (PM_INTENCLR) MASK Register */

/* -------- PM_INTENSET : (PM Offset: 0x05) (R/W  8) Interrupt Enable Set -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Ready interrupt Enable */
    uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTENSET_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTENSET_OFFSET          0x05         /**< \brief (PM_INTENSET offset) Interrupt Enable Set */
#define PM_INTENSET_RESETVALUE      _U_(0x00)    /**< \brief (PM_INTENSET reset_value) Interrupt Enable Set */

#define PM_INTENSET_PLRDY_Pos       0            /**< \brief (PM_INTENSET) Performance Level Ready interrupt Enable */
#define PM_INTENSET_PLRDY           (_U_(0x1) << PM_INTENSET_PLRDY_Pos)
#define PM_INTENSET_MASK            _U_(0x01)    /**< \brief (PM_INTENSET) MASK Register */

/* -------- PM_INTFLAG : (PM Offset: 0x06) (R/W  8) Interrupt Flag Status and Clear -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { // __I to avoid read-modify-write on write-to-clear register
  struct {
    __I uint8_t  PLRDY:1;          /*!< bit:      0  Performance Level Ready            */
    __I uint8_t  :7;               /*!< bit:  1.. 7  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint8_t reg;                 /*!< Type      used for register access              */
} PM_INTFLAG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_INTFLAG_OFFSET           0x06         /**< \brief (PM_INTFLAG offset) Interrupt Flag Status and Clear */
#define PM_INTFLAG_RESETVALUE       _U_(0x00)    /**< \brief (PM_INTFLAG reset_value) Interrupt Flag Status and Clear */

#define PM_INTFLAG_PLRDY_Pos        0            /**< \brief (PM_INTFLAG) Performance Level Ready */
#define PM_INTFLAG_PLRDY            (_U_(0x1) << PM_INTFLAG_PLRDY_Pos)
#define PM_INTFLAG_MASK             _U_(0x01)    /**< \brief (PM_INTFLAG) MASK Register */

/* -------- PM_STDBYCFG : (PM Offset: 0x08) (R/W 16) Standby Configuration -------- */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef union {
  struct {
    uint16_t PDCFG:1;          /*!< bit:      0  Power Domain Configuration         */
    uint16_t :3;               /*!< bit:  1.. 3  Reserved                           */
    uint16_t DPGPDSW:1;        /*!< bit:      4  Dynamic Power Gating for PDSW      */
    uint16_t :1;               /*!< bit:      5  Reserved                           */
    uint16_t VREGSMOD:2;       /*!< bit:  6.. 7  Voltage Regulator Standby mode     */
    uint16_t :2;               /*!< bit:  8.. 9  Reserved                           */
    uint16_t BBIASHS:1;        /*!< bit:     10  Back Bias for HSRAM                */
    uint16_t :1;               /*!< bit:     11  Reserved                           */
    uint16_t BBIASTR:1;        /*!< bit:     12  Back Bias for Trust RAM            */
    uint16_t :3;               /*!< bit: 13..15  Reserved                           */
  } bit;                       /*!< Structure used for bit  access                  */
  uint16_t reg;                /*!< Type      used for register access              */
} PM_STDBYCFG_Type;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

#define PM_STDBYCFG_OFFSET          0x08         /**< \brief (PM_STDBYCFG offset) Standby Configuration */
#define PM_STDBYCFG_RESETVALUE      _U_(0x0000)  /**< \brief (PM_STDBYCFG reset_value) Standby Configuration */

#define PM_STDBYCFG_PDCFG_Pos       0            /**< \brief (PM_STDBYCFG) Power Domain Configuration */
#define PM_STDBYCFG_PDCFG           (_U_(0x1) << PM_STDBYCFG_PDCFG_Pos)
#define   PM_STDBYCFG_PDCFG_DEFAULT_Val   _U_(0x0)   /**< \brief (PM_STDBYCFG) PDSW power domain switching is handled by hardware. */
#define   PM_STDBYCFG_PDCFG_PDSW_Val      _U_(0x1)   /**< \brief (PM_STDBYCFG) PDSW is forced ACTIVE. */
#define PM_STDBYCFG_PDCFG_DEFAULT   (PM_STDBYCFG_PDCFG_DEFAULT_Val << PM_STDBYCFG_PDCFG_Pos)
#define PM_STDBYCFG_PDCFG_PDSW      (PM_STDBYCFG_PDCFG_PDSW_Val    << PM_STDBYCFG_PDCFG_Pos)
#define PM_STDBYCFG_DPGPDSW_Pos     4            /**< \brief (PM_STDBYCFG) Dynamic Power Gating for PDSW */
#define PM_STDBYCFG_DPGPDSW         (_U_(0x1) << PM_STDBYCFG_DPGPDSW_Pos)
#define   PM_STDBYCFG_DPGPDSW_0_Val       _U_(0x0)   /**< \brief (PM_STDBYCFG) Dynamic Power Gating disabled */
#define   PM_STDBYCFG_DPGPDSW_1_Val       _U_(0x1)   /**< \brief (PM_STDBYCFG) Dynamic Power Gating enabled */
#define PM_STDBYCFG_DPGPDSW_0       (PM_STDBYCFG_DPGPDSW_0_Val     << PM_STDBYCFG_DPGPDSW_Pos)
#define PM_STDBYCFG_DPGPDSW_1       (PM_STDBYCFG_DPGPDSW_1_Val     << PM_STDBYCFG_DPGPDSW_Pos)
#define PM_STDBYCFG_VREGSMOD_Pos    6            /**< \brief (PM_STDBYCFG) Voltage Regulator Standby mode */
#define PM_STDBYCFG_VREGSMOD_Msk    (_U_(0x3) << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD(value) (PM_STDBYCFG_VREGSMOD_Msk & ((value) << PM_STDBYCFG_VREGSMOD_Pos))
#define   PM_STDBYCFG_VREGSMOD_AUTO_Val   _U_(0x0)   /**< \brief (PM_STDBYCFG) Automatic mode */
#define   PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val _U_(0x1)   /**< \brief (PM_STDBYCFG) Performance oriented */
#define   PM_STDBYCFG_VREGSMOD_LP_Val     _U_(0x2)   /**< \brief (PM_STDBYCFG) Low Power oriented */
#define PM_STDBYCFG_VREGSMOD_AUTO   (PM_STDBYCFG_VREGSMOD_AUTO_Val << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD_PERFORMANCE (PM_STDBYCFG_VREGSMOD_PERFORMANCE_Val << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_VREGSMOD_LP     (PM_STDBYCFG_VREGSMOD_LP_Val   << PM_STDBYCFG_VREGSMOD_Pos)
#define PM_STDBYCFG_BBIASHS_Pos     10           /**< \brief (PM_STDBYCFG) Back Bias for HSRAM */
#define PM_STDBYCFG_BBIASHS         (_U_(0x1) << PM_STDBYCFG_BBIASHS_Pos)
#define PM_STDBYCFG_BBIASTR_Pos     12           /**< \brief (PM_STDBYCFG) Back Bias for Trust RAM */
#define PM_STDBYCFG_BBIASTR         (_U_(0x1) << PM_STDBYCFG_BBIASTR_Pos)
#define PM_STDBYCFG_MASK            _U_(0x14D1)  /**< \brief (PM_STDBYCFG) MASK Register */

/** \brief PM hardware registers */
#if !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
typedef struct {
       RoReg8                    Reserved1[0x1];
  __IO PM_SLEEPCFG_Type          SLEEPCFG;    /**< \brief Offset: 0x01 (R/W  8) Sleep Configuration */
  __IO PM_PLCFG_Type             PLCFG;       /**< \brief Offset: 0x02 (R/W  8) Performance Level Configuration */
  __IO PM_PWCFG_Type             PWCFG;       /**< \brief Offset: 0x03 (R/W  8) Power Configuration */
  __IO PM_INTENCLR_Type          INTENCLR;    /**< \brief Offset: 0x04 (R/W  8) Interrupt Enable Clear */
  __IO PM_INTENSET_Type          INTENSET;    /**< \brief Offset: 0x05 (R/W  8) Interrupt Enable Set */
  __IO PM_INTFLAG_Type           INTFLAG;     /**< \brief Offset: 0x06 (R/W  8) Interrupt Flag Status and Clear */
       RoReg8                    Reserved2[0x1];
  __IO PM_STDBYCFG_Type          STDBYCFG;    /**< \brief Offset: 0x08 (R/W 16) Standby Configuration */
} Pm;
#endif /* !(defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/*@}*/

#endif /* _SAML10_PM_COMPONENT_ */
