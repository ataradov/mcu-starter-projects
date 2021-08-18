/**
 * \file
 *
 * \brief Component description for UART
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
#ifndef _SAMG53_UART_COMPONENT_H_
#define _SAMG53_UART_COMPONENT_H_
#define _SAMG53_UART_COMPONENT_         /**< \deprecated  Backward compatibility for ASF */

/** \addtogroup SAMG_SAMG53 Universal Asynchronous Receiver Transmitter
 *  @{
 */
/* ========================================================================== */
/**  SOFTWARE API DEFINITION FOR UART */
/* ========================================================================== */
#ifndef COMPONENT_TYPEDEF_STYLE
  #define COMPONENT_TYPEDEF_STYLE 'R'  /**< Defines default style of typedefs for the component header files ('R' = RFO, 'N' = NTO)*/
#endif

#define UART_6418                       /**< (UART) Module ID */
#define REV_UART N                      /**< (UART) Module revision */

/* -------- UART_CR : (UART Offset: 0x00) (/W 32) Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :2;                        /**< bit:   0..1  Reserved */
    uint32_t RSTRX:1;                   /**< bit:      2  Reset Receiver                           */
    uint32_t RSTTX:1;                   /**< bit:      3  Reset Transmitter                        */
    uint32_t RXEN:1;                    /**< bit:      4  Receiver Enable                          */
    uint32_t RXDIS:1;                   /**< bit:      5  Receiver Disable                         */
    uint32_t TXEN:1;                    /**< bit:      6  Transmitter Enable                       */
    uint32_t TXDIS:1;                   /**< bit:      7  Transmitter Disable                      */
    uint32_t RSTSTA:1;                  /**< bit:      8  Reset Status                             */
    uint32_t :3;                        /**< bit:  9..11  Reserved */
    uint32_t REQCLR:1;                  /**< bit:     12  Request Clear                            */
    uint32_t :19;                       /**< bit: 13..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_CR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_CR_OFFSET                      (0x00)                                        /**<  (UART_CR) Control Register  Offset */

#define UART_CR_RSTRX_Pos                   2                                              /**< (UART_CR) Reset Receiver Position */
#define UART_CR_RSTRX_Msk                   (_U_(0x1) << UART_CR_RSTRX_Pos)                /**< (UART_CR) Reset Receiver Mask */
#define UART_CR_RSTRX                       UART_CR_RSTRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_RSTRX_Msk instead */
#define UART_CR_RSTTX_Pos                   3                                              /**< (UART_CR) Reset Transmitter Position */
#define UART_CR_RSTTX_Msk                   (_U_(0x1) << UART_CR_RSTTX_Pos)                /**< (UART_CR) Reset Transmitter Mask */
#define UART_CR_RSTTX                       UART_CR_RSTTX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_RSTTX_Msk instead */
#define UART_CR_RXEN_Pos                    4                                              /**< (UART_CR) Receiver Enable Position */
#define UART_CR_RXEN_Msk                    (_U_(0x1) << UART_CR_RXEN_Pos)                 /**< (UART_CR) Receiver Enable Mask */
#define UART_CR_RXEN                        UART_CR_RXEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_RXEN_Msk instead */
#define UART_CR_RXDIS_Pos                   5                                              /**< (UART_CR) Receiver Disable Position */
#define UART_CR_RXDIS_Msk                   (_U_(0x1) << UART_CR_RXDIS_Pos)                /**< (UART_CR) Receiver Disable Mask */
#define UART_CR_RXDIS                       UART_CR_RXDIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_RXDIS_Msk instead */
#define UART_CR_TXEN_Pos                    6                                              /**< (UART_CR) Transmitter Enable Position */
#define UART_CR_TXEN_Msk                    (_U_(0x1) << UART_CR_TXEN_Pos)                 /**< (UART_CR) Transmitter Enable Mask */
#define UART_CR_TXEN                        UART_CR_TXEN_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_TXEN_Msk instead */
#define UART_CR_TXDIS_Pos                   7                                              /**< (UART_CR) Transmitter Disable Position */
#define UART_CR_TXDIS_Msk                   (_U_(0x1) << UART_CR_TXDIS_Pos)                /**< (UART_CR) Transmitter Disable Mask */
#define UART_CR_TXDIS                       UART_CR_TXDIS_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_TXDIS_Msk instead */
#define UART_CR_RSTSTA_Pos                  8                                              /**< (UART_CR) Reset Status Position */
#define UART_CR_RSTSTA_Msk                  (_U_(0x1) << UART_CR_RSTSTA_Pos)               /**< (UART_CR) Reset Status Mask */
#define UART_CR_RSTSTA                      UART_CR_RSTSTA_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_RSTSTA_Msk instead */
#define UART_CR_REQCLR_Pos                  12                                             /**< (UART_CR) Request Clear Position */
#define UART_CR_REQCLR_Msk                  (_U_(0x1) << UART_CR_REQCLR_Pos)               /**< (UART_CR) Request Clear Mask */
#define UART_CR_REQCLR                      UART_CR_REQCLR_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CR_REQCLR_Msk instead */
#define UART_CR_MASK                        _U_(0x11FC)                                    /**< \deprecated (UART_CR) Register MASK  (Use UART_CR_Msk instead)  */
#define UART_CR_Msk                         _U_(0x11FC)                                    /**< (UART_CR) Register Mask  */


/* -------- UART_MR : (UART Offset: 0x04) (R/W 32) Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t :4;                        /**< bit:   0..3  Reserved */
    uint32_t FILTER:1;                  /**< bit:      4  Receiver Digital Filter                  */
    uint32_t :4;                        /**< bit:   5..8  Reserved */
    uint32_t PAR:3;                     /**< bit:  9..11  Parity Type                              */
    uint32_t :2;                        /**< bit: 12..13  Reserved */
    uint32_t CHMODE:2;                  /**< bit: 14..15  Channel Mode                             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_MR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_MR_OFFSET                      (0x04)                                        /**<  (UART_MR) Mode Register  Offset */

#define UART_MR_FILTER_Pos                  4                                              /**< (UART_MR) Receiver Digital Filter Position */
#define UART_MR_FILTER_Msk                  (_U_(0x1) << UART_MR_FILTER_Pos)               /**< (UART_MR) Receiver Digital Filter Mask */
#define UART_MR_FILTER                      UART_MR_FILTER_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_MR_FILTER_Msk instead */
#define   UART_MR_FILTER_DISABLED_Val       _U_(0x0)                                       /**< (UART_MR) UART does not filter the receive line.  */
#define   UART_MR_FILTER_ENABLED_Val        _U_(0x1)                                       /**< (UART_MR) UART filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority).  */
#define UART_MR_FILTER_DISABLED             (UART_MR_FILTER_DISABLED_Val << UART_MR_FILTER_Pos)  /**< (UART_MR) UART does not filter the receive line. Position  */
#define UART_MR_FILTER_ENABLED              (UART_MR_FILTER_ENABLED_Val << UART_MR_FILTER_Pos)  /**< (UART_MR) UART filters the receive line using a three-sample filter (16x-bit clock) (2 over 3 majority). Position  */
#define UART_MR_PAR_Pos                     9                                              /**< (UART_MR) Parity Type Position */
#define UART_MR_PAR_Msk                     (_U_(0x7) << UART_MR_PAR_Pos)                  /**< (UART_MR) Parity Type Mask */
#define UART_MR_PAR(value)                  (UART_MR_PAR_Msk & ((value) << UART_MR_PAR_Pos))
#define   UART_MR_PAR_EVEN_Val              _U_(0x0)                                       /**< (UART_MR) Even Parity  */
#define   UART_MR_PAR_ODD_Val               _U_(0x1)                                       /**< (UART_MR) Odd Parity  */
#define   UART_MR_PAR_SPACE_Val             _U_(0x2)                                       /**< (UART_MR) Space: parity forced to 0  */
#define   UART_MR_PAR_MARK_Val              _U_(0x3)                                       /**< (UART_MR) Mark: parity forced to 1  */
#define   UART_MR_PAR_NO_Val                _U_(0x4)                                       /**< (UART_MR) No parity  */
#define UART_MR_PAR_EVEN                    (UART_MR_PAR_EVEN_Val << UART_MR_PAR_Pos)      /**< (UART_MR) Even Parity Position  */
#define UART_MR_PAR_ODD                     (UART_MR_PAR_ODD_Val << UART_MR_PAR_Pos)       /**< (UART_MR) Odd Parity Position  */
#define UART_MR_PAR_SPACE                   (UART_MR_PAR_SPACE_Val << UART_MR_PAR_Pos)     /**< (UART_MR) Space: parity forced to 0 Position  */
#define UART_MR_PAR_MARK                    (UART_MR_PAR_MARK_Val << UART_MR_PAR_Pos)      /**< (UART_MR) Mark: parity forced to 1 Position  */
#define UART_MR_PAR_NO                      (UART_MR_PAR_NO_Val << UART_MR_PAR_Pos)        /**< (UART_MR) No parity Position  */
#define UART_MR_CHMODE_Pos                  14                                             /**< (UART_MR) Channel Mode Position */
#define UART_MR_CHMODE_Msk                  (_U_(0x3) << UART_MR_CHMODE_Pos)               /**< (UART_MR) Channel Mode Mask */
#define UART_MR_CHMODE(value)               (UART_MR_CHMODE_Msk & ((value) << UART_MR_CHMODE_Pos))
#define   UART_MR_CHMODE_NORMAL_Val         _U_(0x0)                                       /**< (UART_MR) Normal mode  */
#define   UART_MR_CHMODE_AUTOMATIC_Val      _U_(0x1)                                       /**< (UART_MR) Automatic echo  */
#define   UART_MR_CHMODE_LOCAL_LOOPBACK_Val _U_(0x2)                                       /**< (UART_MR) Local loopback  */
#define   UART_MR_CHMODE_REMOTE_LOOPBACK_Val _U_(0x3)                                       /**< (UART_MR) Remote loopback  */
#define UART_MR_CHMODE_NORMAL               (UART_MR_CHMODE_NORMAL_Val << UART_MR_CHMODE_Pos)  /**< (UART_MR) Normal mode Position  */
#define UART_MR_CHMODE_AUTOMATIC            (UART_MR_CHMODE_AUTOMATIC_Val << UART_MR_CHMODE_Pos)  /**< (UART_MR) Automatic echo Position  */
#define UART_MR_CHMODE_LOCAL_LOOPBACK       (UART_MR_CHMODE_LOCAL_LOOPBACK_Val << UART_MR_CHMODE_Pos)  /**< (UART_MR) Local loopback Position  */
#define UART_MR_CHMODE_REMOTE_LOOPBACK      (UART_MR_CHMODE_REMOTE_LOOPBACK_Val << UART_MR_CHMODE_Pos)  /**< (UART_MR) Remote loopback Position  */
#define UART_MR_MASK                        _U_(0xCE10)                                    /**< \deprecated (UART_MR) Register MASK  (Use UART_MR_Msk instead)  */
#define UART_MR_Msk                         _U_(0xCE10)                                    /**< (UART_MR) Register Mask  */


