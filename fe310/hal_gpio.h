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

#ifndef _HAL_GPIO_H_
#define _HAL_GPIO_H_

/*- Definitions -------------------------------------------------------------*/
#define HAL_GPIO_PIN(name, port, pin)						\
  static inline void HAL_GPIO_##name##_set(void)				\
  {										\
    GPIO_REG(GPIO_OUTPUT_VAL) |= (1 << pin);					\
    (void)HAL_GPIO_##name##_set;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_clr(void)				\
  {										\
    GPIO_REG(GPIO_OUTPUT_VAL) &= ~(1 << pin);					\
    (void)HAL_GPIO_##name##_clr;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_toggle(void)				\
  {										\
    GPIO_REG(GPIO_OUTPUT_VAL) ^= (1 << pin);					\
    (void)HAL_GPIO_##name##_toggle;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_write(int value)				\
  {										\
    if (value)									\
      GPIO_REG(GPIO_OUTPUT_VAL) |= (1 << pin);					\
    else									\
      GPIO_REG(GPIO_OUTPUT_VAL) &= ~(1 << pin);					\
    (void)HAL_GPIO_##name##_write;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_in(void)					\
  {										\
    GPIO_REG(GPIO_PULLUP_EN) &= ~(1 << pin);					\
    GPIO_REG(GPIO_OUTPUT_EN) &= ~(1 << pin);					\
    GPIO_REG(GPIO_INPUT_EN) |= (1 << pin);					\
    (void)HAL_GPIO_##name##_in;							\
  }										\
										\
  static inline void HAL_GPIO_##name##_out(void)				\
  {										\
    GPIO_REG(GPIO_PULLUP_EN) &= ~(1 << pin);					\
    GPIO_REG(GPIO_INPUT_EN) &= ~(1 << pin);					\
    GPIO_REG(GPIO_OUTPUT_EN) |= (1 << pin);					\
    (void)HAL_GPIO_##name##_out;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pullup(int value)			\
  {										\
    if (value)									\
      GPIO_REG(GPIO_PULLUP_EN) |= (1 << pin);					\
    else									\
      GPIO_REG(GPIO_PULLUP_EN) &= ~(1 << pin);					\
    (void)HAL_GPIO_##name##_pullup;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_read(void)				\
  {										\
    return (GPIO_REG(GPIO_INPUT_VAL) & (1 << pin)) != 0;			\
    (void)HAL_GPIO_##name##_read;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_state(void)				\
  {										\
    return (GPIO_REG(GPIO_OUTPUT_EN) & (1 << pin)) != 0;			\
    (void)HAL_GPIO_##name##_state;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_iof_en(int value)			\
  {										\
    if (value)									\
      GPIO_REG(GPIO_IOF_EN) |= (1 << pin);					\
    else									\
      GPIO_REG(GPIO_IOF_EN) &= ~(1 << pin);					\
    (void)HAL_GPIO_##name##_iof_en;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_iof_sel(int value)			\
  {										\
    if (value)									\
      GPIO_REG(GPIO_IOF_SEL) |= (1 << pin);					\
    else									\
      GPIO_REG(GPIO_IOF_SEL) &= ~(1 << pin);					\
    (void)HAL_GPIO_##name##_iof_sel;						\
  }										\

#endif // _HAL_GPIO_H_

