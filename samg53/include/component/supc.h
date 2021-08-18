/**
 * \file
 *
 * \brief Component description for SUPC
 *
 * Copyright (c) 2017 Atmel Corporation, a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \license_stop
 *
 */

/* file generated from device description version 2017-07-05T18:00:00Z */
#ifndef _SAMG53_SUPC_COMPONENT_H_
#define _SAMG53_SUPC_COMPONENT_H_
#define _SAMG53_SUPC_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMG_SAMG53 Supply Controller
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR SUPC */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define SUPC_11228                      /**< (SUPC) Module ID */
#define REV_SUPC E                      /**< (SUPC) Module revision */

/* -------- SUPC_CR : (SUPC Offset: 0x00) (/W 32) Supply Controller Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t ZERO:1;                    /**< bit:      2  This bit must always be written to 0.    */
    uint32_t XTALSEL:1;                 /**< bit:      3  Crystal Oscillator Select                */
    uint32_t :20;                       /**< bit:  4..23  Reserved */
    uint32_t KEY:8;                     /**< bit: 24..31  Password                                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SUPC_CR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_CR_OFFSET                      (0x00)                                        /**<  (SUPC_CR) Supply Controller Control Register  Offset */

#define SUPC_CR_ZERO_Pos                    2                                              /**< (SUPC_CR) This bit must always be written to 0. Position */
#define SUPC_CR_ZERO_Msk                    (_U_(0x1) << SUPC_CR_ZERO_Pos)                 /**< (SUPC_CR) This bit must always be written to 0. Mask */
#define SUPC_CR_ZERO                        SUPC_CR_ZERO_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_CR_ZERO_Msk instead */
#define SUPC_CR_XTALSEL_Pos                 3                                              /**< (SUPC_CR) Crystal Oscillator Select Position */
#define SUPC_CR_XTALSEL_Msk                 (_U_(0x1) << SUPC_CR_XTALSEL_Pos)              /**< (SUPC_CR) Crystal Oscillator Select Mask */
#define SUPC_CR_XTALSEL                     SUPC_CR_XTALSEL_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_CR_XTALSEL_Msk instead */
#define   SUPC_CR_XTALSEL_NO_EFFECT_Val     _U_(0x0)                                       /**< (SUPC_CR) No effect.  */
#define   SUPC_CR_XTALSEL_CRYSTAL_SEL_Val   _U_(0x1)                                       /**< (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output.  */
#define SUPC_CR_XTALSEL_NO_EFFECT           (SUPC_CR_XTALSEL_NO_EFFECT_Val << SUPC_CR_XTALSEL_Pos)  /**< (SUPC_CR) No effect. Position  */
#define SUPC_CR_XTALSEL_CRYSTAL_SEL         (SUPC_CR_XTALSEL_CRYSTAL_SEL_Val << SUPC_CR_XTALSEL_Pos)  /**< (SUPC_CR) If KEY is correct, switches the slow clock on the crystal oscillator output. Position  */
#define SUPC_CR_KEY_Pos                     24                                             /**< (SUPC_CR) Password Position */
#define SUPC_CR_KEY_Msk                     (_U_(0xFF) << SUPC_CR_KEY_Pos)                 /**< (SUPC_CR) Password Mask */
#define SUPC_CR_KEY(value)                  (SUPC_CR_KEY_Msk & ((value) << SUPC_CR_KEY_Pos))
#define   SUPC_CR_KEY_PASSWD_Val            _U_(0xA5)                                      /**< (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_CR_KEY_PASSWD                  (SUPC_CR_KEY_PASSWD_Val << SUPC_CR_KEY_Pos)    /**< (SUPC_CR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_CR_MASK                        _U_(0xFF00000C)                                /**< \deprecated (SUPC_CR) Register MASK  (Use SUPC_CR_Msk instead)  */
#define SUPC_CR_Msk                         _U_(0xFF00000C)                                /**< (SUPC_CR) Register Mask  */


