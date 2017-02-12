/**
 * \file
 *
 * \brief Instance description for TAL
 *
 * Copyright (c) 2016 Atmel Corporation,
 *                    a wholly owned subsidiary of Microchip Technology Inc.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the Licence at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 * \asf_license_stop
 *
 */

#ifndef _SAMC21_TAL_INSTANCE_
#define _SAMC21_TAL_INSTANCE_

/* ========== Register definition for TAL peripheral ========== */
#if (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__))
#define REG_TAL_CTRLA              (0x42006000) /**< \brief (TAL) Control A */
#define REG_TAL_RSTCTRL            (0x42006004) /**< \brief (TAL) Reset Control */
#define REG_TAL_EXTCTRL            (0x42006005) /**< \brief (TAL) External Break Control */
#define REG_TAL_EVCTRL             (0x42006006) /**< \brief (TAL) Event Control */
#define REG_TAL_INTENCLR           (0x42006008) /**< \brief (TAL) Interrupt Enable Clear */
#define REG_TAL_INTENSET           (0x42006009) /**< \brief (TAL) Interrupt Enable Set */
#define REG_TAL_INTFLAG            (0x4200600A) /**< \brief (TAL) Interrupt Flag Status and Clear */
#define REG_TAL_GLOBMASK           (0x4200600B) /**< \brief (TAL) Global Break Requests Mask */
#define REG_TAL_HALT               (0x4200600C) /**< \brief (TAL) Debug Halt Request */
#define REG_TAL_RESTART            (0x4200600D) /**< \brief (TAL) Debug Restart Request */
#define REG_TAL_BRKSTATUS          (0x4200600E) /**< \brief (TAL) Break Request Status */
#define REG_TAL_CTICTRLA0          (0x42006010) /**< \brief (TAL) Cross-Trigger Interface 0 Control A */
#define REG_TAL_CTIMASK0           (0x42006011) /**< \brief (TAL) Cross-Trigger Interface 0 Mask */
#define REG_TAL_CTICTRLA1          (0x42006012) /**< \brief (TAL) Cross-Trigger Interface 1 Control A */
#define REG_TAL_CTIMASK1           (0x42006013) /**< \brief (TAL) Cross-Trigger Interface 1 Mask */
#define REG_TAL_CTICTRLA2          (0x42006014) /**< \brief (TAL) Cross-Trigger Interface 2 Control A */
#define REG_TAL_CTIMASK2           (0x42006015) /**< \brief (TAL) Cross-Trigger Interface 2 Mask */
#define REG_TAL_INTSTATUS0         (0x42006020) /**< \brief (TAL) Interrupt 0 Status */
#define REG_TAL_INTSTATUS1         (0x42006021) /**< \brief (TAL) Interrupt 1 Status */
#define REG_TAL_INTSTATUS2         (0x42006022) /**< \brief (TAL) Interrupt 2 Status */
#define REG_TAL_INTSTATUS3         (0x42006023) /**< \brief (TAL) Interrupt 3 Status */
#define REG_TAL_INTSTATUS4         (0x42006024) /**< \brief (TAL) Interrupt 4 Status */
#define REG_TAL_INTSTATUS5         (0x42006025) /**< \brief (TAL) Interrupt 5 Status */
#define REG_TAL_INTSTATUS6         (0x42006026) /**< \brief (TAL) Interrupt 6 Status */
#define REG_TAL_INTSTATUS7         (0x42006027) /**< \brief (TAL) Interrupt 7 Status */
#define REG_TAL_INTSTATUS8         (0x42006028) /**< \brief (TAL) Interrupt 8 Status */
#define REG_TAL_INTSTATUS9         (0x42006029) /**< \brief (TAL) Interrupt 9 Status */
#define REG_TAL_INTSTATUS10        (0x4200602A) /**< \brief (TAL) Interrupt 10 Status */
#define REG_TAL_INTSTATUS11        (0x4200602B) /**< \brief (TAL) Interrupt 11 Status */
#define REG_TAL_INTSTATUS12        (0x4200602C) /**< \brief (TAL) Interrupt 12 Status */
#define REG_TAL_INTSTATUS13        (0x4200602D) /**< \brief (TAL) Interrupt 13 Status */
#define REG_TAL_INTSTATUS14        (0x4200602E) /**< \brief (TAL) Interrupt 14 Status */
#define REG_TAL_INTSTATUS15        (0x4200602F) /**< \brief (TAL) Interrupt 15 Status */
#define REG_TAL_INTSTATUS16        (0x42006030) /**< \brief (TAL) Interrupt 16 Status */
#define REG_TAL_INTSTATUS17        (0x42006031) /**< \brief (TAL) Interrupt 17 Status */
#define REG_TAL_INTSTATUS18        (0x42006032) /**< \brief (TAL) Interrupt 18 Status */
#define REG_TAL_INTSTATUS19        (0x42006033) /**< \brief (TAL) Interrupt 19 Status */
#define REG_TAL_INTSTATUS20        (0x42006034) /**< \brief (TAL) Interrupt 20 Status */
#define REG_TAL_INTSTATUS21        (0x42006035) /**< \brief (TAL) Interrupt 21 Status */
#define REG_TAL_INTSTATUS22        (0x42006036) /**< \brief (TAL) Interrupt 22 Status */
#define REG_TAL_INTSTATUS23        (0x42006037) /**< \brief (TAL) Interrupt 23 Status */
#define REG_TAL_INTSTATUS24        (0x42006038) /**< \brief (TAL) Interrupt 24 Status */
#define REG_TAL_INTSTATUS25        (0x42006039) /**< \brief (TAL) Interrupt 25 Status */
#define REG_TAL_INTSTATUS26        (0x4200603A) /**< \brief (TAL) Interrupt 26 Status */
#define REG_TAL_INTSTATUS27        (0x4200603B) /**< \brief (TAL) Interrupt 27 Status */
#define REG_TAL_INTSTATUS28        (0x4200603C) /**< \brief (TAL) Interrupt 28 Status */
#define REG_TAL_INTSTATUS29        (0x4200603D) /**< \brief (TAL) Interrupt 29 Status */
#define REG_TAL_INTSTATUS30        (0x4200603E) /**< \brief (TAL) Interrupt 30 Status */
#define REG_TAL_DMACPUSEL0         (0x42006040) /**< \brief (TAL) DMA Channel Interrupts CPU Select 0 */
#define REG_TAL_EVCPUSEL0          (0x42006048) /**< \brief (TAL) EVSYS Channel Interrupts CPU Select 0 */
#define REG_TAL_EICCPUSEL0         (0x42006050) /**< \brief (TAL) EIC External Interrupts CPU Select 0 */
#define REG_TAL_INTCPUSEL0         (0x42006058) /**< \brief (TAL) Interrupts CPU Select 0 */
#define REG_TAL_INTCPUSEL1         (0x4200605C) /**< \brief (TAL) Interrupts CPU Select 1 */
#define REG_TAL_IRQTRIG            (0x42006060) /**< \brief (TAL) Interrupt Trigger */
#else
#define REG_TAL_CTRLA              (*(RwReg8 *)0x42006000UL) /**< \brief (TAL) Control A */
#define REG_TAL_RSTCTRL            (*(RwReg8 *)0x42006004UL) /**< \brief (TAL) Reset Control */
#define REG_TAL_EXTCTRL            (*(RwReg8 *)0x42006005UL) /**< \brief (TAL) External Break Control */
#define REG_TAL_EVCTRL             (*(RwReg8 *)0x42006006UL) /**< \brief (TAL) Event Control */
#define REG_TAL_INTENCLR           (*(RwReg8 *)0x42006008UL) /**< \brief (TAL) Interrupt Enable Clear */
#define REG_TAL_INTENSET           (*(RwReg8 *)0x42006009UL) /**< \brief (TAL) Interrupt Enable Set */
#define REG_TAL_INTFLAG            (*(RwReg8 *)0x4200600AUL) /**< \brief (TAL) Interrupt Flag Status and Clear */
#define REG_TAL_GLOBMASK           (*(RwReg8 *)0x4200600BUL) /**< \brief (TAL) Global Break Requests Mask */
#define REG_TAL_HALT               (*(WoReg8 *)0x4200600CUL) /**< \brief (TAL) Debug Halt Request */
#define REG_TAL_RESTART            (*(WoReg8 *)0x4200600DUL) /**< \brief (TAL) Debug Restart Request */
#define REG_TAL_BRKSTATUS          (*(RoReg16*)0x4200600EUL) /**< \brief (TAL) Break Request Status */
#define REG_TAL_CTICTRLA0          (*(RwReg8 *)0x42006010UL) /**< \brief (TAL) Cross-Trigger Interface 0 Control A */
#define REG_TAL_CTIMASK0           (*(RwReg8 *)0x42006011UL) /**< \brief (TAL) Cross-Trigger Interface 0 Mask */
#define REG_TAL_CTICTRLA1          (*(RwReg8 *)0x42006012UL) /**< \brief (TAL) Cross-Trigger Interface 1 Control A */
#define REG_TAL_CTIMASK1           (*(RwReg8 *)0x42006013UL) /**< \brief (TAL) Cross-Trigger Interface 1 Mask */
#define REG_TAL_CTICTRLA2          (*(RwReg8 *)0x42006014UL) /**< \brief (TAL) Cross-Trigger Interface 2 Control A */
#define REG_TAL_CTIMASK2           (*(RwReg8 *)0x42006015UL) /**< \brief (TAL) Cross-Trigger Interface 2 Mask */
#define REG_TAL_INTSTATUS0         (*(RoReg8 *)0x42006020UL) /**< \brief (TAL) Interrupt 0 Status */
#define REG_TAL_INTSTATUS1         (*(RoReg8 *)0x42006021UL) /**< \brief (TAL) Interrupt 1 Status */
#define REG_TAL_INTSTATUS2         (*(RoReg8 *)0x42006022UL) /**< \brief (TAL) Interrupt 2 Status */
#define REG_TAL_INTSTATUS3         (*(RoReg8 *)0x42006023UL) /**< \brief (TAL) Interrupt 3 Status */
#define REG_TAL_INTSTATUS4         (*(RoReg8 *)0x42006024UL) /**< \brief (TAL) Interrupt 4 Status */
#define REG_TAL_INTSTATUS5         (*(RoReg8 *)0x42006025UL) /**< \brief (TAL) Interrupt 5 Status */
#define REG_TAL_INTSTATUS6         (*(RoReg8 *)0x42006026UL) /**< \brief (TAL) Interrupt 6 Status */
#define REG_TAL_INTSTATUS7         (*(RoReg8 *)0x42006027UL) /**< \brief (TAL) Interrupt 7 Status */
#define REG_TAL_INTSTATUS8         (*(RoReg8 *)0x42006028UL) /**< \brief (TAL) Interrupt 8 Status */
#define REG_TAL_INTSTATUS9         (*(RoReg8 *)0x42006029UL) /**< \brief (TAL) Interrupt 9 Status */
#define REG_TAL_INTSTATUS10        (*(RoReg8 *)0x4200602AUL) /**< \brief (TAL) Interrupt 10 Status */
#define REG_TAL_INTSTATUS11        (*(RoReg8 *)0x4200602BUL) /**< \brief (TAL) Interrupt 11 Status */
#define REG_TAL_INTSTATUS12        (*(RoReg8 *)0x4200602CUL) /**< \brief (TAL) Interrupt 12 Status */
#define REG_TAL_INTSTATUS13        (*(RoReg8 *)0x4200602DUL) /**< \brief (TAL) Interrupt 13 Status */
#define REG_TAL_INTSTATUS14        (*(RoReg8 *)0x4200602EUL) /**< \brief (TAL) Interrupt 14 Status */
#define REG_TAL_INTSTATUS15        (*(RoReg8 *)0x4200602FUL) /**< \brief (TAL) Interrupt 15 Status */
#define REG_TAL_INTSTATUS16        (*(RoReg8 *)0x42006030UL) /**< \brief (TAL) Interrupt 16 Status */
#define REG_TAL_INTSTATUS17        (*(RoReg8 *)0x42006031UL) /**< \brief (TAL) Interrupt 17 Status */
#define REG_TAL_INTSTATUS18        (*(RoReg8 *)0x42006032UL) /**< \brief (TAL) Interrupt 18 Status */
#define REG_TAL_INTSTATUS19        (*(RoReg8 *)0x42006033UL) /**< \brief (TAL) Interrupt 19 Status */
#define REG_TAL_INTSTATUS20        (*(RoReg8 *)0x42006034UL) /**< \brief (TAL) Interrupt 20 Status */
#define REG_TAL_INTSTATUS21        (*(RoReg8 *)0x42006035UL) /**< \brief (TAL) Interrupt 21 Status */
#define REG_TAL_INTSTATUS22        (*(RoReg8 *)0x42006036UL) /**< \brief (TAL) Interrupt 22 Status */
#define REG_TAL_INTSTATUS23        (*(RoReg8 *)0x42006037UL) /**< \brief (TAL) Interrupt 23 Status */
#define REG_TAL_INTSTATUS24        (*(RoReg8 *)0x42006038UL) /**< \brief (TAL) Interrupt 24 Status */
#define REG_TAL_INTSTATUS25        (*(RoReg8 *)0x42006039UL) /**< \brief (TAL) Interrupt 25 Status */
#define REG_TAL_INTSTATUS26        (*(RoReg8 *)0x4200603AUL) /**< \brief (TAL) Interrupt 26 Status */
#define REG_TAL_INTSTATUS27        (*(RoReg8 *)0x4200603BUL) /**< \brief (TAL) Interrupt 27 Status */
#define REG_TAL_INTSTATUS28        (*(RoReg8 *)0x4200603CUL) /**< \brief (TAL) Interrupt 28 Status */
#define REG_TAL_INTSTATUS29        (*(RoReg8 *)0x4200603DUL) /**< \brief (TAL) Interrupt 29 Status */
#define REG_TAL_INTSTATUS30        (*(RoReg8 *)0x4200603EUL) /**< \brief (TAL) Interrupt 30 Status */
#define REG_TAL_DMACPUSEL0         (*(RwReg  *)0x42006040UL) /**< \brief (TAL) DMA Channel Interrupts CPU Select 0 */
#define REG_TAL_EVCPUSEL0          (*(RwReg  *)0x42006048UL) /**< \brief (TAL) EVSYS Channel Interrupts CPU Select 0 */
#define REG_TAL_EICCPUSEL0         (*(RwReg  *)0x42006050UL) /**< \brief (TAL) EIC External Interrupts CPU Select 0 */
#define REG_TAL_INTCPUSEL0         (*(RwReg  *)0x42006058UL) /**< \brief (TAL) Interrupts CPU Select 0 */
#define REG_TAL_INTCPUSEL1         (*(RwReg  *)0x4200605CUL) /**< \brief (TAL) Interrupts CPU Select 1 */
#define REG_TAL_IRQTRIG            (*(RwReg16*)0x42006060UL) /**< \brief (TAL) Interrupt Trigger */
#endif /* (defined(__ASSEMBLY__) || defined(__IAR_SYSTEMS_ASM__)) */

/* ========== Instance parameters for TAL peripheral ========== */
#define TAL_CPU_NUM                 1        // Number of CPUs
#define TAL_CTI_NUM                 3        // Number of Cross-Trigger Interfaces
#define TAL_DMA_CH_NUM              12       // Number of DMAC Channels
#define TAL_EV_CH_NUM               12       // Number of EVSYS Channels
#define TAL_EXTINT_NUM              16       // Number of EIC External Interrrupts
#define TAL_INT_NUM                 31       // Number of Interrupt Requests

#endif /* _SAMC21_TAL_INSTANCE_ */