/* -------- UART_IER : (UART Offset: 0x08) (/W 32) Interrupt Enable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  Enable RXRDY Interrupt                   */
    uint32_t TXRDY:1;                   /**< bit:      1  Enable TXRDY Interrupt                   */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t ENDRX:1;                   /**< bit:      3  Enable End of Receive Transfer Interrupt */
    uint32_t ENDTX:1;                   /**< bit:      4  Enable End of Transmit Interrupt         */
    uint32_t OVRE:1;                    /**< bit:      5  Enable Overrun Error Interrupt           */
    uint32_t FRAME:1;                   /**< bit:      6  Enable Framing Error Interrupt           */
    uint32_t PARE:1;                    /**< bit:      7  Enable Parity Error Interrupt            */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Enable TXEMPTY Interrupt                 */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXBUFE:1;                  /**< bit:     11  Enable Buffer Empty Interrupt            */
    uint32_t RXBUFF:1;                  /**< bit:     12  Enable Buffer Full Interrupt             */
    uint32_t :2;                        /**< bit: 13..14  Reserved */
    uint32_t CMP:1;                     /**< bit:     15  Enable Comparison Interrupt              */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_IER_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_IER_OFFSET                     (0x08)                                        /**<  (UART_IER) Interrupt Enable Register  Offset */

#define UART_IER_RXRDY_Pos                  0                                              /**< (UART_IER) Enable RXRDY Interrupt Position */
#define UART_IER_RXRDY_Msk                  (_U_(0x1) << UART_IER_RXRDY_Pos)               /**< (UART_IER) Enable RXRDY Interrupt Mask */
#define UART_IER_RXRDY                      UART_IER_RXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_RXRDY_Msk instead */
#define UART_IER_TXRDY_Pos                  1                                              /**< (UART_IER) Enable TXRDY Interrupt Position */
#define UART_IER_TXRDY_Msk                  (_U_(0x1) << UART_IER_TXRDY_Pos)               /**< (UART_IER) Enable TXRDY Interrupt Mask */
#define UART_IER_TXRDY                      UART_IER_TXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_TXRDY_Msk instead */
#define UART_IER_ENDRX_Pos                  3                                              /**< (UART_IER) Enable End of Receive Transfer Interrupt Position */
#define UART_IER_ENDRX_Msk                  (_U_(0x1) << UART_IER_ENDRX_Pos)               /**< (UART_IER) Enable End of Receive Transfer Interrupt Mask */
#define UART_IER_ENDRX                      UART_IER_ENDRX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_ENDRX_Msk instead */
#define UART_IER_ENDTX_Pos                  4                                              /**< (UART_IER) Enable End of Transmit Interrupt Position */
#define UART_IER_ENDTX_Msk                  (_U_(0x1) << UART_IER_ENDTX_Pos)               /**< (UART_IER) Enable End of Transmit Interrupt Mask */
#define UART_IER_ENDTX                      UART_IER_ENDTX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_ENDTX_Msk instead */
#define UART_IER_OVRE_Pos                   5                                              /**< (UART_IER) Enable Overrun Error Interrupt Position */
#define UART_IER_OVRE_Msk                   (_U_(0x1) << UART_IER_OVRE_Pos)                /**< (UART_IER) Enable Overrun Error Interrupt Mask */
#define UART_IER_OVRE                       UART_IER_OVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_OVRE_Msk instead */
#define UART_IER_FRAME_Pos                  6                                              /**< (UART_IER) Enable Framing Error Interrupt Position */
#define UART_IER_FRAME_Msk                  (_U_(0x1) << UART_IER_FRAME_Pos)               /**< (UART_IER) Enable Framing Error Interrupt Mask */
#define UART_IER_FRAME                      UART_IER_FRAME_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_FRAME_Msk instead */
#define UART_IER_PARE_Pos                   7                                              /**< (UART_IER) Enable Parity Error Interrupt Position */
#define UART_IER_PARE_Msk                   (_U_(0x1) << UART_IER_PARE_Pos)                /**< (UART_IER) Enable Parity Error Interrupt Mask */
#define UART_IER_PARE                       UART_IER_PARE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_PARE_Msk instead */
#define UART_IER_TXEMPTY_Pos                9                                              /**< (UART_IER) Enable TXEMPTY Interrupt Position */
#define UART_IER_TXEMPTY_Msk                (_U_(0x1) << UART_IER_TXEMPTY_Pos)             /**< (UART_IER) Enable TXEMPTY Interrupt Mask */
#define UART_IER_TXEMPTY                    UART_IER_TXEMPTY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_TXEMPTY_Msk instead */
#define UART_IER_TXBUFE_Pos                 11                                             /**< (UART_IER) Enable Buffer Empty Interrupt Position */
#define UART_IER_TXBUFE_Msk                 (_U_(0x1) << UART_IER_TXBUFE_Pos)              /**< (UART_IER) Enable Buffer Empty Interrupt Mask */
#define UART_IER_TXBUFE                     UART_IER_TXBUFE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_TXBUFE_Msk instead */
#define UART_IER_RXBUFF_Pos                 12                                             /**< (UART_IER) Enable Buffer Full Interrupt Position */
#define UART_IER_RXBUFF_Msk                 (_U_(0x1) << UART_IER_RXBUFF_Pos)              /**< (UART_IER) Enable Buffer Full Interrupt Mask */
#define UART_IER_RXBUFF                     UART_IER_RXBUFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_RXBUFF_Msk instead */
#define UART_IER_CMP_Pos                    15                                             /**< (UART_IER) Enable Comparison Interrupt Position */
#define UART_IER_CMP_Msk                    (_U_(0x1) << UART_IER_CMP_Pos)                 /**< (UART_IER) Enable Comparison Interrupt Mask */
#define UART_IER_CMP                        UART_IER_CMP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IER_CMP_Msk instead */
#define UART_IER_MASK                       _U_(0x9AFB)                                    /**< \deprecated (UART_IER) Register MASK  (Use UART_IER_Msk instead)  */
#define UART_IER_Msk                        _U_(0x9AFB)                                    /**< (UART_IER) Register Mask  */