/* -------- SUPC_SMMR : (SUPC Offset: 0x04) (R/W 32) Supply Controller Supply Monitor Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t SMTH:4;                    /**< bit:   0..3  Supply Monitor Threshold                 */
    uint32_t :4;                        /**< bit:   4..7  Reserved */
    uint32_t SMSMPL:3;                  /**< bit:  8..10  Supply Monitor Sampling Period           */
    uint32_t :1;                        /**< bit:     11  Reserved */
    uint32_t SMRSTEN:1;                 /**< bit:     12  Supply Monitor Reset Enable              */
    uint32_t SMIEN:1;                   /**< bit:     13  Supply Monitor Interrupt Enable          */
    uint32_t :18;                       /**< bit: 14..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SUPC_SMMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_SMMR_OFFSET                    (0x04)                                        /**<  (SUPC_SMMR) Supply Controller Supply Monitor Mode Register  Offset */

#define SUPC_SMMR_SMTH_Pos                  0                                              /**< (SUPC_SMMR) Supply Monitor Threshold Position */
#define SUPC_SMMR_SMTH_Msk                  (_U_(0xF) << SUPC_SMMR_SMTH_Pos)               /**< (SUPC_SMMR) Supply Monitor Threshold Mask */
#define SUPC_SMMR_SMTH(value)               (SUPC_SMMR_SMTH_Msk & ((value) << SUPC_SMMR_SMTH_Pos))
#define SUPC_SMMR_SMSMPL_Pos                8                                              /**< (SUPC_SMMR) Supply Monitor Sampling Period Position */
#define SUPC_SMMR_SMSMPL_Msk                (_U_(0x7) << SUPC_SMMR_SMSMPL_Pos)             /**< (SUPC_SMMR) Supply Monitor Sampling Period Mask */
#define SUPC_SMMR_SMSMPL(value)             (SUPC_SMMR_SMSMPL_Msk & ((value) << SUPC_SMMR_SMSMPL_Pos))
#define   SUPC_SMMR_SMSMPL_SMD_Val          _U_(0x0)                                       /**< (SUPC_SMMR) Supply Monitor disabled  */
#define   SUPC_SMMR_SMSMPL_CSM_Val          _U_(0x1)                                       /**< (SUPC_SMMR) Continuous Supply Monitor  */
#define   SUPC_SMMR_SMSMPL_32SLCK_Val       _U_(0x2)                                       /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_256SLCK_Val      _U_(0x3)                                       /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods  */
#define   SUPC_SMMR_SMSMPL_2048SLCK_Val     _U_(0x4)                                       /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods  */
#define SUPC_SMMR_SMSMPL_SMD                (SUPC_SMMR_SMSMPL_SMD_Val << SUPC_SMMR_SMSMPL_Pos)  /**< (SUPC_SMMR) Supply Monitor disabled Position  */
#define SUPC_SMMR_SMSMPL_CSM                (SUPC_SMMR_SMSMPL_CSM_Val << SUPC_SMMR_SMSMPL_Pos)  /**< (SUPC_SMMR) Continuous Supply Monitor Position  */
#define SUPC_SMMR_SMSMPL_32SLCK             (SUPC_SMMR_SMSMPL_32SLCK_Val << SUPC_SMMR_SMSMPL_Pos)  /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 32 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_256SLCK            (SUPC_SMMR_SMSMPL_256SLCK_Val << SUPC_SMMR_SMSMPL_Pos)  /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 256 SLCK periods Position  */
#define SUPC_SMMR_SMSMPL_2048SLCK           (SUPC_SMMR_SMSMPL_2048SLCK_Val << SUPC_SMMR_SMSMPL_Pos)  /**< (SUPC_SMMR) Supply Monitor enables one SLCK period every 2,048 SLCK periods Position  */
#define SUPC_SMMR_SMRSTEN_Pos               12                                             /**< (SUPC_SMMR) Supply Monitor Reset Enable Position */
#define SUPC_SMMR_SMRSTEN_Msk               (_U_(0x1) << SUPC_SMMR_SMRSTEN_Pos)            /**< (SUPC_SMMR) Supply Monitor Reset Enable Mask */
#define SUPC_SMMR_SMRSTEN                   SUPC_SMMR_SMRSTEN_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SMMR_SMRSTEN_Msk instead */
#define   SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val  _U_(0x0)                                       /**< (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMRSTEN_ENABLE_Val      _U_(0x1)                                       /**< (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMRSTEN_NOT_ENABLE        (SUPC_SMMR_SMRSTEN_NOT_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos)  /**< (SUPC_SMMR) The core reset signal vddcore_nreset is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMRSTEN_ENABLE            (SUPC_SMMR_SMRSTEN_ENABLE_Val << SUPC_SMMR_SMRSTEN_Pos)  /**< (SUPC_SMMR) The core reset signal vddcore_nreset is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_Pos                 13                                             /**< (SUPC_SMMR) Supply Monitor Interrupt Enable Position */
#define SUPC_SMMR_SMIEN_Msk                 (_U_(0x1) << SUPC_SMMR_SMIEN_Pos)              /**< (SUPC_SMMR) Supply Monitor Interrupt Enable Mask */
#define SUPC_SMMR_SMIEN                     SUPC_SMMR_SMIEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SMMR_SMIEN_Msk instead */
#define   SUPC_SMMR_SMIEN_NOT_ENABLE_Val    _U_(0x0)                                       /**< (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs.  */
#define   SUPC_SMMR_SMIEN_ENABLE_Val        _U_(0x1)                                       /**< (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs.  */
#define SUPC_SMMR_SMIEN_NOT_ENABLE          (SUPC_SMMR_SMIEN_NOT_ENABLE_Val << SUPC_SMMR_SMIEN_Pos)  /**< (SUPC_SMMR) The SUPC interrupt signal is not affected when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_SMIEN_ENABLE              (SUPC_SMMR_SMIEN_ENABLE_Val << SUPC_SMMR_SMIEN_Pos)  /**< (SUPC_SMMR) The SUPC interrupt signal is asserted when a supply monitor detection occurs. Position  */
#define SUPC_SMMR_MASK                      _U_(0x370F)                                    /**< \deprecated (SUPC_SMMR) Register MASK  (Use SUPC_SMMR_Msk instead)  */
#define SUPC_SMMR_Msk                       _U_(0x370F)                                    /**< (SUPC_SMMR) Register Mask  */


