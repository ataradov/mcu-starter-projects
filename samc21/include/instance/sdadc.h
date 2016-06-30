/**
 * \file
 *
 * \brief Instance description for SDADC
 *
 * Copyright (c) 2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_SDADC_INSTANCE_
#define _SAMC21_SDADC_INSTANCE_

/* ========== Register definition for SDADC peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_SDADC_CTRLA            (0x42004C00U) /**< \brief (SDADC) Control A */
#define REG_SDADC_REFCTRL          (0x42004C01U) /**< \brief (SDADC) Reference Control */
#define REG_SDADC_CTRLB            (0x42004C02U) /**< \brief (SDADC) Control B */
#define REG_SDADC_EVCTRL           (0x42004C04U) /**< \brief (SDADC) Event Control */
#define REG_SDADC_INTENCLR         (0x42004C05U) /**< \brief (SDADC) Interrupt Enable Clear */
#define REG_SDADC_INTENSET         (0x42004C06U) /**< \brief (SDADC) Interrupt Enable Set */
#define REG_SDADC_INTFLAG          (0x42004C07U) /**< \brief (SDADC) Interrupt Flag Status and Clear */
#define REG_SDADC_SEQSTATUS        (0x42004C08U) /**< \brief (SDADC) Sequence Status */
#define REG_SDADC_INPUTCTRL        (0x42004C09U) /**< \brief (SDADC) Input Control */
#define REG_SDADC_CTRLC            (0x42004C0AU) /**< \brief (SDADC) Control C */
#define REG_SDADC_WINCTRL          (0x42004C0BU) /**< \brief (SDADC) Window Monitor Control */
#define REG_SDADC_WINLT            (0x42004C0CU) /**< \brief (SDADC) Window Monitor Lower Threshold */
#define REG_SDADC_WINUT            (0x42004C10U) /**< \brief (SDADC) Window Monitor Upper Threshold */
#define REG_SDADC_OFFSETCORR       (0x42004C14U) /**< \brief (SDADC) Offset Correction */
#define REG_SDADC_GAINCORR         (0x42004C18U) /**< \brief (SDADC) Gain Correction */
#define REG_SDADC_SHIFTCORR        (0x42004C1AU) /**< \brief (SDADC) Shift Correction */
#define REG_SDADC_SWTRIG           (0x42004C1CU) /**< \brief (SDADC) Software Trigger */
#define REG_SDADC_SYNCBUSY         (0x42004C20U) /**< \brief (SDADC) Synchronization Busy */
#define REG_SDADC_RESULT           (0x42004C24U) /**< \brief (SDADC) Result */
#define REG_SDADC_SEQCTRL          (0x42004C28U) /**< \brief (SDADC) Sequence Control */
#define REG_SDADC_ANACTRL          (0x42004C2CU) /**< \brief (SDADC) Analog Control */
#define REG_SDADC_DBGCTRL          (0x42004C2EU) /**< \brief (SDADC) Debug Control */
#else
#define REG_SDADC_CTRLA            (*(RwReg8 *)0x42004C00U) /**< \brief (SDADC) Control A */
#define REG_SDADC_REFCTRL          (*(RwReg8 *)0x42004C01U) /**< \brief (SDADC) Reference Control */
#define REG_SDADC_CTRLB            (*(RwReg16*)0x42004C02U) /**< \brief (SDADC) Control B */
#define REG_SDADC_EVCTRL           (*(RwReg8 *)0x42004C04U) /**< \brief (SDADC) Event Control */
#define REG_SDADC_INTENCLR         (*(RwReg8 *)0x42004C05U) /**< \brief (SDADC) Interrupt Enable Clear */
#define REG_SDADC_INTENSET         (*(RwReg8 *)0x42004C06U) /**< \brief (SDADC) Interrupt Enable Set */
#define REG_SDADC_INTFLAG          (*(RwReg8 *)0x42004C07U) /**< \brief (SDADC) Interrupt Flag Status and Clear */
#define REG_SDADC_SEQSTATUS        (*(RoReg8 *)0x42004C08U) /**< \brief (SDADC) Sequence Status */
#define REG_SDADC_INPUTCTRL        (*(RwReg8 *)0x42004C09U) /**< \brief (SDADC) Input Control */
#define REG_SDADC_CTRLC            (*(RwReg8 *)0x42004C0AU) /**< \brief (SDADC) Control C */
#define REG_SDADC_WINCTRL          (*(RwReg8 *)0x42004C0BU) /**< \brief (SDADC) Window Monitor Control */
#define REG_SDADC_WINLT            (*(RwReg  *)0x42004C0CU) /**< \brief (SDADC) Window Monitor Lower Threshold */
#define REG_SDADC_WINUT            (*(RwReg  *)0x42004C10U) /**< \brief (SDADC) Window Monitor Upper Threshold */
#define REG_SDADC_OFFSETCORR       (*(RwReg  *)0x42004C14U) /**< \brief (SDADC) Offset Correction */
#define REG_SDADC_GAINCORR         (*(RwReg16*)0x42004C18U) /**< \brief (SDADC) Gain Correction */
#define REG_SDADC_SHIFTCORR        (*(RwReg8 *)0x42004C1AU) /**< \brief (SDADC) Shift Correction */
#define REG_SDADC_SWTRIG           (*(RwReg8 *)0x42004C1CU) /**< \brief (SDADC) Software Trigger */
#define REG_SDADC_SYNCBUSY         (*(RoReg  *)0x42004C20U) /**< \brief (SDADC) Synchronization Busy */
#define REG_SDADC_RESULT           (*(RoReg  *)0x42004C24U) /**< \brief (SDADC) Result */
#define REG_SDADC_SEQCTRL          (*(RwReg8 *)0x42004C28U) /**< \brief (SDADC) Sequence Control */
#define REG_SDADC_ANACTRL          (*(RwReg8 *)0x42004C2CU) /**< \brief (SDADC) Analog Control */
#define REG_SDADC_DBGCTRL          (*(RwReg8 *)0x42004C2EU) /**< \brief (SDADC) Debug Control */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for SDADC peripheral ========== */
#define SDADC_DMAC_ID_RESRDY        44       // Index of DMA RESRDY trigger
#define SDADC_EXT_CHANNELS          3        // Number of external channels
#define SDADC_GCLK_ID               35       // Index of generic clock

#endif /* _SAMC21_SDADC_INSTANCE_ */
