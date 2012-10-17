/** \file config.h
 * \brief Basic configuration of the project
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-01-08
 */

/******************************************************************************
* project: lpc2103_blink_led
* chip: LPC2103
* compiler: arm-none-eabi-gcc (Sourcery CodeBench Lite 2011.09-69) 4.6.1
******************************************************************************/

#ifndef CONFIG_H_
#define CONFIG_H_

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

#define CRYSTAL								12000000ul	///< quartz crystal resonator which is connected to the chip
#define FREQUENCY							72000000ul	///< desired target frequency of the core

#define LED_DIR								FIO0DIR		///< direction register of the port to which the LED is connected
#define LED_SET								FIO0SET		///< "SET" register for the LED
#define LED_CLR								FIO0CLR		///< "CLR" register for the LED

#define LED_pin								0			///< pin number of the LED

#define LED									(1 << LED_pin)

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
