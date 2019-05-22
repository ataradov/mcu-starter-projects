/*
 * Copyright (c) 2014-2016, Alex Taradov <alex@taradov.com>
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
#define HAL_GPIO_PORTA       0
#define HAL_GPIO_PORTB       1
#define HAL_GPIO_PORTC       2

#define HAL_GPIO_PMR_A       0
#define HAL_GPIO_PMR_B       1
#define HAL_GPIO_PMR_C       2
#define HAL_GPIO_PMR_D       3
#define HAL_GPIO_PMR_E       4
#define HAL_GPIO_PMR_F       5
#define HAL_GPIO_PMR_G       6
#define HAL_GPIO_PMR_H       7

#define HAL_GPIO_PIN(name, port, pin)						\
  static inline void HAL_GPIO_##name##_set(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_OVRS = (1 << pin);		\
    (void)HAL_GPIO_##name##_set;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_clr(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_OVRC = (1 << pin);		\
    (void)HAL_GPIO_##name##_clr;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_toggle(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_OVRT = (1 << pin);		\
    (void)HAL_GPIO_##name##_toggle;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_write(int value)				\
  {										\
    if (value)									\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_OVRS = (1 << pin);		\
    else									\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_OVRC = (1 << pin);		\
    (void)HAL_GPIO_##name##_write;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_in(void)					\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_STERS = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_ODERC = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_GPERS = (1 << pin);		\
    (void)HAL_GPIO_##name##_in;							\
  }										\
										\
  static inline void HAL_GPIO_##name##_out(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_STERC = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_ODERS = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_GPERS = (1 << pin);		\
    (void)HAL_GPIO_##name##_out;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pullup(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PUERS = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PDERC = (1 << pin);		\
    (void)HAL_GPIO_##name##_pullup;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pulldown(void)				\
  {										\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PDERS = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PUERC = (1 << pin);		\
    (void)HAL_GPIO_##name##_pulldown;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_read(void)				\
  {										\
    return (GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PVR & (1 << pin)) != 0;	\
    (void)HAL_GPIO_##name##_read;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pmr(int pmr)				\
  {										\
    if (pmr & 1)								\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR0S = (1 << pin);		\
    else									\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR0C = (1 << pin);		\
    if (pmr & 2)								\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR1S = (1 << pin);		\
    else									\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR1C = (1 << pin);		\
    if (pmr & 4)								\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR2S = (1 << pin);		\
    else									\
      GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_PMR2C = (1 << pin);		\
    GPIO->GPIO_PORT[HAL_GPIO_PORT##port].GPIO_GPERC = (1 << pin);		\
    (void)HAL_GPIO_##name##_pmr;						\
  }										\

#endif // _HAL_GPIO_H_

