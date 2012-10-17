/** \file config.h
 * \brief Basic configuration of the project
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-01-07
 */

/******************************************************************************
* project: stm32cl_blink_led
* chip: STM32F107VB
* compiler: arm-none-eabi-gcc (Sourcery CodeBench Lite 2011.09-69) 4.6.1
******************************************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

#define CRYSTAL								25000000ul	///< quartz crystal resonator which is connected to the chip
#define FREQUENCY							72000000ul	///< desired target frequency of the core

#define LED_GPIO							GPIOE		///< GPIO port to which the LED is connected
#define LED_pin								14			///< pin number of the LED

#define LED									(1 << LED_pin)
#define LED_ODR								LED_GPIO->ODR	///< output register for the LED
#define LED_bb								bitband_t m_BITBAND_PERIPH(&LED_ODR, LED_pin)	///< bit-band "variable" to directly handle the pin

/*
+=============================================================================+
| strange variables
+=============================================================================+
*/

/*
+=============================================================================+
| global variables
+=============================================================================+
*/

/*
+=============================================================================+
| global functions' declarations
+=============================================================================+
*/

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* CONFIG_H_ */