/* -------- UART_IDR : (UART Offset: 0x0c) (/W 32) Interrupt Disable Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  Disable RXRDY Interrupt                  */
    uint32_t TXRDY:1;                   /**< bit:      1  Disable TXRDY Interrupt                  */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t ENDRX:1;                   /**< bit:      3  Disable End of Receive Transfer Interrupt */
    uint32_t ENDTX:1;                   /**< bit:      4  Disable End of Transmit Interrupt        */
    uint32_t OVRE:1;                    /**< bit:      5  Disable Overrun Error Interrupt          */
    uint32_t FRAME:1;                   /**< bit:      6  Disable Framing Error Interrupt          */
    uint32_t PARE:1;                    /**< bit:      7  Disable Parity Error Interrupt           */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Disable TXEMPTY Interrupt                */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXBUFE:1;                  /**< bit:     11  Disable Buffer Empty Interrupt           */
    uint32_t RXBUFF:1;                  /**< bit:     12  Disable Buffer Full Interrupt            */
    uint32_t :2;                        /**< bit: 13..14  Reserved */
    uint32_t CMP:1;                     /**< bit:     15  Disable Comparison Interrupt             */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_IDR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_IDR_OFFSET                     (0x0C)                                        /**<  (UART_IDR) Interrupt Disable Register  Offset */

#define UART_IDR_RXRDY_Pos                  0                                              /**< (UART_IDR) Disable RXRDY Interrupt Position */
#define UART_IDR_RXRDY_Msk                  (_U_(0x1) << UART_IDR_RXRDY_Pos)               /**< (UART_IDR) Disable RXRDY Interrupt Mask */
#define UART_IDR_RXRDY                      UART_IDR_RXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_RXRDY_Msk instead */
#define UART_IDR_TXRDY_Pos                  1                                              /**< (UART_IDR) Disable TXRDY Interrupt Position */
#define UART_IDR_TXRDY_Msk                  (_U_(0x1) << UART_IDR_TXRDY_Pos)               /**< (UART_IDR) Disable TXRDY Interrupt Mask */
#define UART_IDR_TXRDY                      UART_IDR_TXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_TXRDY_Msk instead */
#define UART_IDR_ENDRX_Pos                  3                                              /**< (UART_IDR) Disable End of Receive Transfer Interrupt Position */
#define UART_IDR_ENDRX_Msk                  (_U_(0x1) << UART_IDR_ENDRX_Pos)               /**< (UART_IDR) Disable End of Receive Transfer Interrupt Mask */
#define UART_IDR_ENDRX                      UART_IDR_ENDRX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_ENDRX_Msk instead */
#define UART_IDR_ENDTX_Pos                  4                                              /**< (UART_IDR) Disable End of Transmit Interrupt Position */
#define UART_IDR_ENDTX_Msk                  (_U_(0x1) << UART_IDR_ENDTX_Pos)               /**< (UART_IDR) Disable End of Transmit Interrupt Mask */
#define UART_IDR_ENDTX                      UART_IDR_ENDTX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_ENDTX_Msk instead */
#define UART_IDR_OVRE_Pos                   5                                              /**< (UART_IDR) Disable Overrun Error Interrupt Position */
#define UART_IDR_OVRE_Msk                   (_U_(0x1) << UART_IDR_OVRE_Pos)                /**< (UART_IDR) Disable Overrun Error Interrupt Mask */
#define UART_IDR_OVRE                       UART_IDR_OVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_OVRE_Msk instead */
#define UART_IDR_FRAME_Pos                  6                                              /**< (UART_IDR) Disable Framing Error Interrupt Position */
#define UART_IDR_FRAME_Msk                  (_U_(0x1) << UART_IDR_FRAME_Pos)               /**< (UART_IDR) Disable Framing Error Interrupt Mask */
#define UART_IDR_FRAME                      UART_IDR_FRAME_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_FRAME_Msk instead */
#define UART_IDR_PARE_Pos                   7                                              /**< (UART_IDR) Disable Parity Error Interrupt Position */
#define UART_IDR_PARE_Msk                   (_U_(0x1) << UART_IDR_PARE_Pos)                /**< (UART_IDR) Disable Parity Error Interrupt Mask */
#define UART_IDR_PARE                       UART_IDR_PARE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_PARE_Msk instead */
#define UART_IDR_TXEMPTY_Pos                9                                              /**< (UART_IDR) Disable TXEMPTY Interrupt Position */
#define UART_IDR_TXEMPTY_Msk                (_U_(0x1) << UART_IDR_TXEMPTY_Pos)             /**< (UART_IDR) Disable TXEMPTY Interrupt Mask */
#define UART_IDR_TXEMPTY                    UART_IDR_TXEMPTY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_TXEMPTY_Msk instead */
#define UART_IDR_TXBUFE_Pos                 11                                             /**< (UART_IDR) Disable Buffer Empty Interrupt Position */
#define UART_IDR_TXBUFE_Msk                 (_U_(0x1) << UART_IDR_TXBUFE_Pos)              /**< (UART_IDR) Disable Buffer Empty Interrupt Mask */
#define UART_IDR_TXBUFE                     UART_IDR_TXBUFE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_TXBUFE_Msk instead */
#define UART_IDR_RXBUFF_Pos                 12                                             /**< (UART_IDR) Disable Buffer Full Interrupt Position */
#define UART_IDR_RXBUFF_Msk                 (_U_(0x1) << UART_IDR_RXBUFF_Pos)              /**< (UART_IDR) Disable Buffer Full Interrupt Mask */
#define UART_IDR_RXBUFF                     UART_IDR_RXBUFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_RXBUFF_Msk instead */
#define UART_IDR_CMP_Pos                    15                                             /**< (UART_IDR) Disable Comparison Interrupt Position */
#define UART_IDR_CMP_Msk                    (_U_(0x1) << UART_IDR_CMP_Pos)                 /**< (UART_IDR) Disable Comparison Interrupt Mask */
#define UART_IDR_CMP                        UART_IDR_CMP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IDR_CMP_Msk instead */
#define UART_IDR_MASK                       _U_(0x9AFB)                                    /**< \deprecated (UART_IDR) Register MASK  (Use UART_IDR_Msk instead)  */
#define UART_IDR_Msk                        _U_(0x9AFB)                                    /**< (UART_IDR) Register Mask  */


/* -------- UART_IMR : (UART Offset: 0x10) (R/ 32) Interrupt Mask Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  Mask RXRDY Interrupt                     */
    uint32_t TXRDY:1;                   /**< bit:      1  Disable TXRDY Interrupt                  */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t ENDRX:1;                   /**< bit:      3  Mask End of Receive Transfer Interrupt   */
    uint32_t ENDTX:1;                   /**< bit:      4  Mask End of Transmit Interrupt           */
    uint32_t OVRE:1;                    /**< bit:      5  Mask Overrun Error Interrupt             */
    uint32_t FRAME:1;                   /**< bit:      6  Mask Framing Error Interrupt             */
    uint32_t PARE:1;                    /**< bit:      7  Mask Parity Error Interrupt              */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Mask TXEMPTY Interrupt                   */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXBUFE:1;                  /**< bit:     11  Mask TXBUFE Interrupt                    */
    uint32_t RXBUFF:1;                  /**< bit:     12  Mask RXBUFF Interrupt                    */
    uint32_t :2;                        /**< bit: 13..14  Reserved */
    uint32_t CMP:1;                     /**< bit:     15  Mask Comparison Interrupt                */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_IMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_IMR_OFFSET                     (0x10)                                        /**<  (UART_IMR) Interrupt Mask Register  Offset */

