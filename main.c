/** \file main.c
 * \brief Sample STM32CL project
 * \details This file holds a very basic code for STM32F107VB. This code
 * enables all GPIO ports, configures Flash wait-states and enables the PLLs
 * to achieve the highest allowed frequency for STM32F107VB (72MHz). Main
 * code block just blinks the LED. The LED port and pin are defined in
 * config.h file. Target core frequency and quartz crystal resonator
 * frequency are defined there as well.
 *
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-03-23
 */

/******************************************************************************
* project: stm32cl_blink_led
* chip: STM32F107VB
* compiler: arm-none-eabi-gcc (Sourcery CodeBench Lite 2011.09-69) 4.6.1
*
* prefix: (none)
*
* available global functions:
* 	int main(void)
*
* available local functions:
* 	static void flash_latency(uint32_t frequency)
* 	static uint32_t pll_start(uint32_t crystal, uint32_t frequency)
* 	static void system_init(void)
*
* available interrupt handlers:
******************************************************************************/

/*
+=============================================================================+
| includes
+=============================================================================+
*/

#include <stdint.h>

#include "inc/stm32f10x.h"

#include "config.h"

#include "hdr/hdr_rcc.h"
#include "hdr/hdr_gpio.h"

#include "gpio.h"

/*
+=============================================================================+
| module variables
+=============================================================================+
*/

/*
+=============================================================================+
| local functions' declarations
+=============================================================================+
*/

static void flash_latency(uint32_t frequency);
static uint32_t pll_start(uint32_t crystal, uint32_t frequency);
static void system_init(void);

/*
+=============================================================================+
| global functions
+=============================================================================+
*/

/*------------------------------------------------------------------------*//**
* \brief main code block
* \details Call some static initialization functions and blink the led with
* frequency defined via count_max variable.
*//*-------------------------------------------------------------------------*/

int main(void)
{
	volatile uint32_t count, count_max = 1000000;

	system_init();
	pll_start(CRYSTAL, FREQUENCY);

	gpio_pin_cfg(LED_GPIO, LED_pin, GPIO_CRx_MODE_CNF_OUT_PP_10M_value);

	while (1)
	{
		for (count = 0; count < count_max; count++);	// delay
		LED_bb = 1;
		for (count = 0; count < count_max; count++);	// delay
		LED_bb = 0;
	}
}

/*
+=============================================================================+
| local functions
+=============================================================================+
*/

/*------------------------------------------------------------------------*//**
* \brief Configures Flash latency
* \details Configures Flash latency (wait-states) which allows the chip to run
* at higher speeds
*
* \param [in] frequency defines the target frequency of the core
*//*-------------------------------------------------------------------------*/

static void flash_latency(uint32_t frequency)
{
	uint32_t wait_states;

	if (frequency < 24000000ul)				// 0 wait states for core speed below 24MHz
		wait_states = 0;
	else if (frequency < 48000000ul)		// 1 wait state for core speed between 24MHz and 48MHz
		wait_states = 1;
	else									// 2 wait states for core speed over 48MHz
		wait_states = 2;

	FLASH->ACR |= wait_states;				// set the latency
}

/*------------------------------------------------------------------------*//**
* \brief Starts the PLL1 and PLL2
* \details Configures and enables PLL1 and PLL2 to achieve desired frequency
* with given crystal. Before the speed change Flash latency is configured via
* flash_latency(). External crystal resonator clocks PLL2 (via PREDIV2
* prescaler), which in turns clocks main PLL (via PREDIV1 prescaler), so
* frequency is dependent on 4 parameters, that's why the function is so long.
* APB1 clock ratio is set to 1:2 (max freq = 36MHz)
*
* \param [in] crystal is the frequency of the crystal resonator connected to
* the STM32F107VB
* \param [in] frequency is the desired target frequency after enabling the PLLs
*
* \return real frequency that was set
*//*-------------------------------------------------------------------------*/

