/*
 * SPDX-License-Identifier: BSD-3-Clause
 * Copyright (c) 2023, Alex Taradov <alex@taradov.com>. All rights reserved.
 */

MEMORY
{
  flash   (rx)  : ORIGIN = 0x00000000, LENGTH = 0x100000  /* 1M */
  ram     (rwx) : ORIGIN = 0x20000000, LENGTH = 0x40000   /* 256k */
  bkupram (rwx) : ORIGIN = 0x47000000, LENGTH = 0x2000    /* 8k */
  qspi    (rwx) : ORIGIN = 0x04000000, LENGTH = 0x1000000 /* 16M */
}

__top_flash = ORIGIN(flash) + LENGTH(flash);
__top_ram = ORIGIN(ram) + LENGTH(ram);

ENTRY(irq_handler_reset)

SECTIONS
{
  .text : ALIGN(4)
  {
    FILL(0xff)
    KEEP(*(.vectors))
    *(.text*)
    *(.rodata)
    *(.rodata.*)
    . = ALIGN(4);
  } > flash

  . = ALIGN(4);
  _etext = .;

  .uninit_RESERVED : ALIGN(4)
  {
    KEEP(*(.bss.$RESERVED*))
  } > ram

  .data : ALIGN(4)
  {
    FILL(0xff)
    _data = .;
    *(.ramfunc .ramfunc.*);
    *(vtable)
    *(.data*)
    . = ALIGN(4);
    _edata = .;
  } > ram AT > flash

  .bkupram (NOLOAD):
  {
    . = ALIGN(16);
    _bkupram = .;
    *(.bkupram .bkupram.*);
    . = ALIGN(16);
    _ebkupram = .;
  } > bkupram

  .qspi (NOLOAD):
  {
    . = ALIGN(16);
    _qspi = .;
    *(.qspi .qspi.*);
    . = ALIGN(16);
    _eqspi = .;
  } > qspi

  .bss : ALIGN(4)
  {
    _bss = .;
    *(.bss*)
    *(COMMON)
    . = ALIGN(4);
    _ebss = .;
    PROVIDE(_end = .);
  } > ram

  PROVIDE(_stack_top = __top_ram - 0);
}