/* -------- SUPC_MR : (SUPC Offset: 0x08) (R/W 32) Supply Controller Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :12;                       /**< bit:  0..11  Reserved */
    uint32_t BODRSTEN:1;                /**< bit:     12  POR Core Reset Enable                    */
    uint32_t BODDIS:1;                  /**< bit:     13  POR Core Disable                         */
    uint32_t :6;                        /**< bit: 14..19  Reserved */
    uint32_t OSCBYPASS:1;               /**< bit:     20  Oscillator Bypass                        */
    uint32_t :1;                        /**< bit:     21  Reserved */
    uint32_t PSWITCH1:1;                /**< bit:     22  SRAM1 Power Switch                       */
    uint32_t PSWITCH2:1;                /**< bit:     23  SRAM2 Power Switch                       */
    uint32_t KEY:8;                     /**< bit: 24..31  Password Key                             */
  } bit;                                /**< Structure used for bit  access */
  struct {
    uint32_t :22;                       /**< bit:  0..21  Reserved */
    uint32_t PSWITCH:2;                 /**< bit: 22..23  SRAMx Power Switch                       */
    uint32_t :8;                        /**< bit: 24..31 Reserved */
  } vec;                                /**< Structure used for vec  access  */
  uint32_t reg;                         /**< Type used for register access */
} SUPC_MR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_MR_OFFSET                      (0x08)                                        /**<  (SUPC_MR) Supply Controller Mode Register  Offset */