#define UART_IMR_RXRDY_Pos                  0                                              /**< (UART_IMR) Mask RXRDY Interrupt Position */
#define UART_IMR_RXRDY_Msk                  (_U_(0x1) << UART_IMR_RXRDY_Pos)               /**< (UART_IMR) Mask RXRDY Interrupt Mask */
#define UART_IMR_RXRDY                      UART_IMR_RXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_RXRDY_Msk instead */
#define UART_IMR_TXRDY_Pos                  1                                              /**< (UART_IMR) Disable TXRDY Interrupt Position */
#define UART_IMR_TXRDY_Msk                  (_U_(0x1) << UART_IMR_TXRDY_Pos)               /**< (UART_IMR) Disable TXRDY Interrupt Mask */
#define UART_IMR_TXRDY                      UART_IMR_TXRDY_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_TXRDY_Msk instead */
#define UART_IMR_ENDRX_Pos                  3                                              /**< (UART_IMR) Mask End of Receive Transfer Interrupt Position */
#define UART_IMR_ENDRX_Msk                  (_U_(0x1) << UART_IMR_ENDRX_Pos)               /**< (UART_IMR) Mask End of Receive Transfer Interrupt Mask */
#define UART_IMR_ENDRX                      UART_IMR_ENDRX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_ENDRX_Msk instead */
#define UART_IMR_ENDTX_Pos                  4                                              /**< (UART_IMR) Mask End of Transmit Interrupt Position */
#define UART_IMR_ENDTX_Msk                  (_U_(0x1) << UART_IMR_ENDTX_Pos)               /**< (UART_IMR) Mask End of Transmit Interrupt Mask */
#define UART_IMR_ENDTX                      UART_IMR_ENDTX_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_ENDTX_Msk instead */
#define UART_IMR_OVRE_Pos                   5                                              /**< (UART_IMR) Mask Overrun Error Interrupt Position */
#define UART_IMR_OVRE_Msk                   (_U_(0x1) << UART_IMR_OVRE_Pos)                /**< (UART_IMR) Mask Overrun Error Interrupt Mask */
#define UART_IMR_OVRE                       UART_IMR_OVRE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_OVRE_Msk instead */
#define UART_IMR_FRAME_Pos                  6                                              /**< (UART_IMR) Mask Framing Error Interrupt Position */
#define UART_IMR_FRAME_Msk                  (_U_(0x1) << UART_IMR_FRAME_Pos)               /**< (UART_IMR) Mask Framing Error Interrupt Mask */
#define UART_IMR_FRAME                      UART_IMR_FRAME_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_FRAME_Msk instead */
#define UART_IMR_PARE_Pos                   7                                              /**< (UART_IMR) Mask Parity Error Interrupt Position */
#define UART_IMR_PARE_Msk                   (_U_(0x1) << UART_IMR_PARE_Pos)                /**< (UART_IMR) Mask Parity Error Interrupt Mask */
#define UART_IMR_PARE                       UART_IMR_PARE_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_PARE_Msk instead */
#define UART_IMR_TXEMPTY_Pos                9                                              /**< (UART_IMR) Mask TXEMPTY Interrupt Position */
#define UART_IMR_TXEMPTY_Msk                (_U_(0x1) << UART_IMR_TXEMPTY_Pos)             /**< (UART_IMR) Mask TXEMPTY Interrupt Mask */
#define UART_IMR_TXEMPTY                    UART_IMR_TXEMPTY_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_TXEMPTY_Msk instead */
#define UART_IMR_TXBUFE_Pos                 11                                             /**< (UART_IMR) Mask TXBUFE Interrupt Position */
#define UART_IMR_TXBUFE_Msk                 (_U_(0x1) << UART_IMR_TXBUFE_Pos)              /**< (UART_IMR) Mask TXBUFE Interrupt Mask */
#define UART_IMR_TXBUFE                     UART_IMR_TXBUFE_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_TXBUFE_Msk instead */
#define UART_IMR_RXBUFF_Pos                 12                                             /**< (UART_IMR) Mask RXBUFF Interrupt Position */
#define UART_IMR_RXBUFF_Msk                 (_U_(0x1) << UART_IMR_RXBUFF_Pos)              /**< (UART_IMR) Mask RXBUFF Interrupt Mask */
#define UART_IMR_RXBUFF                     UART_IMR_RXBUFF_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_RXBUFF_Msk instead */
#define UART_IMR_CMP_Pos                    15                                             /**< (UART_IMR) Mask Comparison Interrupt Position */
#define UART_IMR_CMP_Msk                    (_U_(0x1) << UART_IMR_CMP_Pos)                 /**< (UART_IMR) Mask Comparison Interrupt Mask */
#define UART_IMR_CMP                        UART_IMR_CMP_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_IMR_CMP_Msk instead */
#define UART_IMR_MASK                       _U_(0x9AFB)                                    /**< \deprecated (UART_IMR) Register MASK  (Use UART_IMR_Msk instead)  */
#define UART_IMR_Msk                        _U_(0x9AFB)                                    /**< (UART_IMR) Register Mask  */


/* -------- UART_SR : (UART Offset: 0x14) (R/ 32) Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXRDY:1;                   /**< bit:      0  Receiver Ready                           */
    uint32_t TXRDY:1;                   /**< bit:      1  Transmitter Ready                        */
    uint32_t :1;                        /**< bit:      2  Reserved */
    uint32_t ENDRX:1;                   /**< bit:      3  End of Receiver Transfer                 */
    uint32_t ENDTX:1;                   /**< bit:      4  End of Transmitter Transfer              */
    uint32_t OVRE:1;                    /**< bit:      5  Overrun Error                            */
    uint32_t FRAME:1;                   /**< bit:      6  Framing Error                            */
    uint32_t PARE:1;                    /**< bit:      7  Parity Error                             */
    uint32_t :1;                        /**< bit:      8  Reserved */
    uint32_t TXEMPTY:1;                 /**< bit:      9  Transmitter Empty                        */
    uint32_t :1;                        /**< bit:     10  Reserved */
    uint32_t TXBUFE:1;                  /**< bit:     11  Transmission Buffer Empty                */
    uint32_t RXBUFF:1;                  /**< bit:     12  Receive Buffer Full                      */
    uint32_t :2;                        /**< bit: 13..14  Reserved */
    uint32_t CMP:1;                     /**< bit:     15  Comparison Match                         */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_SR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_SR_OFFSET                      (0x14)                                        /**<  (UART_SR) Status Register  Offset */

#define UART_SR_RXRDY_Pos                   0                                              /**< (UART_SR) Receiver Ready Position */
#define UART_SR_RXRDY_Msk                   (_U_(0x1) << UART_SR_RXRDY_Pos)                /**< (UART_SR) Receiver Ready Mask */
#define UART_SR_RXRDY                       UART_SR_RXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_RXRDY_Msk instead */
#define UART_SR_TXRDY_Pos                   1                                              /**< (UART_SR) Transmitter Ready Position */
#define UART_SR_TXRDY_Msk                   (_U_(0x1) << UART_SR_TXRDY_Pos)                /**< (UART_SR) Transmitter Ready Mask */
#define UART_SR_TXRDY                       UART_SR_TXRDY_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_TXRDY_Msk instead */
#define UART_SR_ENDRX_Pos                   3                                              /**< (UART_SR) End of Receiver Transfer Position */
#define UART_SR_ENDRX_Msk                   (_U_(0x1) << UART_SR_ENDRX_Pos)                /**< (UART_SR) End of Receiver Transfer Mask */
#define UART_SR_ENDRX                       UART_SR_ENDRX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_ENDRX_Msk instead */
#define UART_SR_ENDTX_Pos                   4                                              /**< (UART_SR) End of Transmitter Transfer Position */
#define UART_SR_ENDTX_Msk                   (_U_(0x1) << UART_SR_ENDTX_Pos)                /**< (UART_SR) End of Transmitter Transfer Mask */
#define UART_SR_ENDTX                       UART_SR_ENDTX_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_ENDTX_Msk instead */
#define UART_SR_OVRE_Pos                    5                                              /**< (UART_SR) Overrun Error Position */
#define UART_SR_OVRE_Msk                    (_U_(0x1) << UART_SR_OVRE_Pos)                 /**< (UART_SR) Overrun Error Mask */
#define UART_SR_OVRE                        UART_SR_OVRE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_OVRE_Msk instead */
#define UART_SR_FRAME_Pos                   6                                              /**< (UART_SR) Framing Error Position */
#define UART_SR_FRAME_Msk                   (_U_(0x1) << UART_SR_FRAME_Pos)                /**< (UART_SR) Framing Error Mask */
#define UART_SR_FRAME                       UART_SR_FRAME_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_FRAME_Msk instead */
#define UART_SR_PARE_Pos                    7                                              /**< (UART_SR) Parity Error Position */
#define UART_SR_PARE_Msk                    (_U_(0x1) << UART_SR_PARE_Pos)                 /**< (UART_SR) Parity Error Mask */
#define UART_SR_PARE                        UART_SR_PARE_Msk                               /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_PARE_Msk instead */
#define UART_SR_TXEMPTY_Pos                 9                                              /**< (UART_SR) Transmitter Empty Position */
#define UART_SR_TXEMPTY_Msk                 (_U_(0x1) << UART_SR_TXEMPTY_Pos)              /**< (UART_SR) Transmitter Empty Mask */
#define UART_SR_TXEMPTY                     UART_SR_TXEMPTY_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_TXEMPTY_Msk instead */
#define UART_SR_TXBUFE_Pos                  11                                             /**< (UART_SR) Transmission Buffer Empty Position */
#define UART_SR_TXBUFE_Msk                  (_U_(0x1) << UART_SR_TXBUFE_Pos)               /**< (UART_SR) Transmission Buffer Empty Mask */
#define UART_SR_TXBUFE                      UART_SR_TXBUFE_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_TXBUFE_Msk instead */
#define UART_SR_RXBUFF_Pos                  12                                             /**< (UART_SR) Receive Buffer Full Position */
#define UART_SR_RXBUFF_Msk                  (_U_(0x1) << UART_SR_RXBUFF_Pos)               /**< (UART_SR) Receive Buffer Full Mask */
#define UART_SR_RXBUFF                      UART_SR_RXBUFF_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_RXBUFF_Msk instead */
#define UART_SR_CMP_Pos                     15                                             /**< (UART_SR) Comparison Match Position */
#define UART_SR_CMP_Msk                     (_U_(0x1) << UART_SR_CMP_Pos)                  /**< (UART_SR) Comparison Match Mask */
#define UART_SR_CMP                         UART_SR_CMP_Msk                                /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_SR_CMP_Msk instead */
#define UART_SR_MASK                        _U_(0x9AFB)                                    /**< \deprecated (UART_SR) Register MASK  (Use UART_SR_Msk instead)  */
#define UART_SR_Msk                         _U_(0x9AFB)                                    /**< (UART_SR) Register Mask  */


