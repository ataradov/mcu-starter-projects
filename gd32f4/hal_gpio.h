/*
 * Copyright (c) 2019, Alex Taradov <alex@taradov.com>
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
    GPIO##port->BOP = (1 << pin);						\
    (void)HAL_GPIO_##name##_set;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_clr(void)				\
  {										\
    GPIO##port->BC = (1 << pin);						\
    (void)HAL_GPIO_##name##_clr;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_toggle(void)				\
  {										\
    GPIO##port->TG = (1 << pin);						\
    (void)HAL_GPIO_##name##_toggle;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_write(int value)				\
  {										\
    if (value)									\
      GPIO##port->BOP = (1 << pin);						\
    else									\
      GPIO##port->BC = (1 << pin);						\
    (void)HAL_GPIO_##name##_write;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_in(void)					\
  {										\
    GPIO##port->CTL_b.CTL##pin = 0;						\
    (void)HAL_GPIO_##name##_in;							\
  }										\
										\
  static inline void HAL_GPIO_##name##_out(void)				\
  {										\
    GPIO##port->CTL_b.CTL##pin = 1;						\
    (void)HAL_GPIO_##name##_out;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_alt(int v)				\
  {										\
    int bi = (pin % 8) * 4;							\
    if (pin & 0x8)								\
      GPIO##port->AFSEL1 = (GPIO##port->AFSEL1 & ~(0xf << bi)) | (v << bi);	\
    else									\
      GPIO##port->AFSEL0 = (GPIO##port->AFSEL0 & ~(0xf << bi)) | (v << bi);	\
    GPIO##port->CTL_b.CTL##pin = 2;						\
    (void)HAL_GPIO_##name##_alt;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_analog(void)				\
  {										\
    GPIO##port->CTL_b.CTL##pin = 3;						\
    (void)HAL_GPIO_##name##_analog;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pullup(void)				\
  {										\
    GPIO##port->PUD_b.PUD##pin = 1;						\
    (void)HAL_GPIO_##name##_pullup;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pulldown(void)				\
  {										\
    GPIO##port->PUD_b.PUD##pin = 2;						\
    (void)HAL_GPIO_##name##_pulldown;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pulldis(void)				\
  {										\
    GPIO##port->PUD_b.PUD##pin = 0;						\
    (void)HAL_GPIO_##name##_pulldis;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_read(void)				\
  {										\
    return GPIO##port->ISTAT_b.ISTAT##pin;					\
    (void)HAL_GPIO_##name##_read;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_state(void)				\
  {										\
    return GPIO##port->CTL_b.CTL##pin;						\
    (void)HAL_GPIO_##name##_state;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_speed(int s)				\
  {										\
    GPIO##port->OSPD_b.OSPD##pin = s;						\
    (void)HAL_GPIO_##name##_speed;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_open_drain(void)				\
  {										\
    GPIO##port->OMODE_b.OM##pin = 1;						\
    (void)HAL_GPIO_##name##_open_drain;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_push_pull(void)				\
  {										\
    GPIO##port->OMODE_b.OM##pin = 0;						\
    (void)HAL_GPIO_##name##_push_pull;						\
  }										\

#endif // _HAL_GPIO_H_