#define SUPC_MR_BODRSTEN_Pos                12                                             /**< (SUPC_MR) POR Core Reset Enable Position */
#define SUPC_MR_BODRSTEN_Msk                (_U_(0x1) << SUPC_MR_BODRSTEN_Pos)             /**< (SUPC_MR) POR Core Reset Enable Mask */
#define SUPC_MR_BODRSTEN                    SUPC_MR_BODRSTEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_MR_BODRSTEN_Msk instead */
#define   SUPC_MR_BODRSTEN_NOT_ENABLE_Val   _U_(0x0)                                       /**< (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs.  */
#define   SUPC_MR_BODRSTEN_ENABLE_Val       _U_(0x1)                                       /**< (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs.  */
#define SUPC_MR_BODRSTEN_NOT_ENABLE         (SUPC_MR_BODRSTEN_NOT_ENABLE_Val << SUPC_MR_BODRSTEN_Pos)  /**< (SUPC_MR) The core reset signal vddcore_nreset is not affected when a brownout detection occurs. Position  */
#define SUPC_MR_BODRSTEN_ENABLE             (SUPC_MR_BODRSTEN_ENABLE_Val << SUPC_MR_BODRSTEN_Pos)  /**< (SUPC_MR) The core reset signal vddcore_nreset is asserted when a brownout detection occurs. Position  */
#define SUPC_MR_BODDIS_Pos                  13                                             /**< (SUPC_MR) POR Core Disable Position */
#define SUPC_MR_BODDIS_Msk                  (_U_(0x1) << SUPC_MR_BODDIS_Pos)               /**< (SUPC_MR) POR Core Disable Mask */
#define SUPC_MR_BODDIS                      SUPC_MR_BODDIS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_MR_BODDIS_Msk instead */
#define   SUPC_MR_BODDIS_ENABLE_Val         _U_(0x0)                                       /**< (SUPC_MR) The core brownout detector is enabled.  */
#define   SUPC_MR_BODDIS_DISABLE_Val        _U_(0x1)                                       /**< (SUPC_MR) The core brownout detector is disabled.  */
#define SUPC_MR_BODDIS_ENABLE               (SUPC_MR_BODDIS_ENABLE_Val << SUPC_MR_BODDIS_Pos)  /**< (SUPC_MR) The core brownout detector is enabled. Position  */
#define SUPC_MR_BODDIS_DISABLE              (SUPC_MR_BODDIS_DISABLE_Val << SUPC_MR_BODDIS_Pos)  /**< (SUPC_MR) The core brownout detector is disabled. Position  */
#define SUPC_MR_OSCBYPASS_Pos               20                                             /**< (SUPC_MR) Oscillator Bypass Position */
#define SUPC_MR_OSCBYPASS_Msk               (_U_(0x1) << SUPC_MR_OSCBYPASS_Pos)            /**< (SUPC_MR) Oscillator Bypass Mask */
#define SUPC_MR_OSCBYPASS                   SUPC_MR_OSCBYPASS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_MR_OSCBYPASS_Msk instead */
#define   SUPC_MR_OSCBYPASS_NO_EFFECT_Val   _U_(0x0)                                       /**< (SUPC_MR) No effect. Clock selection depends on XTALSEL value.  */
#define   SUPC_MR_OSCBYPASS_BYPASS_Val      _U_(0x1)                                       /**< (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1.  */
#define SUPC_MR_OSCBYPASS_NO_EFFECT         (SUPC_MR_OSCBYPASS_NO_EFFECT_Val << SUPC_MR_OSCBYPASS_Pos)  /**< (SUPC_MR) No effect. Clock selection depends on XTALSEL value. Position  */
#define SUPC_MR_OSCBYPASS_BYPASS            (SUPC_MR_OSCBYPASS_BYPASS_Val << SUPC_MR_OSCBYPASS_Pos)  /**< (SUPC_MR) The 32 kHz crystal oscillator is bypassed if XTALSEL=1. OSCBYPASS must be set prior to write XTALSEL=1. Position  */
#define SUPC_MR_PSWITCH1_Pos                22                                             /**< (SUPC_MR) SRAM1 Power Switch Position */
#define SUPC_MR_PSWITCH1_Msk                (_U_(0x1) << SUPC_MR_PSWITCH1_Pos)             /**< (SUPC_MR) SRAM1 Power Switch Mask */
#define SUPC_MR_PSWITCH1                    SUPC_MR_PSWITCH1_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_MR_PSWITCH1_Msk instead */
#define   SUPC_MR_PSWITCH1_OFF_Val          _U_(0x0)                                       /**< (SUPC_MR) The SRAM1 is not powered.  */
#define   SUPC_MR_PSWITCH1_ON_Val           _U_(0x1)                                       /**< (SUPC_MR) The SRAM1 is powered.  */
#define SUPC_MR_PSWITCH1_OFF                (SUPC_MR_PSWITCH1_OFF_Val << SUPC_MR_PSWITCH1_Pos)  /**< (SUPC_MR) The SRAM1 is not powered. Position  */
#define SUPC_MR_PSWITCH1_ON                 (SUPC_MR_PSWITCH1_ON_Val << SUPC_MR_PSWITCH1_Pos)  /**< (SUPC_MR) The SRAM1 is powered. Position  */
#define SUPC_MR_PSWITCH2_Pos                23                                             /**< (SUPC_MR) SRAM2 Power Switch Position */
#define SUPC_MR_PSWITCH2_Msk                (_U_(0x1) << SUPC_MR_PSWITCH2_Pos)             /**< (SUPC_MR) SRAM2 Power Switch Mask */
#define SUPC_MR_PSWITCH2                    SUPC_MR_PSWITCH2_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_MR_PSWITCH2_Msk instead */
#define   SUPC_MR_PSWITCH2_OFF_Val          _U_(0x0)                                       /**< (SUPC_MR) The SRAM2 is not powered.  */
#define   SUPC_MR_PSWITCH2_ON_Val           _U_(0x1)                                       /**< (SUPC_MR) The SRAM2 is powered.  */
#define SUPC_MR_PSWITCH2_OFF                (SUPC_MR_PSWITCH2_OFF_Val << SUPC_MR_PSWITCH2_Pos)  /**< (SUPC_MR) The SRAM2 is not powered. Position  */
#define SUPC_MR_PSWITCH2_ON                 (SUPC_MR_PSWITCH2_ON_Val << SUPC_MR_PSWITCH2_Pos)  /**< (SUPC_MR) The SRAM2 is powered. Position  */
#define SUPC_MR_KEY_Pos                     24                                             /**< (SUPC_MR) Password Key Position */
#define SUPC_MR_KEY_Msk                     (_U_(0xFF) << SUPC_MR_KEY_Pos)                 /**< (SUPC_MR) Password Key Mask */
#define SUPC_MR_KEY(value)                  (SUPC_MR_KEY_Msk & ((value) << SUPC_MR_KEY_Pos))
#define   SUPC_MR_KEY_PASSWD_Val            _U_(0xA5)                                      /**< (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define SUPC_MR_KEY_PASSWD                  (SUPC_MR_KEY_PASSWD_Val << SUPC_MR_KEY_Pos)    /**< (SUPC_MR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define SUPC_MR_MASK                        _U_(0xFFD03000)                                /**< \deprecated (SUPC_MR) Register MASK  (Use SUPC_MR_Msk instead)  */
#define SUPC_MR_Msk                         _U_(0xFFD03000)                                /**< (SUPC_MR) Register Mask  */