/* -------- UART_RHR : (UART Offset: 0x18) (R/ 32) Receive Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXCHR:8;                   /**< bit:   0..7  Received Character                       */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_RHR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RHR_OFFSET                     (0x18)                                        /**<  (UART_RHR) Receive Holding Register  Offset */

#define UART_RHR_RXCHR_Pos                  0                                              /**< (UART_RHR) Received Character Position */
#define UART_RHR_RXCHR_Msk                  (_U_(0xFF) << UART_RHR_RXCHR_Pos)              /**< (UART_RHR) Received Character Mask */
#define UART_RHR_RXCHR(value)               (UART_RHR_RXCHR_Msk & ((value) << UART_RHR_RXCHR_Pos))
#define UART_RHR_MASK                       _U_(0xFF)                                      /**< \deprecated (UART_RHR) Register MASK  (Use UART_RHR_Msk instead)  */
#define UART_RHR_Msk                        _U_(0xFF)                                      /**< (UART_RHR) Register Mask  */


/* -------- UART_THR : (UART Offset: 0x1c) (/W 32) Transmit Holding Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TXCHR:8;                   /**< bit:   0..7  Character to be Transmitted              */
    uint32_t :24;                       /**< bit:  8..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_THR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_THR_OFFSET                     (0x1C)                                        /**<  (UART_THR) Transmit Holding Register  Offset */

#define UART_THR_TXCHR_Pos                  0                                              /**< (UART_THR) Character to be Transmitted Position */
#define UART_THR_TXCHR_Msk                  (_U_(0xFF) << UART_THR_TXCHR_Pos)              /**< (UART_THR) Character to be Transmitted Mask */
#define UART_THR_TXCHR(value)               (UART_THR_TXCHR_Msk & ((value) << UART_THR_TXCHR_Pos))
#define UART_THR_MASK                       _U_(0xFF)                                      /**< \deprecated (UART_THR) Register MASK  (Use UART_THR_Msk instead)  */
#define UART_THR_Msk                        _U_(0xFF)                                      /**< (UART_THR) Register Mask  */


/* -------- UART_BRGR : (UART Offset: 0x20) (R/W 32) Baud Rate Generator Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t CD:16;                     /**< bit:  0..15  Clock Divisor                            */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_BRGR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_BRGR_OFFSET                    (0x20)                                        /**<  (UART_BRGR) Baud Rate Generator Register  Offset */

#define UART_BRGR_CD_Pos                    0                                              /**< (UART_BRGR) Clock Divisor Position */
#define UART_BRGR_CD_Msk                    (_U_(0xFFFF) << UART_BRGR_CD_Pos)              /**< (UART_BRGR) Clock Divisor Mask */
#define UART_BRGR_CD(value)                 (UART_BRGR_CD_Msk & ((value) << UART_BRGR_CD_Pos))
#define UART_BRGR_MASK                      _U_(0xFFFF)                                    /**< \deprecated (UART_BRGR) Register MASK  (Use UART_BRGR_Msk instead)  */
#define UART_BRGR_Msk                       _U_(0xFFFF)                                    /**< (UART_BRGR) Register Mask  */


/* -------- UART_CMPR : (UART Offset: 0x24) (R/W 32) Comparison Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t VAL1:8;                    /**< bit:   0..7  First Comparison Value for Received Character */
    uint32_t :4;                        /**< bit:  8..11  Reserved */
    uint32_t CMPMODE:1;                 /**< bit:     12  Comparison Mode                          */
    uint32_t :1;                        /**< bit:     13  Reserved */
    uint32_t CMPPAR:1;                  /**< bit:     14  Compare Parity                           */
    uint32_t :1;                        /**< bit:     15  Reserved */
    uint32_t VAL2:8;                    /**< bit: 16..23  Second Comparison Value for Received Character */
    uint32_t :8;                        /**< bit: 24..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_CMPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_CMPR_OFFSET                    (0x24)                                        /**<  (UART_CMPR) Comparison Register  Offset */

#define UART_CMPR_VAL1_Pos                  0                                              /**< (UART_CMPR) First Comparison Value for Received Character Position */
#define UART_CMPR_VAL1_Msk                  (_U_(0xFF) << UART_CMPR_VAL1_Pos)              /**< (UART_CMPR) First Comparison Value for Received Character Mask */
#define UART_CMPR_VAL1(value)               (UART_CMPR_VAL1_Msk & ((value) << UART_CMPR_VAL1_Pos))
#define UART_CMPR_CMPMODE_Pos               12                                             /**< (UART_CMPR) Comparison Mode Position */
#define UART_CMPR_CMPMODE_Msk               (_U_(0x1) << UART_CMPR_CMPMODE_Pos)            /**< (UART_CMPR) Comparison Mode Mask */
#define UART_CMPR_CMPMODE                   UART_CMPR_CMPMODE_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CMPR_CMPMODE_Msk instead */
#define   UART_CMPR_CMPMODE_FLAG_ONLY_Val   _U_(0x0)                                       /**< (UART_CMPR) Any character is received and comparison function drives CMP flag.  */
#define   UART_CMPR_CMPMODE_START_CONDITION_Val _U_(0x1)                                       /**< (UART_CMPR) Comparison condition must be met to start reception.  */
#define UART_CMPR_CMPMODE_FLAG_ONLY         (UART_CMPR_CMPMODE_FLAG_ONLY_Val << UART_CMPR_CMPMODE_Pos)  /**< (UART_CMPR) Any character is received and comparison function drives CMP flag. Position  */
#define UART_CMPR_CMPMODE_START_CONDITION   (UART_CMPR_CMPMODE_START_CONDITION_Val << UART_CMPR_CMPMODE_Pos)  /**< (UART_CMPR) Comparison condition must be met to start reception. Position  */
#define UART_CMPR_CMPPAR_Pos                14                                             /**< (UART_CMPR) Compare Parity Position */
#define UART_CMPR_CMPPAR_Msk                (_U_(0x1) << UART_CMPR_CMPPAR_Pos)             /**< (UART_CMPR) Compare Parity Mask */
#define UART_CMPR_CMPPAR                    UART_CMPR_CMPPAR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_CMPR_CMPPAR_Msk instead */
#define UART_CMPR_VAL2_Pos                  16                                             /**< (UART_CMPR) Second Comparison Value for Received Character Position */
#define UART_CMPR_VAL2_Msk                  (_U_(0xFF) << UART_CMPR_VAL2_Pos)              /**< (UART_CMPR) Second Comparison Value for Received Character Mask */
#define UART_CMPR_VAL2(value)               (UART_CMPR_VAL2_Msk & ((value) << UART_CMPR_VAL2_Pos))
#define UART_CMPR_MASK                      _U_(0xFF50FF)                                  /**< \deprecated (UART_CMPR) Register MASK  (Use UART_CMPR_Msk instead)  */
#define UART_CMPR_Msk                       _U_(0xFF50FF)                                  /**< (UART_CMPR) Register Mask  */


/* -------- UART_WPMR : (UART Offset: 0xe4) (R/W 32) Write Protection Mode Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t WPEN:1;                    /**< bit:      0  Write Protection Enable                  */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t WPKEY:24;                  /**< bit:  8..31  Write Protection Key                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_WPMR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_WPMR_OFFSET                    (0xE4)                                        /**<  (UART_WPMR) Write Protection Mode Register  Offset */

