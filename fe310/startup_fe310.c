/*
 * Copyright (c) 2017, Alex Taradov <alex@taradov.com>
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. The name of the author may not be used to endorse or promote products
 *    derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

//-----------------------------------------------------------------------------
#include "encoding.h"
#include "platform.h"

//-----------------------------------------------------------------------------
#define DUMMY __attribute__ ((weak, alias ("irq_handler_dummy")))

//-----------------------------------------------------------------------------
void irq_handler_dummy(void);
DUMMY void irq_handler_m_soft(void);
DUMMY void irq_handler_m_timer(void);
DUMMY void irq_handler_m_ext(void);

extern unsigned int _data_lma;
extern unsigned int _data;
extern unsigned int _edata;
extern unsigned int _bss;
extern unsigned int _ebss;
extern int main(void);
void trap_entry(void);

//-----------------------------------------------------------------------------
asm (" \
.section .init._start		\n \
.globl _start			\n \
_start:				\n \
	la gp, _gp		\n \
	la sp, _stack_top	\n \
");

//-----------------------------------------------------------------------------
__attribute__ ((used, section(".init.reset_handler")))
static void reset_handler(void)
{
  unsigned int *src, *dst;

  write_csr(mtvec, &trap_entry);

  src = &_data_lma;
  dst = &_data;
  while (dst < &_edata)
    *dst++ = *src++;

  dst = &_bss;
  while (dst < &_ebss)
    *dst++ = 0;

  //__libc_init_array();

/*
#ifndef __riscv_float_abi_soft
  // Enable FPU
  li t0, MSTATUS_FS
  csrs mstatus, t0
  csrr t1, mstatus
  and t1, t1, t0
  beqz t1, 1f
  fssr x0
1:
#endif
*/

  main();
  while (1);
}

//-----------------------------------------------------------------------------
asm (" \
.section .text.trap_entry	\n \
.align 4			\n \
trap_entry:			\n \
	addi sp, sp, -32*4	\n \
	sw  x1, 0x04(sp)	\n \
	sw  x2, 0x08(sp)	\n \
	sw  x3, 0x0c(sp)	\n \
	sw  x4, 0x10(sp)	\n \
	sw  x5, 0x14(sp)	\n \
	sw  x6, 0x18(sp)	\n \
	sw  x7, 0x1c(sp)	\n \
	sw  x8, 0x20(sp)	\n \
	sw  x9, 0x24(sp)	\n \
	sw x10, 0x28(sp)	\n \
	sw x11, 0x2c(sp)	\n \
	sw x12, 0x30(sp)	\n \
	sw x13, 0x34(sp)	\n \
	sw x14, 0x38(sp)	\n \
	sw x15, 0x3c(sp)	\n \
	sw x16, 0x40(sp)	\n \
	sw x17, 0x44(sp)	\n \
	sw x18, 0x48(sp)	\n \
	sw x19, 0x4c(sp)	\n \
	sw x20, 0x50(sp)	\n \
	sw x21, 0x54(sp)	\n \
	sw x22, 0x58(sp)	\n \
	sw x23, 0x5c(sp)	\n \
	sw x24, 0x60(sp)	\n \
	sw x25, 0x64(sp)	\n \
	sw x26, 0x68(sp)	\n \
	sw x27, 0x6c(sp)	\n \
	sw x28, 0x70(sp)	\n \
	sw x29, 0x74(sp)	\n \
	sw x30, 0x78(sp)	\n \
	sw x31, 0x7c(sp)	\n \
				\n \
	csrr a0, mcause		\n \
	csrr a1, mepc		\n \
	mv a2, sp		\n \
	jal trap_handler	\n \
	csrw mepc, a0		\n \
				\n \
	li t0, 0x00001800	\n \
	csrs mstatus, t0	\n \
				\n \
	lw  x1, 0x04(sp)	\n \
	lw  x2, 0x08(sp)	\n \
	lw  x3, 0x0c(sp)	\n \
	lw  x4, 0x10(sp)	\n \
	lw  x5, 0x14(sp)	\n \
	lw  x6, 0x18(sp)	\n \
	lw  x7, 0x1c(sp)	\n \
	lw  x8, 0x20(sp)	\n \
	lw  x9, 0x24(sp)	\n \
	lw x10, 0x28(sp)	\n \
	lw x11, 0x2c(sp)	\n \
	lw x12, 0x30(sp)	\n \
	lw x13, 0x34(sp)	\n \
	lw x14, 0x38(sp)	\n \
	lw x15, 0x3c(sp)	\n \
	lw x16, 0x40(sp)	\n \
	lw x17, 0x44(sp)	\n \
	lw x18, 0x48(sp)	\n \
	lw x19, 0x4c(sp)	\n \
	lw x20, 0x50(sp)	\n \
	lw x21, 0x54(sp)	\n \
	lw x22, 0x58(sp)	\n \
	lw x23, 0x5c(sp)	\n \
	lw x24, 0x60(sp)	\n \
	lw x25, 0x64(sp)	\n \
	lw x26, 0x68(sp)	\n \
	lw x27, 0x6c(sp)	\n \
	lw x28, 0x70(sp)	\n \
	lw x29, 0x74(sp)	\n \
	lw x30, 0x78(sp)	\n \
	lw x31, 0x7c(sp)	\n \
	addi sp, sp, 32*4	\n \
	mret			\n \
");

//-----------------------------------------------------------------------------
unsigned int trap_handler(uintptr_t mcause, unsigned int epc)
{
  if (mcause & MCAUSE_INT)
  {
    int cause = mcause & MCAUSE_CAUSE;

    if (IRQ_M_SOFT == cause)
      irq_handler_m_soft();
    else if (IRQ_M_EXT == cause)
      irq_handler_m_ext();
    else if (IRQ_M_TIMER == cause)
      irq_handler_m_timer();
    else
      irq_handler_dummy();
  }

  return epc;
}

//-----------------------------------------------------------------------------
void irq_handler_dummy(void)
{
  while (1);
}