#define SUPC_MR_PSWITCH_Pos                 22                                             /**< (SUPC_MR Position) SRAMx Power Switch */
#define SUPC_MR_PSWITCH_Msk                 (_U_(0x3) << SUPC_MR_PSWITCH_Pos)              /**< (SUPC_MR Mask) PSWITCH */
#define SUPC_MR_PSWITCH(value)              (SUPC_MR_PSWITCH_Msk & ((value) << SUPC_MR_PSWITCH_Pos))  

/* -------- SUPC_SR : (SUPC Offset: 0x14) (R/ 32) Supply Controller Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :3;                        /**< bit:   0..2  Reserved */
    uint32_t BODRSTS:1;                 /**< bit:      3  Brownout Detector Reset Status (cleared on read) */
    uint32_t SMRSTS:1;                  /**< bit:      4  Supply Monitor Reset Status (cleared on read) */
    uint32_t SMS:1;                     /**< bit:      5  Supply Monitor Status (cleared on read)  */
    uint32_t SMOS:1;                    /**< bit:      6  Supply Monitor Output Status             */
    uint32_t OSCSEL:1;                  /**< bit:      7  32-kHz Oscillator Selection Status       */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} SUPC_SR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define SUPC_SR_OFFSET                      (0x14)                                        /**<  (SUPC_SR) Supply Controller Status Register  Offset */