#define UART_WPMR_WPEN_Pos                  0                                              /**< (UART_WPMR) Write Protection Enable Position */
#define UART_WPMR_WPEN_Msk                  (_U_(0x1) << UART_WPMR_WPEN_Pos)               /**< (UART_WPMR) Write Protection Enable Mask */
#define UART_WPMR_WPEN                      UART_WPMR_WPEN_Msk                             /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_WPMR_WPEN_Msk instead */
#define UART_WPMR_WPKEY_Pos                 8                                              /**< (UART_WPMR) Write Protection Key Position */
#define UART_WPMR_WPKEY_Msk                 (_U_(0xFFFFFF) << UART_WPMR_WPKEY_Pos)         /**< (UART_WPMR) Write Protection Key Mask */
#define UART_WPMR_WPKEY(value)              (UART_WPMR_WPKEY_Msk & ((value) << UART_WPMR_WPKEY_Pos))
#define   UART_WPMR_WPKEY_PASSWD_Val        _U_(0x554152)                                  /**< (UART_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0.  */
#define UART_WPMR_WPKEY_PASSWD              (UART_WPMR_WPKEY_PASSWD_Val << UART_WPMR_WPKEY_Pos)  /**< (UART_WPMR) Writing any other value in this field aborts the write operation.Always reads as 0. Position  */
#define UART_WPMR_MASK                      _U_(0xFFFFFF01)                                /**< \deprecated (UART_WPMR) Register MASK  (Use UART_WPMR_Msk instead)  */
#define UART_WPMR_Msk                       _U_(0xFFFFFF01)                                /**< (UART_WPMR) Register Mask  */


/* -------- UART_RPR : (UART Offset: 0x100) (R/W 32) Receive Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXPTR:32;                  /**< bit:  0..31  Receive Pointer Register                 */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_RPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RPR_OFFSET                     (0x100)                                       /**<  (UART_RPR) Receive Pointer Register  Offset */

#define UART_RPR_RXPTR_Pos                  0                                              /**< (UART_RPR) Receive Pointer Register Position */
#define UART_RPR_RXPTR_Msk                  (_U_(0xFFFFFFFF) << UART_RPR_RXPTR_Pos)        /**< (UART_RPR) Receive Pointer Register Mask */
#define UART_RPR_RXPTR(value)               (UART_RPR_RXPTR_Msk & ((value) << UART_RPR_RXPTR_Pos))
#define UART_RPR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (UART_RPR) Register MASK  (Use UART_RPR_Msk instead)  */
#define UART_RPR_Msk                        _U_(0xFFFFFFFF)                                /**< (UART_RPR) Register Mask  */


/* -------- UART_RCR : (UART Offset: 0x104) (R/W 32) Receive Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXCTR:16;                  /**< bit:  0..15  Receive Counter Register                 */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_RCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RCR_OFFSET                     (0x104)                                       /**<  (UART_RCR) Receive Counter Register  Offset */

#define UART_RCR_RXCTR_Pos                  0                                              /**< (UART_RCR) Receive Counter Register Position */
#define UART_RCR_RXCTR_Msk                  (_U_(0xFFFF) << UART_RCR_RXCTR_Pos)            /**< (UART_RCR) Receive Counter Register Mask */
#define UART_RCR_RXCTR(value)               (UART_RCR_RXCTR_Msk & ((value) << UART_RCR_RXCTR_Pos))
#define UART_RCR_MASK                       _U_(0xFFFF)                                    /**< \deprecated (UART_RCR) Register MASK  (Use UART_RCR_Msk instead)  */
#define UART_RCR_Msk                        _U_(0xFFFF)                                    /**< (UART_RCR) Register Mask  */


/* -------- UART_TPR : (UART Offset: 0x108) (R/W 32) Transmit Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TXPTR:32;                  /**< bit:  0..31  Transmit Counter Register                */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_TPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TPR_OFFSET                     (0x108)                                       /**<  (UART_TPR) Transmit Pointer Register  Offset */

#define UART_TPR_TXPTR_Pos                  0                                              /**< (UART_TPR) Transmit Counter Register Position */
#define UART_TPR_TXPTR_Msk                  (_U_(0xFFFFFFFF) << UART_TPR_TXPTR_Pos)        /**< (UART_TPR) Transmit Counter Register Mask */
#define UART_TPR_TXPTR(value)               (UART_TPR_TXPTR_Msk & ((value) << UART_TPR_TXPTR_Pos))
#define UART_TPR_MASK                       _U_(0xFFFFFFFF)                                /**< \deprecated (UART_TPR) Register MASK  (Use UART_TPR_Msk instead)  */
#define UART_TPR_Msk                        _U_(0xFFFFFFFF)                                /**< (UART_TPR) Register Mask  */


/* -------- UART_TCR : (UART Offset: 0x10c) (R/W 32) Transmit Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TXCTR:16;                  /**< bit:  0..15  Transmit Counter Register                */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_TCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TCR_OFFSET                     (0x10C)                                       /**<  (UART_TCR) Transmit Counter Register  Offset */

#define UART_TCR_TXCTR_Pos                  0                                              /**< (UART_TCR) Transmit Counter Register Position */
#define UART_TCR_TXCTR_Msk                  (_U_(0xFFFF) << UART_TCR_TXCTR_Pos)            /**< (UART_TCR) Transmit Counter Register Mask */
#define UART_TCR_TXCTR(value)               (UART_TCR_TXCTR_Msk & ((value) << UART_TCR_TXCTR_Pos))
#define UART_TCR_MASK                       _U_(0xFFFF)                                    /**< \deprecated (UART_TCR) Register MASK  (Use UART_TCR_Msk instead)  */
#define UART_TCR_Msk                        _U_(0xFFFF)                                    /**< (UART_TCR) Register Mask  */


/* -------- UART_RNPR : (UART Offset: 0x110) (R/W 32) Receive Next Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXNPTR:32;                 /**< bit:  0..31  Receive Next Pointer                     */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_RNPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RNPR_OFFSET                    (0x110)                                       /**<  (UART_RNPR) Receive Next Pointer Register  Offset */

#define UART_RNPR_RXNPTR_Pos                0                                              /**< (UART_RNPR) Receive Next Pointer Position */
#define UART_RNPR_RXNPTR_Msk                (_U_(0xFFFFFFFF) << UART_RNPR_RXNPTR_Pos)      /**< (UART_RNPR) Receive Next Pointer Mask */
#define UART_RNPR_RXNPTR(value)             (UART_RNPR_RXNPTR_Msk & ((value) << UART_RNPR_RXNPTR_Pos))
#define UART_RNPR_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (UART_RNPR) Register MASK  (Use UART_RNPR_Msk instead)  */
#define UART_RNPR_Msk                       _U_(0xFFFFFFFF)                                /**< (UART_RNPR) Register Mask  */


/* -------- UART_RNCR : (UART Offset: 0x114) (R/W 32) Receive Next Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXNCTR:16;                 /**< bit:  0..15  Receive Next Counter                     */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_RNCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_RNCR_OFFSET                    (0x114)                                       /**<  (UART_RNCR) Receive Next Counter Register  Offset */

#define UART_RNCR_RXNCTR_Pos                0                                              /**< (UART_RNCR) Receive Next Counter Position */
#define UART_RNCR_RXNCTR_Msk                (_U_(0xFFFF) << UART_RNCR_RXNCTR_Pos)          /**< (UART_RNCR) Receive Next Counter Mask */
#define UART_RNCR_RXNCTR(value)             (UART_RNCR_RXNCTR_Msk & ((value) << UART_RNCR_RXNCTR_Pos))
#define UART_RNCR_MASK                      _U_(0xFFFF)                                    /**< \deprecated (UART_RNCR) Register MASK  (Use UART_RNCR_Msk instead)  */
#define UART_RNCR_Msk                       _U_(0xFFFF)                                    /**< (UART_RNCR) Register Mask  */


/* -------- UART_TNPR : (UART Offset: 0x118) (R/W 32) Transmit Next Pointer Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TXNPTR:32;                 /**< bit:  0..31  Transmit Next Pointer                    */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_TNPR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TNPR_OFFSET                    (0x118)                                       /**<  (UART_TNPR) Transmit Next Pointer Register  Offset */

