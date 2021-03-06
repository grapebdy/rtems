/**
 * @file
 *
 * @ingroup lm3s69xx_interrupt
 *
 * @brief Interrupt definitions.
 */

/*
 * Copyright ? 2013 Eugeniy Meshcheryakov <eugen@debian.org>
 *
 * Copyright (c) 2011 Sebastian Huber.  All rights reserved.
 *
 *  embedded brains GmbH
 *  Obere Lagerstr. 30
 *  82178 Puchheim
 *  Germany
 *  <rtems@embedded-brains.de>
 *
 * The license and distribution terms for this file may be
 * found in the file LICENSE in this distribution or at
 * http://www.rtems.org/license/LICENSE.
 */

#ifndef LIBBSP_ARM_LM3S69XX_IRQ_H
#define LIBBSP_ARM_LM3S69XX_IRQ_H

#ifndef ASM

#include <rtems.h>
#include <rtems/irq.h>
#include <rtems/irq-extension.h>
#include <bspopts.h>

/**
 * @defgroup lm3s69xx_interrupt Interrupt Support
 *
 * @ingroup RTEMSBSPsARMLM3S69XX
 *
 * @brief Interrupt support.
 */

#endif /* ASM */

#define LM3S69XX_IRQ_GPIO_PORT_A 0
#define LM3S69XX_IRQ_GPIO_PORT_B 1
#define LM3S69XX_IRQ_GPIO_PORT_C 2
#define LM3S69XX_IRQ_GPIO_PORT_D 3
#define LM3S69XX_IRQ_GPIO_PORT_E 4
#define LM3S69XX_IRQ_UART_0 5
#define LM3S69XX_IRQ_UART_1 6
#define LM3S69XX_IRQ_SSI_0 7
#define LM3S69XX_IRQ_I2C_0 8
#define LM3S69XX_IRQ_PWM_FAULT 9
#define LM3S69XX_IRQ_PWM_GENERATOR_0 10
#define LM3S69XX_IRQ_PWM_GENERATOR_1 11
#define LM3S69XX_IRQ_PWM_GENERATOR_2 12
#define LM3S69XX_IRQ_QEI_0 13
#define LM3S69XX_IRQ_ADC0_SEQUENCE_0 14
#define LM3S69XX_IRQ_ADC0_SEQUENCE_1 15
#define LM3S69XX_IRQ_ADC0_SEQUENCE_2 16
#define LM3S69XX_IRQ_ADC0_SEQUENCE_3 17
#define LM3S69XX_IRQ_WATCHDOG_TIMER_0 18
#define LM3S69XX_IRQ_TIMER_0_A 19
#define LM3S69XX_IRQ_TIMER_0_B 20
#define LM3S69XX_IRQ_TIMER_1_A 21
#define LM3S69XX_IRQ_TIMER_1_B 22
#define LM3S69XX_IRQ_TIMER_2_A 23
#define LM3S69XX_IRQ_TIMER_2_B 24
#define LM3S69XX_IRQ_ANALOG_COMPARATOR_0 25
#define LM3S69XX_IRQ_ANALOG_COMPARATOR_1 26
#define LM3S69XX_IRQ_SYSTEM_CONTROL 28
#define LM3S69XX_IRQ_FLASH_MEMORY_CONTROL 29
#define LM3S69XX_IRQ_GPIO_PORT_F 30
#define LM3S69XX_IRQ_GPIO_PORT_G 31
/* NOTE: lm3s3749 */
#define LM3S69XX_IRQ_GPIO_PORT_H 32
#define LM3S69XX_IRQ_UART_2 33
/* NOTE: lm3s3749 */
#define LM3S69XX_IRQ_SSI_1 34
#define LM3S69XX_IRQ_TIMER_3_A 35
#define LM3S69XX_IRQ_TIMER_3_B 36
#define LM3S69XX_IRQ_I2C_1 37

/* NOTE: lm3s6965 */
#define LM3S69XX_IRQ_QEI_1 38
#define LM3S69XX_IRQ_ETHERNET_CONTROLLER 42

#define LM3S69XX_IRQ_HIBERNATION_MODULE 43

/* NOTE: lm3s3749 */
#define LM3S69XX_IRQ_USB 44
#define LM3S69XX_IRQ_PWM_GENERATOR_3 45
#define LM3S69XX_IRQ_UDMA_SOFTWARE 46
#define LM3S69XX_IRQ_UDMA_ERROR 47

#define LM3S69XX_IRQ_PRIORITY_VALUE_MIN 0
#define LM3S69XX_IRQ_PRIORITY_VALUE_MAX 7
#define LM3S69XX_IRQ_PRIORITY_COUNT (LM3S69XX_IRQ_PRIORITY_VALUE_MAX + 1)
#define LM3S69XX_IRQ_PRIORITY_HIGHEST LM3S69XX_IRQ_PRIORITY_VALUE_MIN
#define LM3S69XX_IRQ_PRIORITY_LOWEST LM3S69XX_IRQ_PRIORITY_VALUE_MAX

#define BSP_INTERRUPT_VECTOR_MIN 0
/* NOTE: for lm3s6965 - 43 */
#define BSP_INTERRUPT_VECTOR_MAX 47

#endif /* LIBBSP_ARM_LM3S69XX_IRQ_H */