#define SUPC_SR_BODRSTS_Pos                 3                                              /**< (SUPC_SR) Brownout Detector Reset Status (cleared on read) Position */
#define SUPC_SR_BODRSTS_Msk                 (_U_(0x1) << SUPC_SR_BODRSTS_Pos)              /**< (SUPC_SR) Brownout Detector Reset Status (cleared on read) Mask */
#define SUPC_SR_BODRSTS                     SUPC_SR_BODRSTS_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SR_BODRSTS_Msk instead */
#define   SUPC_SR_BODRSTS_NO_Val            _U_(0x0)                                       /**< (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR.  */
#define   SUPC_SR_BODRSTS_PRESENT_Val       _U_(0x1)                                       /**< (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR.  */
#define SUPC_SR_BODRSTS_NO                  (SUPC_SR_BODRSTS_NO_Val << SUPC_SR_BODRSTS_Pos)  /**< (SUPC_SR) No core brownout rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_BODRSTS_PRESENT             (SUPC_SR_BODRSTS_PRESENT_Val << SUPC_SR_BODRSTS_Pos)  /**< (SUPC_SR) At least one brownout output rising edge event has been detected since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_Pos                  4                                              /**< (SUPC_SR) Supply Monitor Reset Status (cleared on read) Position */
#define SUPC_SR_SMRSTS_Msk                  (_U_(0x1) << SUPC_SR_SMRSTS_Pos)               /**< (SUPC_SR) Supply Monitor Reset Status (cleared on read) Mask */
#define SUPC_SR_SMRSTS                      SUPC_SR_SMRSTS_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SR_SMRSTS_Msk instead */
#define   SUPC_SR_SMRSTS_NO_Val             _U_(0x0)                                       /**< (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define   SUPC_SR_SMRSTS_PRESENT_Val        _U_(0x1)                                       /**< (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR.  */
#define SUPC_SR_SMRSTS_NO                   (SUPC_SR_SMRSTS_NO_Val << SUPC_SR_SMRSTS_Pos)  /**< (SUPC_SR) No supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMRSTS_PRESENT              (SUPC_SR_SMRSTS_PRESENT_Val << SUPC_SR_SMRSTS_Pos)  /**< (SUPC_SR) At least one supply monitor detection has generated a core reset since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_Pos                     5                                              /**< (SUPC_SR) Supply Monitor Status (cleared on read) Position */
#define SUPC_SR_SMS_Msk                     (_U_(0x1) << SUPC_SR_SMS_Pos)                  /**< (SUPC_SR) Supply Monitor Status (cleared on read) Mask */
#define SUPC_SR_SMS                         SUPC_SR_SMS_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SR_SMS_Msk instead */
#define   SUPC_SR_SMS_NO_Val                _U_(0x0)                                       /**< (SUPC_SR) No supply monitor detection since the last read of SUPC_SR.  */
#define   SUPC_SR_SMS_PRESENT_Val           _U_(0x1)                                       /**< (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR.  */
#define SUPC_SR_SMS_NO                      (SUPC_SR_SMS_NO_Val << SUPC_SR_SMS_Pos)        /**< (SUPC_SR) No supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMS_PRESENT                 (SUPC_SR_SMS_PRESENT_Val << SUPC_SR_SMS_Pos)   /**< (SUPC_SR) At least one supply monitor detection since the last read of SUPC_SR. Position  */
#define SUPC_SR_SMOS_Pos                    6                                              /**< (SUPC_SR) Supply Monitor Output Status Position */
#define SUPC_SR_SMOS_Msk                    (_U_(0x1) << SUPC_SR_SMOS_Pos)                 /**< (SUPC_SR) Supply Monitor Output Status Mask */
#define SUPC_SR_SMOS                        SUPC_SR_SMOS_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SR_SMOS_Msk instead */
#define   SUPC_SR_SMOS_HIGH_Val             _U_(0x0)                                       /**< (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement.  */
#define   SUPC_SR_SMOS_LOW_Val              _U_(0x1)                                       /**< (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement.  */
#define SUPC_SR_SMOS_HIGH                   (SUPC_SR_SMOS_HIGH_Val << SUPC_SR_SMOS_Pos)    /**< (SUPC_SR) The supply monitor detected VDDIO higher than its threshold at its last measurement. Position  */
#define SUPC_SR_SMOS_LOW                    (SUPC_SR_SMOS_LOW_Val << SUPC_SR_SMOS_Pos)     /**< (SUPC_SR) The supply monitor detected VDDIO lower than its threshold at its last measurement. Position  */
#define SUPC_SR_OSCSEL_Pos                  7                                              /**< (SUPC_SR) 32-kHz Oscillator Selection Status Position */
#define SUPC_SR_OSCSEL_Msk                  (_U_(0x1) << SUPC_SR_OSCSEL_Pos)               /**< (SUPC_SR) 32-kHz Oscillator Selection Status Mask */
#define SUPC_SR_OSCSEL                      SUPC_SR_OSCSEL_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use SUPC_SR_OSCSEL_Msk instead */
#define   SUPC_SR_OSCSEL_RC_Val             _U_(0x0)                                       /**< (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator.  */
#define   SUPC_SR_OSCSEL_CRYST_Val          _U_(0x1)                                       /**< (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator.  */
#define SUPC_SR_OSCSEL_RC                   (SUPC_SR_OSCSEL_RC_Val << SUPC_SR_OSCSEL_Pos)  /**< (SUPC_SR) The slow clock SLCK is generated by the embedded 32 kHz RC oscillator. Position  */
#define SUPC_SR_OSCSEL_CRYST                (SUPC_SR_OSCSEL_CRYST_Val << SUPC_SR_OSCSEL_Pos)  /**< (SUPC_SR) The slow clock SLCK is generated by the 32 kHz crystal oscillator. Position  */
#define SUPC_SR_MASK                        _U_(0xF8)                                      /**< \deprecated (SUPC_SR) Register MASK  (Use SUPC_SR_Msk instead)  */
#define SUPC_SR_Msk                         _U_(0xF8)                                      /**< (SUPC_SR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief SUPC hardware registers */
typedef struct {  
  __O  uint32_t SUPC_CR;        /**< (SUPC Offset: 0x00) Supply Controller Control Register */
  __IO uint32_t SUPC_SMMR;      /**< (SUPC Offset: 0x04) Supply Controller Supply Monitor Mode Register */
  __IO uint32_t SUPC_MR;        /**< (SUPC Offset: 0x08) Supply Controller Mode Register */
  RoReg8  Reserved1[0x8];
  __I  uint32_t SUPC_SR;        /**< (SUPC Offset: 0x14) Supply Controller Status Register */
} Supc;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief SUPC hardware registers */
typedef struct {  
  __O  SUPC_CR_Type                   SUPC_CR;        /**< Offset: 0x00 ( /W  32) Supply Controller Control Register */
  __IO SUPC_SMMR_Type                 SUPC_SMMR;      /**< Offset: 0x04 (R/W  32) Supply Controller Supply Monitor Mode Register */
  __IO SUPC_MR_Type                   SUPC_MR;        /**< Offset: 0x08 (R/W  32) Supply Controller Mode Register */
  __I  uint32_t                       Reserved1[2];
  __I  SUPC_SR_Type                   SUPC_SR;        /**< Offset: 0x14 (R/   32) Supply Controller Status Register */
} Supc;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Supply Controller */

#endif /* _SAMG53_SUPC_COMPONENT_H_ */