#define UART_TNPR_TXNPTR_Pos                0                                              /**< (UART_TNPR) Transmit Next Pointer Position */
#define UART_TNPR_TXNPTR_Msk                (_U_(0xFFFFFFFF) << UART_TNPR_TXNPTR_Pos)      /**< (UART_TNPR) Transmit Next Pointer Mask */
#define UART_TNPR_TXNPTR(value)             (UART_TNPR_TXNPTR_Msk & ((value) << UART_TNPR_TXNPTR_Pos))
#define UART_TNPR_MASK                      _U_(0xFFFFFFFF)                                /**< \deprecated (UART_TNPR) Register MASK  (Use UART_TNPR_Msk instead)  */
#define UART_TNPR_Msk                       _U_(0xFFFFFFFF)                                /**< (UART_TNPR) Register Mask  */


/* -------- UART_TNCR : (UART Offset: 0x11c) (R/W 32) Transmit Next Counter Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t TXNCTR:16;                 /**< bit:  0..15  Transmit Counter Next                    */
    uint32_t :16;                       /**< bit: 16..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_TNCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_TNCR_OFFSET                    (0x11C)                                       /**<  (UART_TNCR) Transmit Next Counter Register  Offset */

#define UART_TNCR_TXNCTR_Pos                0                                              /**< (UART_TNCR) Transmit Counter Next Position */
#define UART_TNCR_TXNCTR_Msk                (_U_(0xFFFF) << UART_TNCR_TXNCTR_Pos)          /**< (UART_TNCR) Transmit Counter Next Mask */
#define UART_TNCR_TXNCTR(value)             (UART_TNCR_TXNCTR_Msk & ((value) << UART_TNCR_TXNCTR_Pos))
#define UART_TNCR_MASK                      _U_(0xFFFF)                                    /**< \deprecated (UART_TNCR) Register MASK  (Use UART_TNCR_Msk instead)  */
#define UART_TNCR_Msk                       _U_(0xFFFF)                                    /**< (UART_TNCR) Register Mask  */


/* -------- UART_PTCR : (UART Offset: 0x120) (/W 32) Transfer Control Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXTEN:1;                   /**< bit:      0  Receiver Transfer Enable                 */
    uint32_t RXTDIS:1;                  /**< bit:      1  Receiver Transfer Disable                */
    uint32_t :6;                        /**< bit:   2..7  Reserved */
    uint32_t TXTEN:1;                   /**< bit:      8  Transmitter Transfer Enable              */
    uint32_t TXTDIS:1;                  /**< bit:      9  Transmitter Transfer Disable             */
    uint32_t :6;                        /**< bit: 10..15  Reserved */
    uint32_t RXCBEN:1;                  /**< bit:     16  Receiver Circular Buffer Enable          */
    uint32_t RXCBDIS:1;                 /**< bit:     17  Receiver Circular Buffer Disable         */
    uint32_t TXCBEN:1;                  /**< bit:     18  Transmitter Circular Buffer Enable       */
    uint32_t TXCBDIS:1;                 /**< bit:     19  Transmitter Circular Buffer Disable      */
    uint32_t :4;                        /**< bit: 20..23  Reserved */
    uint32_t ERRCLR:1;                  /**< bit:     24  Transfer Bus Error Clear                 */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_PTCR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_PTCR_OFFSET                    (0x120)                                       /**<  (UART_PTCR) Transfer Control Register  Offset */

#define UART_PTCR_RXTEN_Pos                 0                                              /**< (UART_PTCR) Receiver Transfer Enable Position */
#define UART_PTCR_RXTEN_Msk                 (_U_(0x1) << UART_PTCR_RXTEN_Pos)              /**< (UART_PTCR) Receiver Transfer Enable Mask */
#define UART_PTCR_RXTEN                     UART_PTCR_RXTEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_RXTEN_Msk instead */
#define UART_PTCR_RXTDIS_Pos                1                                              /**< (UART_PTCR) Receiver Transfer Disable Position */
#define UART_PTCR_RXTDIS_Msk                (_U_(0x1) << UART_PTCR_RXTDIS_Pos)             /**< (UART_PTCR) Receiver Transfer Disable Mask */
#define UART_PTCR_RXTDIS                    UART_PTCR_RXTDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_RXTDIS_Msk instead */
#define UART_PTCR_TXTEN_Pos                 8                                              /**< (UART_PTCR) Transmitter Transfer Enable Position */
#define UART_PTCR_TXTEN_Msk                 (_U_(0x1) << UART_PTCR_TXTEN_Pos)              /**< (UART_PTCR) Transmitter Transfer Enable Mask */
#define UART_PTCR_TXTEN                     UART_PTCR_TXTEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_TXTEN_Msk instead */
#define UART_PTCR_TXTDIS_Pos                9                                              /**< (UART_PTCR) Transmitter Transfer Disable Position */
#define UART_PTCR_TXTDIS_Msk                (_U_(0x1) << UART_PTCR_TXTDIS_Pos)             /**< (UART_PTCR) Transmitter Transfer Disable Mask */
#define UART_PTCR_TXTDIS                    UART_PTCR_TXTDIS_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_TXTDIS_Msk instead */
#define UART_PTCR_RXCBEN_Pos                16                                             /**< (UART_PTCR) Receiver Circular Buffer Enable Position */
#define UART_PTCR_RXCBEN_Msk                (_U_(0x1) << UART_PTCR_RXCBEN_Pos)             /**< (UART_PTCR) Receiver Circular Buffer Enable Mask */
#define UART_PTCR_RXCBEN                    UART_PTCR_RXCBEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_RXCBEN_Msk instead */
#define UART_PTCR_RXCBDIS_Pos               17                                             /**< (UART_PTCR) Receiver Circular Buffer Disable Position */
#define UART_PTCR_RXCBDIS_Msk               (_U_(0x1) << UART_PTCR_RXCBDIS_Pos)            /**< (UART_PTCR) Receiver Circular Buffer Disable Mask */
#define UART_PTCR_RXCBDIS                   UART_PTCR_RXCBDIS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_RXCBDIS_Msk instead */
#define UART_PTCR_TXCBEN_Pos                18                                             /**< (UART_PTCR) Transmitter Circular Buffer Enable Position */
#define UART_PTCR_TXCBEN_Msk                (_U_(0x1) << UART_PTCR_TXCBEN_Pos)             /**< (UART_PTCR) Transmitter Circular Buffer Enable Mask */
#define UART_PTCR_TXCBEN                    UART_PTCR_TXCBEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_TXCBEN_Msk instead */
#define UART_PTCR_TXCBDIS_Pos               19                                             /**< (UART_PTCR) Transmitter Circular Buffer Disable Position */
#define UART_PTCR_TXCBDIS_Msk               (_U_(0x1) << UART_PTCR_TXCBDIS_Pos)            /**< (UART_PTCR) Transmitter Circular Buffer Disable Mask */
#define UART_PTCR_TXCBDIS                   UART_PTCR_TXCBDIS_Msk                          /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_TXCBDIS_Msk instead */
#define UART_PTCR_ERRCLR_Pos                24                                             /**< (UART_PTCR) Transfer Bus Error Clear Position */
#define UART_PTCR_ERRCLR_Msk                (_U_(0x1) << UART_PTCR_ERRCLR_Pos)             /**< (UART_PTCR) Transfer Bus Error Clear Mask */
#define UART_PTCR_ERRCLR                    UART_PTCR_ERRCLR_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTCR_ERRCLR_Msk instead */
#define UART_PTCR_MASK                      _U_(0x10F0303)                                 /**< \deprecated (UART_PTCR) Register MASK  (Use UART_PTCR_Msk instead)  */
#define UART_PTCR_Msk                       _U_(0x10F0303)                                 /**< (UART_PTCR) Register Mask  */


/* -------- UART_PTSR : (UART Offset: 0x124) (R/ 32) Transfer Status Register -------- */
#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
typedef union { 
  struct {
    uint32_t RXTEN:1;                   /**< bit:      0  Receiver Transfer Enable                 */
    uint32_t :7;                        /**< bit:   1..7  Reserved */
    uint32_t TXTEN:1;                   /**< bit:      8  Transmitter Transfer Enable              */
    uint32_t :7;                        /**< bit:  9..15  Reserved */
    uint32_t RXCBEN:1;                  /**< bit:     16  Receiver Circular Buffer Enable          */
    uint32_t :1;                        /**< bit:     17  Reserved */
    uint32_t TXCBEN:1;                  /**< bit:     18  Transmitter Circular Buffer Enable       */
    uint32_t :5;                        /**< bit: 19..23  Reserved */
    uint32_t ERR:1;                     /**< bit:     24  Transfer Bus Error                       */
    uint32_t :7;                        /**< bit: 25..31  Reserved */
  } bit;                                /**< Structure used for bit  access */
  uint32_t reg;                         /**< Type used for register access */
} UART_PTSR_Type;
#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */

#define UART_PTSR_OFFSET                    (0x124)                                       /**<  (UART_PTSR) Transfer Status Register  Offset */