static uint32_t pll_start(uint32_t crystal, uint32_t frequency)
{
	uint32_t div1, div2, mul1, mul2, pll1_frequency, pll2_frequency;
	uint32_t best_div1 = 0, best_div2 = 0, best_mul1 = 0, best_mul2 = 0, best_frequency = 0;

	RCC_CR_HSEON_bb = 1;					// enable HSE clock
	flash_latency(frequency);				// configure Flash latency for desired frequency

	for (div2 = 1; div2 <= 16; div2++)		// PREDIV2 in [1; 16]
		for (mul2 = 8; mul2 <= 20; mul2++)	// PLL2MUL in {[8; 14], 16, 20}
		{
			if ((mul2 == 15) || (mul2 == 17) || (mul2 == 18) || (mul2 == 19))
				continue;					// skip invalid PLL2MUL values {15, 17, 18, 19}

			pll2_frequency = crystal / div2 * mul2;	// calculate PLL2 output frequency

			// PLL2 output frequency must be in [18M; 72M] range
			if (pll2_frequency < 18000000ul || pll2_frequency > 72000000ul)
				continue;					// skip invalid setting

			for (div1 = 1; div1 <= 16; div1++)	// PREDIV1 in [1; 16]
				for (mul1 = 4; mul1 <= 10; mul1++)	// PLL1MUL in {[4; 9], 6.5}
				{
					if (mul1 != 10)				// normal case - PLL1MUL in [4; 9]
						pll1_frequency = pll2_frequency / div1 * mul1;
					else						// special case - PLL1MUL == 6.5
						pll1_frequency = pll2_frequency / div1 * 13 / 2;

					// PLL1 output frequency must be over 18MHz, but not higher than desired value
					if (pll1_frequency < 18000000ul || pll1_frequency > frequency)
						continue;

					if (pll1_frequency > best_frequency)	// is this configuration better?
					{
						best_frequency = pll1_frequency;	// yes - save all parameters
						best_div2 = div2;
						best_mul2 = mul2;
						best_div1 = div1;
						best_mul1 = mul1;
					}
				}
		}

	if (best_mul2 == 20)					// handle special case value of PLL2MUL == 20
		best_mul2 = RCC_CFGR2_PLL2MUL20_value;
	else
		best_mul2 -= 2;						// encode "normal" PLL2MUL values

	best_div2 -= 1;							// encode PREDIV2 value
	best_div1 -= 1;							// encode PREDIV1 value

	// PLL1 source == PLL2, configure PLL2MUL, PREDIV2 and PREDIV1
	RCC->CFGR2 |= RCC_CFGR2_PREDIV1SRC | (best_mul2 << RCC_CFGR2_PLL2MUL_bit) |
			(best_div2 << RCC_CFGR2_PREDIV2_bit) | (best_div1 << RCC_CFGR2_PREDIV1_bit);

	while (!RCC_CR_HSERDY_bb);				// wait for stable clock

	RCC_CR_PLL2ON_bb = 1;					// enable PLL2

	if (best_mul1 == 10)					// handle special case value of PLL1MUL == 6.5
		best_mul1 = RCC_CFGR_PLLMUL6_5_value;
	else
		best_mul1 -= 2;						// encode "normal" PLL1MUL values

	// PLL1 source == PREDIV1, configure PLL1MUL, APB1 clk = /2
	RCC->CFGR |= (best_mul1 << RCC_CFGR_PLLMUL_bit) | RCC_CFGR_PLLSRC | RCC_CFGR_PPRE1_DIV2;

	while (!RCC_CR_PLL2RDY_bb);				// wait for PLL2 lock

	RCC_CR_PLLON_bb = 1;					// enable PLL
	while (!RCC_CR_PLLRDY_bb);				// wait for PLL lock

	RCC->CFGR |= RCC_CFGR_SW_PLL;			// change SYSCLK to PLL
	while (((RCC->CFGR) & RCC_CFGR_SWS) != RCC_CFGR_SWS_PLL);	// wait for switch

	return best_frequency;
}

/*------------------------------------------------------------------------*//**
* \brief Initializes system
* \details Enables all GPIO ports
*//*-------------------------------------------------------------------------*/

static void system_init(void)
{
	gpio_init();
}

/*
+=============================================================================+
| ISRs
+=============================================================================+
*/

/******************************************************************************
* END OF FILE
******************************************************************************/
