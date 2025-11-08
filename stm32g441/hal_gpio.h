// SPDX-License-Identifier: BSD-3-Clause
// Copyright (c) 2025, Alex Taradov <alex@taradov.com>. All rights reserved.

#ifndef _HAL_GPIO_H_
#define _HAL_GPIO_H_

/*- Definitions -------------------------------------------------------------*/
#define HAL_GPIO_PIN(name, port, pin)						\
  static inline void HAL_GPIO_##name##_set(void)				\
  {										\
    GPIO##port->BSRR = (1 << pin);						\
    (void)HAL_GPIO_##name##_set;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_clr(void)				\
  {										\
    GPIO##port->BRR = (1 << pin);						\
    (void)HAL_GPIO_##name##_clr;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_toggle(void)				\
  {										\
    GPIO##port->ODR ^= (1 << pin);						\
    (void)HAL_GPIO_##name##_toggle;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_write(int value)				\
  {										\
    if (value)									\
      GPIO##port->BSRR = (1 << pin);						\
    else									\
      GPIO##port->BRR = (1 << pin);						\
    (void)HAL_GPIO_##name##_write;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_in(void)					\
  {										\
    GPIO##port->MODER = (GPIO##port->MODER & ~GPIO_MODER_MODE##pin##_Msk);	\
    (void)HAL_GPIO_##name##_in;							\
  }										\
										\
  static inline void HAL_GPIO_##name##_out(void)				\
  {										\
    GPIO##port->MODER = (GPIO##port->MODER & ~GPIO_MODER_MODE##pin##_Msk) | 	\
        (1 << GPIO_MODER_MODE##pin##_Pos);					\
    (void)HAL_GPIO_##name##_out;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_alt(int v)				\
  {										\
    int pi = pin / 8;								\
    int bi = (pin % 8) * 4;							\
    GPIO##port->AFR[pi] = (GPIO##port->AFR[pi] & ~(0xf << bi)) | (v << bi);	\
    GPIO##port->MODER = (GPIO##port->MODER & ~GPIO_MODER_MODE##pin##_Msk) | 	\
        (2 << GPIO_MODER_MODE##pin##_Pos);					\
    (void)HAL_GPIO_##name##_alt;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_analog(void)				\
  {										\
    GPIO##port->MODER = (GPIO##port->MODER & ~GPIO_MODER_MODE##pin##_Msk) | 	\
        (3 << GPIO_MODER_MODE##pin##_Pos);					\
    (void)HAL_GPIO_##name##_analog;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pullup(void)				\
  {										\
    GPIO##port->PUPDR = (GPIO##port->PUPDR & ~GPIO_PUPDR_PUPD##pin##_Msk) | 	\
        (1 << GPIO_PUPDR_PUPD##pin##_Pos);					\
    (void)HAL_GPIO_##name##_pullup;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pulldown(void)				\
  {										\
    GPIO##port->PUPDR = (GPIO##port->PUPDR & ~GPIO_PUPDR_PUPD##pin##_Msk) | 	\
        (2 << GPIO_PUPDR_PUPD##pin##_Pos);					\
    (void)HAL_GPIO_##name##_pulldown;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_pulldis(void)				\
  {										\
    GPIO##port->PUPDR = (GPIO##port->PUPDR & ~GPIO_PUPDR_PUPD##pin##_Msk); 	\
    (void)HAL_GPIO_##name##_pulldis;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_read(void)				\
  {										\
    return (GPIO##port->IDR & (1 << pin)) != 0;					\
    (void)HAL_GPIO_##name##_read;						\
  }										\
										\
  static inline int HAL_GPIO_##name##_state(void)				\
  {										\
    return (GPIO##port->MODER >> GPIO_MODER_MODE##pin##_Pos) & 3;		\
    (void)HAL_GPIO_##name##_state;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_speed(int s)				\
  {										\
    GPIO##port->OSPEEDR = (GPIO##port->OSPEEDR & ~GPIO_OSPEEDR_OSPEED##pin##_Msk) | \
        (s << GPIO_OSPEEDR_OSPEED##pin##_Pos);					\
    (void)HAL_GPIO_##name##_speed;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_open_drain(void)				\
  {										\
    GPIO##port->OTYPER |= GPIO_OTYPER_OT##pin##_Msk;				\
    (void)HAL_GPIO_##name##_open_drain;						\
  }										\
										\
  static inline void HAL_GPIO_##name##_push_pull(void)				\
  {										\
    GPIO##port->OTYPER &= ~GPIO_OTYPER_OT##pin##_Msk;				\
    (void)HAL_GPIO_##name##_push_pull;						\
  }										\

#endif // _HAL_GPIO_H_