#define UART_PTSR_RXTEN_Pos                 0                                              /**< (UART_PTSR) Receiver Transfer Enable Position */
#define UART_PTSR_RXTEN_Msk                 (_U_(0x1) << UART_PTSR_RXTEN_Pos)              /**< (UART_PTSR) Receiver Transfer Enable Mask */
#define UART_PTSR_RXTEN                     UART_PTSR_RXTEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTSR_RXTEN_Msk instead */
#define UART_PTSR_TXTEN_Pos                 8                                              /**< (UART_PTSR) Transmitter Transfer Enable Position */
#define UART_PTSR_TXTEN_Msk                 (_U_(0x1) << UART_PTSR_TXTEN_Pos)              /**< (UART_PTSR) Transmitter Transfer Enable Mask */
#define UART_PTSR_TXTEN                     UART_PTSR_TXTEN_Msk                            /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTSR_TXTEN_Msk instead */
#define UART_PTSR_RXCBEN_Pos                16                                             /**< (UART_PTSR) Receiver Circular Buffer Enable Position */
#define UART_PTSR_RXCBEN_Msk                (_U_(0x1) << UART_PTSR_RXCBEN_Pos)             /**< (UART_PTSR) Receiver Circular Buffer Enable Mask */
#define UART_PTSR_RXCBEN                    UART_PTSR_RXCBEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTSR_RXCBEN_Msk instead */
#define UART_PTSR_TXCBEN_Pos                18                                             /**< (UART_PTSR) Transmitter Circular Buffer Enable Position */
#define UART_PTSR_TXCBEN_Msk                (_U_(0x1) << UART_PTSR_TXCBEN_Pos)             /**< (UART_PTSR) Transmitter Circular Buffer Enable Mask */
#define UART_PTSR_TXCBEN                    UART_PTSR_TXCBEN_Msk                           /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTSR_TXCBEN_Msk instead */
#define UART_PTSR_ERR_Pos                   24                                             /**< (UART_PTSR) Transfer Bus Error Position */
#define UART_PTSR_ERR_Msk                   (_U_(0x1) << UART_PTSR_ERR_Pos)                /**< (UART_PTSR) Transfer Bus Error Mask */
#define UART_PTSR_ERR                       UART_PTSR_ERR_Msk                              /**< \deprecated Old style mask definition for 1 bit bitfield. Use UART_PTSR_ERR_Msk instead */
#define UART_PTSR_MASK                      _U_(0x1050101)                                 /**< \deprecated (UART_PTSR) Register MASK  (Use UART_PTSR_Msk instead)  */
#define UART_PTSR_Msk                       _U_(0x1050101)                                 /**< (UART_PTSR) Register Mask  */


#if !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__))
#if COMPONENT_TYPEDEF_STYLE == 'R'
/** \brief UART hardware registers */
typedef struct {  
  __O  uint32_t UART_CR;        /**< (UART Offset: 0x00) Control Register */
  __IO uint32_t UART_MR;        /**< (UART Offset: 0x04) Mode Register */
  __O  uint32_t UART_IER;       /**< (UART Offset: 0x08) Interrupt Enable Register */
  __O  uint32_t UART_IDR;       /**< (UART Offset: 0x0C) Interrupt Disable Register */
  __I  uint32_t UART_IMR;       /**< (UART Offset: 0x10) Interrupt Mask Register */
  __I  uint32_t UART_SR;        /**< (UART Offset: 0x14) Status Register */
  __I  uint32_t UART_RHR;       /**< (UART Offset: 0x18) Receive Holding Register */
  __O  uint32_t UART_THR;       /**< (UART Offset: 0x1C) Transmit Holding Register */
  __IO uint32_t UART_BRGR;      /**< (UART Offset: 0x20) Baud Rate Generator Register */
  __IO uint32_t UART_CMPR;      /**< (UART Offset: 0x24) Comparison Register */
  RoReg8  Reserved1[0xBC];
  __IO uint32_t UART_WPMR;      /**< (UART Offset: 0xE4) Write Protection Mode Register */
  RoReg8  Reserved2[0x18];
  __IO uint32_t UART_RPR;       /**< (UART Offset: 0x100) Receive Pointer Register */
  __IO uint32_t UART_RCR;       /**< (UART Offset: 0x104) Receive Counter Register */
  __IO uint32_t UART_TPR;       /**< (UART Offset: 0x108) Transmit Pointer Register */
  __IO uint32_t UART_TCR;       /**< (UART Offset: 0x10C) Transmit Counter Register */
  __IO uint32_t UART_RNPR;      /**< (UART Offset: 0x110) Receive Next Pointer Register */
  __IO uint32_t UART_RNCR;      /**< (UART Offset: 0x114) Receive Next Counter Register */
  __IO uint32_t UART_TNPR;      /**< (UART Offset: 0x118) Transmit Next Pointer Register */
  __IO uint32_t UART_TNCR;      /**< (UART Offset: 0x11C) Transmit Next Counter Register */
  __O  uint32_t UART_PTCR;      /**< (UART Offset: 0x120) Transfer Control Register */
  __I  uint32_t UART_PTSR;      /**< (UART Offset: 0x124) Transfer Status Register */
} Uart;

#elif COMPONENT_TYPEDEF_STYLE == 'N'
/** \brief UART hardware registers */
typedef struct {  
  __O  UART_CR_Type                   UART_CR;        /**< Offset: 0x00 ( /W  32) Control Register */
  __IO UART_MR_Type                   UART_MR;        /**< Offset: 0x04 (R/W  32) Mode Register */
  __O  UART_IER_Type                  UART_IER;       /**< Offset: 0x08 ( /W  32) Interrupt Enable Register */
  __O  UART_IDR_Type                  UART_IDR;       /**< Offset: 0x0C ( /W  32) Interrupt Disable Register */
  __I  UART_IMR_Type                  UART_IMR;       /**< Offset: 0x10 (R/   32) Interrupt Mask Register */
  __I  UART_SR_Type                   UART_SR;        /**< Offset: 0x14 (R/   32) Status Register */
  __I  UART_RHR_Type                  UART_RHR;       /**< Offset: 0x18 (R/   32) Receive Holding Register */
  __O  UART_THR_Type                  UART_THR;       /**< Offset: 0x1C ( /W  32) Transmit Holding Register */
  __IO UART_BRGR_Type                 UART_BRGR;      /**< Offset: 0x20 (R/W  32) Baud Rate Generator Register */
  __IO UART_CMPR_Type                 UART_CMPR;      /**< Offset: 0x24 (R/W  32) Comparison Register */
  __I  uint32_t                       Reserved1[47];
  __IO UART_WPMR_Type                 UART_WPMR;      /**< Offset: 0xE4 (R/W  32) Write Protection Mode Register */
  __I  uint32_t                       Reserved2[6];
  __IO UART_RPR_Type                  UART_RPR;       /**< Offset: 0x100 (R/W  32) Receive Pointer Register */
  __IO UART_RCR_Type                  UART_RCR;       /**< Offset: 0x104 (R/W  32) Receive Counter Register */
  __IO UART_TPR_Type                  UART_TPR;       /**< Offset: 0x108 (R/W  32) Transmit Pointer Register */
  __IO UART_TCR_Type                  UART_TCR;       /**< Offset: 0x10C (R/W  32) Transmit Counter Register */
  __IO UART_RNPR_Type                 UART_RNPR;      /**< Offset: 0x110 (R/W  32) Receive Next Pointer Register */
  __IO UART_RNCR_Type                 UART_RNCR;      /**< Offset: 0x114 (R/W  32) Receive Next Counter Register */
  __IO UART_TNPR_Type                 UART_TNPR;      /**< Offset: 0x118 (R/W  32) Transmit Next Pointer Register */
  __IO UART_TNCR_Type                 UART_TNCR;      /**< Offset: 0x11C (R/W  32) Transmit Next Counter Register */
  __O  UART_PTCR_Type                 UART_PTCR;      /**< Offset: 0x120 ( /W  32) Transfer Control Register */
  __I  UART_PTSR_Type                 UART_PTSR;      /**< Offset: 0x124 (R/   32) Transfer Status Register */
} Uart;

#else /* COMPONENT_TYPEDEF_STYLE */
#error Unknown component typedef style
#endif /* COMPONENT_TYPEDEF_STYLE */

#endif /* !(defined(__ASSEMBLER__) || defined(__IAR_SYSTEMS_ASM__)) */
/** @}  end of Universal Asynchronous Receiver Transmitter */

#endif /* _SAMG53_UART_COMPONENT_H_ */
