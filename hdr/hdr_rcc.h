/** \file hdr_rcc.h
 * \brief Header with definition of bits in RCC control registers
 * \author Freddie Chopin, http://www.freddiechopin.info/
 * \date 2012-01-07
 */

/******************************************************************************
* chip: STM32F105x / STM32F107x
* compiler: arm-none-eabi-gcc (Sourcery CodeBench Lite 2011.09-69) 4.6.1
******************************************************************************/

#ifndef HDR_RCC_H_
#define HDR_RCC_H_

#include "hdr/hdr_bitband.h"

/*
+=============================================================================+
| global definitions
+=============================================================================+
*/

/*
+-----------------------------------------------------------------------------+
| RCC_CR - Clock Control Register
+-----------------------------------------------------------------------------+
*/

#define RCC_CR_PLL3RDY_bit					29
#define RCC_CR_PLL3ON_bit					28
#define RCC_CR_PLL2RDY_bit					27
#define RCC_CR_PLL2ON_bit					26
#define RCC_CR_PLLRDY_bit					25
#define RCC_CR_PLLON_bit					24
#define RCC_CR_CSSON_bit					19
#define RCC_CR_HSEBYP_bit					18
#define RCC_CR_HSERDY_bit					17
#define RCC_CR_HSEON_bit					16

#define RCC_CR_HSICAL_bit					8
#define RCC_CR_HSICAL_0_bit					8
#define RCC_CR_HSICAL_1_bit					9
#define RCC_CR_HSICAL_2_bit					10
#define RCC_CR_HSICAL_3_bit					11
#define RCC_CR_HSICAL_4_bit					12
#define RCC_CR_HSICAL_5_bit					13
#define RCC_CR_HSICAL_6_bit					14
#define RCC_CR_HSICAL_7_bit					15

#define RCC_CR_HSITRIM_bit					3
#define RCC_CR_HSITRIM_0_bit				3
#define RCC_CR_HSITRIM_1_bit				4
#define RCC_CR_HSITRIM_2_bit				5
#define RCC_CR_HSITRIM_3_bit				6
#define RCC_CR_HSITRIM_4_bit				7

#define RCC_CR_HSIRDY_bit					1
#define RCC_CR_HSION_bit					0

#define RCC_CR_PLL3RDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLL3RDY_bit)
#define RCC_CR_PLL3ON_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLL3ON_bit)
#define RCC_CR_PLL2RDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLL2RDY_bit)
#define RCC_CR_PLL2ON_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLL2ON_bit)
#define RCC_CR_PLLRDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLLRDY_bit)
#define RCC_CR_PLLON_bb						bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_PLLON_bit)
#define RCC_CR_CSSON_bb						bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_CSSON_bit)
#define RCC_CR_HSEBYP_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSEBYP_bit)
#define RCC_CR_HSERDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSERDY_bit)
#define RCC_CR_HSEON_bb						bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSEON_bit)

#define RCC_CR_HSICAL_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_bit)
#define RCC_CR_HSICAL_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_0_bit)
#define RCC_CR_HSICAL_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_1_bit)
#define RCC_CR_HSICAL_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_2_bit)
#define RCC_CR_HSICAL_3_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_3_bit)
#define RCC_CR_HSICAL_4_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_4_bit)
#define RCC_CR_HSICAL_5_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_5_bit)
#define RCC_CR_HSICAL_6_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_6_bit)
#define RCC_CR_HSICAL_7_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSICAL_7_bit)

#define RCC_CR_HSITRIM_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_bit)
#define RCC_CR_HSITRIM_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_0_bit)
#define RCC_CR_HSITRIM_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_1_bit)
#define RCC_CR_HSITRIM_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_2_bit)
#define RCC_CR_HSITRIM_3_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_3_bit)
#define RCC_CR_HSITRIM_4_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSITRIM_4_bit)

#define RCC_CR_HSIRDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSIRDY_bit)
#define RCC_CR_HSION_bb						bitband_t m_BITBAND_PERIPH(&RCC->CR, RCC_CR_HSION_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_CFGR - Clock Configuration Register
+-----------------------------------------------------------------------------+
*/

#define RCC_CFGR_MCO_bit					24
#define RCC_CFGR_MCO_0_bit					24
#define RCC_CFGR_MCO_1_bit					25
#define RCC_CFGR_MCO_2_bit					26
#define RCC_CFGR_MCO_3_bit					27

#define RCC_CFGR_OTGFSPRE_bit				22

#define RCC_CFGR_PLLMUL_bit					18
#define RCC_CFGR_PLLMUL_0_bit				18
#define RCC_CFGR_PLLMUL_1_bit				19
#define RCC_CFGR_PLLMUL_2_bit				20
#define RCC_CFGR_PLLMUL_3_bit				21

#define RCC_CFGR_PLLXTPRE_bit				17
#define RCC_CFGR_PLLSRC_bit					16

#define RCC_CFGR_ADCPRE_bit					14
#define RCC_CFGR_ADCPRE_0_bit				14
#define RCC_CFGR_ADCPRE_1_bit				15

#define RCC_CFGR_PPRE2_bit					11
#define RCC_CFGR_PPRE2_0_bit				11
#define RCC_CFGR_PPRE2_1_bit				12
#define RCC_CFGR_PPRE2_2_bit				13

#define RCC_CFGR_PPRE1_bit					8
#define RCC_CFGR_PPRE1_0_bit				8
#define RCC_CFGR_PPRE1_1_bit				9
#define RCC_CFGR_PPRE1_2_bit				10

#define RCC_CFGR_HPRE_bit					4
#define RCC_CFGR_HPRE_0_bit					4
#define RCC_CFGR_HPRE_1_bit					5
#define RCC_CFGR_HPRE_2_bit					6
#define RCC_CFGR_HPRE_3_bit					7

#define RCC_CFGR_SWS_bit					2
#define RCC_CFGR_SWS_0_bit					2
#define RCC_CFGR_SWS_1_bit					3

#define RCC_CFGR_SW_bit						0
#define RCC_CFGR_SW_0_bit					0
#define RCC_CFGR_SW_1_bit					1

#define RCC_CFGR_MCO_NOCLOCK_value			0
#define RCC_CFGR_MCO_SYSCLK_value			4
#define RCC_CFGR_MCO_HSI_value				5
#define RCC_CFGR_MCO_HSE_value				6
#define RCC_CFGR_MCO_PLLCLK_Div2_value		7
#define RCC_CFGR_MCO_PLL2CLK_value			8
#define RCC_CFGR_MCO_PLL3CLK_Div2_value		9
#define RCC_CFGR_MCO_Ext_HSE_value			10
#define RCC_CFGR_MCO_PLL3CLK_value			11
#define RCC_CFGR_MCO_mask					15

#define RCC_CFGR_PLLMUL4_value				2
#define RCC_CFGR_PLLMUL5_value				3
#define RCC_CFGR_PLLMUL6_value				4
#define RCC_CFGR_PLLMUL7_value				5
#define RCC_CFGR_PLLMUL8_value				6
#define RCC_CFGR_PLLMUL9_value				7
#define RCC_CFGR_PLLMUL6_5_value			13
#define RCC_CFGR_PLLMUL_mask				15

#define RCC_CFGR_ADCPRE_DIV2_value			0
#define RCC_CFGR_ADCPRE_DIV4_value			1
#define RCC_CFGR_ADCPRE_DIV6_value			2
#define RCC_CFGR_ADCPRE_DIV8_value			3
#define RCC_CFGR_ADCPRE_mask				3

#define RCC_CFGR_PPRE2_DIV1_value			0
#define RCC_CFGR_PPRE2_DIV2_value			4
#define RCC_CFGR_PPRE2_DIV4_value			5
#define RCC_CFGR_PPRE2_DIV8_value			6
#define RCC_CFGR_PPRE2_DIV16_value			7
#define RCC_CFGR_PPRE2_mask					7

#define RCC_CFGR_PPRE1_DIV1_value			0
#define RCC_CFGR_PPRE1_DIV2_value			4
#define RCC_CFGR_PPRE1_DIV4_value			5
#define RCC_CFGR_PPRE1_DIV8_value			6
#define RCC_CFGR_PPRE1_DIV16_value			7
#define RCC_CFGR_PPRE1_mask					7

#define RCC_CFGR_HPRE_DIV1_value			0
#define RCC_CFGR_HPRE_DIV2_value			8
#define RCC_CFGR_HPRE_DIV4_value			9
#define RCC_CFGR_HPRE_DIV8_value			10
#define RCC_CFGR_HPRE_DIV16_value			11
#define RCC_CFGR_HPRE_DIV64_value			12
#define RCC_CFGR_HPRE_DIV128_value			13
#define RCC_CFGR_HPRE_DIV256_value			14
#define RCC_CFGR_HPRE_DIV512_value			15
#define RCC_CFGR_HPRE_mask					15

#define RCC_CFGR_SWS_HSI_value				0
#define RCC_CFGR_SWS_HSE_value				1
#define RCC_CFGR_SWS_PLL_value				2
#define RCC_CFGR_SWS_mask					3

#define RCC_CFGR_SW_HSI_value				0
#define RCC_CFGR_SW_HSE_value				1
#define RCC_CFGR_SW_PLL_value				2
#define RCC_CFGR_SW_mask					3

#define RCC_CFGR_MCO_bb						bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_MCO_bit)
#define RCC_CFGR_MCO_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_MCO_0_bit)
#define RCC_CFGR_MCO_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_MCO_1_bit)
#define RCC_CFGR_MCO_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_MCO_2_bit)
#define RCC_CFGR_MCO_3_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_MCO_3_bit)

#define RCC_CFGR_OTGFSPRE_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_OTGFSPRE_bit)

#define RCC_CFGR_PLLMUL_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLMUL_bit)
#define RCC_CFGR_PLLMUL_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLMUL_0_bit)
#define RCC_CFGR_PLLMUL_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLMUL_1_bit)
#define RCC_CFGR_PLLMUL_2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLMUL_2_bit)
#define RCC_CFGR_PLLMUL_3_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLMUL_3_bit)

#define RCC_CFGR_PLLXTPRE_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLXTPRE_bit)
#define RCC_CFGR_PLLSRC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PLLSRC_bit)

#define RCC_CFGR_ADCPRE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_ADCPRE_bit)
#define RCC_CFGR_ADCPRE_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_ADCPRE_0_bit)
#define RCC_CFGR_ADCPRE_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_ADCPRE_1_bit)

#define RCC_CFGR_PPRE2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE2_bit)
#define RCC_CFGR_PPRE2_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE2_0_bit)
#define RCC_CFGR_PPRE2_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE2_1_bit)
#define RCC_CFGR_PPRE2_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE2_2_bit)

#define RCC_CFGR_PPRE1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE1_bit)
#define RCC_CFGR_PPRE1_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE1_0_bit)
#define RCC_CFGR_PPRE1_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE1_1_bit)
#define RCC_CFGR_PPRE1_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_PPRE1_2_bit)

#define RCC_CFGR_HPRE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_HPRE_bit)
#define RCC_CFGR_HPRE_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_HPRE_0_bit)
#define RCC_CFGR_HPRE_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_HPRE_1_bit)
#define RCC_CFGR_HPRE_2_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_HPRE_2_bit)
#define RCC_CFGR_HPRE_3_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_HPRE_3_bit)

#define RCC_CFGR_SWS_bb						bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SWS_bit)
#define RCC_CFGR_SWS_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SWS_0_bit)
#define RCC_CFGR_SWS_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SWS_1_bit)

#define RCC_CFGR_SW_bb						bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SW_bit)
#define RCC_CFGR_SW_0_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SW_0_bit)
#define RCC_CFGR_SW_1_bb					bitband_t m_BITBAND_PERIPH(&RCC->CFGR, RCC_CFGR_SW_1_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_CIR - Clock interrupt register
+-----------------------------------------------------------------------------+
*/

#define RCC_CIR_CSSC_bit					23
#define RCC_CIR_PLL3RDYC_bit				22
#define RCC_CIR_PLL2RDYC_bit				21
#define RCC_CIR_PLLRDYC_bit					20
#define RCC_CIR_HSERDYC_bit					19
#define RCC_CIR_HSIRDYC_bit					18
#define RCC_CIR_LSERDYC_bit					17
#define RCC_CIR_LSIRDYC_bit					16
#define RCC_CIR_PLL3RDYIE_bit				14
#define RCC_CIR_PLL2RDYIE_bit				13
#define RCC_CIR_PLLRDYIE_bit				12
#define RCC_CIR_HSERDYIE_bit				11
#define RCC_CIR_HSIRDYIE_bit				10
#define RCC_CIR_LSERDYIE_bit				9
#define RCC_CIR_LSIRDYIE_bit				8
#define RCC_CIR_CSSF_bit					7
#define RCC_CIR_PLL3RDYF_bit				6
#define RCC_CIR_PLL2RDYF_bit				5
#define RCC_CIR_PLLRDYF_bit					4
#define RCC_CIR_HSERDYF_bit					3
#define RCC_CIR_HSIRDYF_bit					2
#define RCC_CIR_LSERDYF_bit					1
#define RCC_CIR_LSIRDYF_bit					0

#define RCC_CIR_CSSC_bb						bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_CSSC_bit)
#define RCC_CIR_PLL3RDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL3RDYC_bit)
#define RCC_CIR_PLL2RDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL2RDYC_bit)
#define RCC_CIR_PLLRDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLLRDYC_bit)
#define RCC_CIR_HSERDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSERDYC_bit)
#define RCC_CIR_HSIRDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSIRDYC_bit)
#define RCC_CIR_LSERDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSERDYC_bit)
#define RCC_CIR_LSIRDYC_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSIRDYC_bit)
#define RCC_CIR_PLL3RDYIE_bb				bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL3RDYIE_bit)
#define RCC_CIR_PLL2RDYIE_bb				bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL2RDYIE_bit)
#define RCC_CIR_PLLRDYIE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLLRDYIE_bit)
#define RCC_CIR_HSERDYIE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSERDYIE_bit)
#define RCC_CIR_HSIRDYIE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSIRDYIE_bit)
#define RCC_CIR_LSERDYIE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSERDYIE_bit)
#define RCC_CIR_LSIRDYIE_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSIRDYIE_bit)
#define RCC_CIR_CSSF_bb						bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_CSSF_bit)
#define RCC_CIR_PLL3RDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL3RDYF_bit)
#define RCC_CIR_PLL2RDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLL2RDYF_bit)
#define RCC_CIR_PLLRDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_PLLRDYF_bit)
#define RCC_CIR_HSERDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSERDYF_bit)
#define RCC_CIR_HSIRDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_HSIRDYF_bit)
#define RCC_CIR_LSERDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSERDYF_bit)
#define RCC_CIR_LSIRDYF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CIR, RCC_CIR_LSIRDYF_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_APB2RSTR - APB2 peripheral reset register
+-----------------------------------------------------------------------------+
*/

#define RCC_APB2RSTR_USART1RST_bit			14
#define RCC_APB2RSTR_SPI1RST_bit			12
#define RCC_APB2RSTR_TIM1RST_bit			11
#define RCC_APB2RSTR_ADC2RST_bit			10
#define RCC_APB2RSTR_ADC1RST_bit			9
#define RCC_APB2RSTR_IOPERST_bit			6
#define RCC_APB2RSTR_IOPDRST_bit			5
#define RCC_APB2RSTR_IOPCRST_bit			4
#define RCC_APB2RSTR_IOPBRST_bit			3
#define RCC_APB2RSTR_IOPARST_bit			2
#define RCC_APB2RSTR_AFIORST_bit 			0

#define RCC_APB2RSTR_USART1RST_bb			bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_USART1RST_bit)
#define RCC_APB2RSTR_SPI1RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_SPI1RST_bit)
#define RCC_APB2RSTR_TIM1RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_TIM1RST_bit)
#define RCC_APB2RSTR_ADC2RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_ADC2RST_bit)
#define RCC_APB2RSTR_ADC1RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_ADC1RST_bit)
#define RCC_APB2RSTR_IOPERST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_IOPERST_bit)
#define RCC_APB2RSTR_IOPDRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_IOPDRST_bit)
#define RCC_APB2RSTR_IOPCRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_IOPCRST_bit)
#define RCC_APB2RSTR_IOPBRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_IOPBRST_bit)
#define RCC_APB2RSTR_IOPARST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_IOPARST_bit)
#define RCC_APB2RSTR_AFIORST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2RSTR, RCC_APB2RSTR_AFIORST_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_APB1RSTR - APB1 peripheral reset register
+-----------------------------------------------------------------------------+
*/

#define RCC_APB1RSTR_DACRST_bit				29
#define RCC_APB1RSTR_PWRRST_bit				28
#define RCC_APB1RSTR_BKPRST_bit				27
#define RCC_APB1RSTR_CAN2RST_bit			26
#define RCC_APB1RSTR_CAN1RST_bit			25
#define RCC_APB1RSTR_I2C2RST_bit			22
#define RCC_APB1RSTR_I2C1RST_bit			21
#define RCC_APB1RSTR_UART5RST_bit			20
#define RCC_APB1RSTR_UART4RST_bit			19
#define RCC_APB1RSTR_USART3RST_bit			18
#define RCC_APB1RSTR_USART2RST_bit			17
#define RCC_APB1RSTR_SPI3RST_bit			15
#define RCC_APB1RSTR_SPI2RST_bit			14
#define RCC_APB1RSTR_WWDGRST_bit			11
#define RCC_APB1RSTR_TIM7RST_bit			5
#define RCC_APB1RSTR_TIM6RST_bit			4
#define RCC_APB1RSTR_TIM5RST_bit			3
#define RCC_APB1RSTR_TIM4RST_bit			2
#define RCC_APB1RSTR_TIM3RST_bit			1
#define RCC_APB1RSTR_TIM2RST_bit			0

#define RCC_APB1RSTR_DACRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_DACRST_bit)
#define RCC_APB1RSTR_PWRRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_PWRRST_bit)
#define RCC_APB1RSTR_BKPRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_BKPRST_bit)
#define RCC_APB1RSTR_CAN2RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_CAN2RST_bit)
#define RCC_APB1RSTR_CAN1RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_CAN1RST_bit)
#define RCC_APB1RSTR_I2C2RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_I2C2RST_bit)
#define RCC_APB1RSTR_I2C1RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_I2C1RST_bit)
#define RCC_APB1RSTR_UART5RST_bb			bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_UART5RST_bit)
#define RCC_APB1RSTR_UART4RST_bb			bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_UART4RST_bit)
#define RCC_APB1RSTR_USART3RST_bb			bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_USART3RST_bit)
#define RCC_APB1RSTR_USART2RST_bb			bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_USART2RST_bit)
#define RCC_APB1RSTR_SPI3RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_SPI3RST_bit)
#define RCC_APB1RSTR_SPI2RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_SPI2RST_bit)
#define RCC_APB1RSTR_WWDGRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_WWDGRST_bit)
#define RCC_APB1RSTR_TIM7RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM7RST_bit)
#define RCC_APB1RSTR_TIM6RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM6RST_bit)
#define RCC_APB1RSTR_TIM5RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM5RST_bit)
#define RCC_APB1RSTR_TIM4RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM4RST_bit)
#define RCC_APB1RSTR_TIM3RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM3RST_bit)
#define RCC_APB1RSTR_TIM2RST_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1RSTR, RCC_APB1RSTR_TIM2RST_bit)


/*
+-----------------------------------------------------------------------------+
| RCC_AHBENR - AHB peripheral clock enable register
+-----------------------------------------------------------------------------+
*/

#define RCC_AHBENR_ETHMACRXEN_bit			16
#define RCC_AHBENR_ETHMACTXEN_bit			15
#define RCC_AHBENR_ETHMACEN_bit				14
#define RCC_AHBENR_OTGFSEN_bit				12
#define RCC_AHBENR_CRCEN_bit				6
#define RCC_AHBENR_FLITFEN_bit				4
#define RCC_AHBENR_SRAMEN_bit				2
#define RCC_AHBENR_DMA2EN_bit				1
#define RCC_AHBENR_DMA1EN_bit				0

#define RCC_AHBENR_ETHMACRXEN_bb			bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_ETHMACRXEN_bit)
#define RCC_AHBENR_ETHMACTXEN_bb			bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_ETHMACTXEN_bit)
#define RCC_AHBENR_ETHMACEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_ETHMACEN_bit)
#define RCC_AHBENR_OTGFSEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_OTGFSEN_bit)
#define RCC_AHBENR_CRCEN_bb					bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_CRCEN_bit)
#define RCC_AHBENR_FLITFEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_FLITFEN_bit)
#define RCC_AHBENR_SRAMEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_SRAMEN_bit)
#define RCC_AHBENR_DMA2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_DMA2EN_bit)
#define RCC_AHBENR_DMA1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBENR, RCC_AHBENR_DMA1EN_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_APB2ENR - APB2 peripheral clock enable register
+-----------------------------------------------------------------------------+
*/

#define RCC_APB2ENR_USART1EN_bit			14
#define RCC_APB2ENR_SPI1EN_bit				12
#define RCC_APB2ENR_TIM1EN_bit				11
#define RCC_APB2ENR_ADC2EN_bit				10
#define RCC_APB2ENR_ADC1EN_bit				9
#define RCC_APB2ENR_IOPEEN_bit				6
#define RCC_APB2ENR_IOPDEN_bit				5
#define RCC_APB2ENR_IOPCEN_bit				4
#define RCC_APB2ENR_IOPBEN_bit				3
#define RCC_APB2ENR_IOPAEN_bit				2
#define RCC_APB2ENR_AFIOEN_bit				0

#define RCC_APB2ENR_USART1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_USART1EN_bit)
#define RCC_APB2ENR_SPI1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_SPI1EN_bit)
#define RCC_APB2ENR_TIM1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_TIM1EN_bit)
#define RCC_APB2ENR_ADC2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_ADC2EN_bit)
#define RCC_APB2ENR_ADC1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_ADC1EN_bit)
#define RCC_APB2ENR_IOPEEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_IOPEEN_bit)
#define RCC_APB2ENR_IOPDEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_IOPDEN_bit)
#define RCC_APB2ENR_IOPCEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_IOPCEN_bit)
#define RCC_APB2ENR_IOPBEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_IOPBEN_bit)
#define RCC_APB2ENR_IOPAEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_IOPAEN_bit)
#define RCC_APB2ENR_AFIOEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB2ENR, RCC_APB2ENR_AFIOEN_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_APB1ENR - APB1 peripheral clock enable register
+-----------------------------------------------------------------------------+
*/

#define RCC_APB1ENR_DACEN_bit				29
#define RCC_APB1ENR_PWREN_bit				28
#define RCC_APB1ENR_BKPEN_bit				27
#define RCC_APB1ENR_CAN2EN_bit				26
#define RCC_APB1ENR_CAN1EN_bit				25
#define RCC_APB1ENR_I2C2EN_bit				22
#define RCC_APB1ENR_I2C1EN_bit				21
#define RCC_APB1ENR_UART5EN_bit				20
#define RCC_APB1ENR_UART4EN_bit				19
#define RCC_APB1ENR_USART3EN_bit			18
#define RCC_APB1ENR_USART2EN_bit			17
#define RCC_APB1ENR_SPI3EN_bit				15
#define RCC_APB1ENR_SPI2EN_bit				14
#define RCC_APB1ENR_WWDGEN_bit				11
#define RCC_APB1ENR_TIM7EN_bit				5
#define RCC_APB1ENR_TIM6EN_bit				4
#define RCC_APB1ENR_TIM5EN_bit				3
#define RCC_APB1ENR_TIM4EN_bit				2
#define RCC_APB1ENR_TIM3EN_bit				1
#define RCC_APB1ENR_TIM2EN_bit				0

#define RCC_APB1ENR_DACEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_DACEN_bit)
#define RCC_APB1ENR_PWREN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_PWREN_bit)
#define RCC_APB1ENR_BKPEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_BKPEN_bit)
#define RCC_APB1ENR_CAN2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_CAN2EN_bit)
#define RCC_APB1ENR_CAN1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_CAN1EN_bit)
#define RCC_APB1ENR_I2C2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_I2C2EN_bit)
#define RCC_APB1ENR_I2C1EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_I2C1EN_bit)
#define RCC_APB1ENR_UART5EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_UART5EN_bit)
#define RCC_APB1ENR_UART4EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_UART4EN_bit)
#define RCC_APB1ENR_USART3EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_USART3EN_bit)
#define RCC_APB1ENR_USART2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_USART2EN_bit)
#define RCC_APB1ENR_SPI3EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_SPI3EN_bit)
#define RCC_APB1ENR_SPI2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_SPI2EN_bit)
#define RCC_APB1ENR_WWDGEN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_WWDGEN_bit)
#define RCC_APB1ENR_TIM7EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM7EN_bit)
#define RCC_APB1ENR_TIM6EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM6EN_bit)
#define RCC_APB1ENR_TIM5EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM5EN_bit)
#define RCC_APB1ENR_TIM4EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM4EN_bit)
#define RCC_APB1ENR_TIM3EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM3EN_bit)
#define RCC_APB1ENR_TIM2EN_bb				bitband_t m_BITBAND_PERIPH(&RCC->APB1ENR, RCC_APB1ENR_TIM2EN_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_BDCR - Backup domain control register
+-----------------------------------------------------------------------------+
*/

#define RCC_BDCR_BDRST_bit					16
#define RCC_BDCR_RTCEN_bit					15

#define RCC_BDCR_RTCSEL_bit					8
#define RCC_BDCR_RTCSEL_0_bit				8
#define RCC_BDCR_RTCSEL_1_bit				9

#define RCC_BDCR_LSEBYP_bit					2
#define RCC_BDCR_LSERDY_bit					1
#define RCC_BDCR_LSEON_bit					0

#define RCC_BDCR_RTCSEL_NOCLOCK_value		0
#define RCC_BDCR_RTCSEL_LSE_value			1
#define RCC_BDCR_RTCSEL_LSI_value			2
#define RCC_BDCR_RTCSEL_HSE_value			3
#define RCC_BDCR_RTCSEL_mask				3

#define RCC_BDCR_BDRST_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_BDRST_bit)
#define RCC_BDCR_RTCEN_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_RTCEN_bit)
#define RCC_BDCR_RTCSEL_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_RTCSEL_bit)
#define RCC_BDCR_RTCSEL_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_RTCSEL_0_bit)
#define RCC_BDCR_RTCSEL_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_RTCSEL_1_bit)
#define RCC_BDCR_LSEBYP_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_LSEBYP_bit)
#define RCC_BDCR_LSERDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_LSERDY_bit)
#define RCC_BDCR_LSEON_bb					bitband_t m_BITBAND_PERIPH(&RCC->BDCR, RCC_BDCR_LSEON_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_CSR - Control/status register
+-----------------------------------------------------------------------------+
*/

#define RCC_CSR_LPWRRSTF_bit				31
#define RCC_CSR_WWDGRSTF_bit				30
#define RCC_CSR_IWDGRSTF_bit				29
#define RCC_CSR_SFTRSTF_bit					28
#define RCC_CSR_PORRSTF_bit					27
#define RCC_CSR_PINRSTF_bit					26
#define RCC_CSR_RMVF_bit					24
#define RCC_CSR_LSIRDY_bit					1
#define RCC_CSR_LSION_bit					0

#define RCC_CSR_LPWRRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_LPWRRSTF_bit)
#define RCC_CSR_WWDGRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_WWDGRSTF_bit)
#define RCC_CSR_IWDGRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_IWDGRSTF_bit)
#define RCC_CSR_SFTRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_SFTRSTF_bit)
#define RCC_CSR_PORRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_PORRSTF_bit)
#define RCC_CSR_PINRSTF_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_PINRSTF_bit)
#define RCC_CSR_RMVF_bb						bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_RMVF_bit)
#define RCC_CSR_LSIRDY_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_LSIRDY_bit)
#define RCC_CSR_LSION_bb					bitband_t m_BITBAND_PERIPH(&RCC->CSR, RCC_CSR_LSION_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_AHBRSTR - AHB peripheral clock reset register
+-----------------------------------------------------------------------------+
*/

#define RCC_AHBRSTR_ETHMACRST_bit			14
#define RCC_AHBRSTR_OTGFSRST_bit			12

#define RCC_AHBRSTR_ETHMACRST_bb			bitband_t m_BITBAND_PERIPH(&RCC->AHBRSTR, RCC_AHBRSTR_ETHMACRST_bit)
#define RCC_AHBRSTR_OTGFSRST_bb				bitband_t m_BITBAND_PERIPH(&RCC->AHBRSTR, RCC_AHBRSTR_OTGFSRST_bit)

/*
+-----------------------------------------------------------------------------+
| RCC_CFGR2 - Clock configuration register2
+-----------------------------------------------------------------------------+
*/

#define RCC_CFGR2_I2S3SRC_bit				18
#define RCC_CFGR2_I2S2SRC_bit				17
#define RCC_CFGR2_PREDIV1SRC_bit			16

#define RCC_CFGR2_PLL3MUL_bit				12
#define RCC_CFGR2_PLL3MUL_0_bit				12
#define RCC_CFGR2_PLL3MUL_1_bit				13
#define RCC_CFGR2_PLL3MUL_2_bit				14
#define RCC_CFGR2_PLL3MUL_3_bit				15

#define RCC_CFGR2_PLL2MUL_bit				8
#define RCC_CFGR2_PLL2MUL_0_bit				8
#define RCC_CFGR2_PLL2MUL_1_bit				9
#define RCC_CFGR2_PLL2MUL_2_bit				10
#define RCC_CFGR2_PLL2MUL_3_bit				11

#define RCC_CFGR2_PREDIV2_bit				4
#define RCC_CFGR2_PREDIV2_0_bit				4
#define RCC_CFGR2_PREDIV2_1_bit				5
#define RCC_CFGR2_PREDIV2_2_bit				6
#define RCC_CFGR2_PREDIV2_3_bit				7

#define RCC_CFGR2_PREDIV1_bit				0
#define RCC_CFGR2_PREDIV1_0_bit				0
#define RCC_CFGR2_PREDIV1_1_bit				1
#define RCC_CFGR2_PREDIV1_2_bit				2
#define RCC_CFGR2_PREDIV1_3_bit				3

#define RCC_CFGR2_PLL3MUL8_value			6
#define RCC_CFGR2_PLL3MUL9_value			7
#define RCC_CFGR2_PLL3MUL10_value			8
#define RCC_CFGR2_PLL3MUL11_value			9
#define RCC_CFGR2_PLL3MUL12_value			10
#define RCC_CFGR2_PLL3MUL13_value			11
#define RCC_CFGR2_PLL3MUL14_value			12
#define RCC_CFGR2_PLL3MUL16_value			14
#define RCC_CFGR2_PLL3MUL20_value			15
#define RCC_CFGR2_PLL3MUL_mask				15

#define RCC_CFGR2_PLL2MUL8_value			6
#define RCC_CFGR2_PLL2MUL9_value			7
#define RCC_CFGR2_PLL2MUL10_value			8
#define RCC_CFGR2_PLL2MUL11_value			9
#define RCC_CFGR2_PLL2MUL12_value			10
#define RCC_CFGR2_PLL2MUL13_value			11
#define RCC_CFGR2_PLL2MUL14_value			12
#define RCC_CFGR2_PLL2MUL16_value			14
#define RCC_CFGR2_PLL2MUL20_value			15
#define RCC_CFGR2_PLL2MUL_mask				15

#define RCC_CFGR2_PREDIV2_DIV1_value		0
#define RCC_CFGR2_PREDIV2_DIV2_value		1
#define RCC_CFGR2_PREDIV2_DIV3_value		2
#define RCC_CFGR2_PREDIV2_DIV4_value		3
#define RCC_CFGR2_PREDIV2_DIV5_value		4
#define RCC_CFGR2_PREDIV2_DIV6_value		5
#define RCC_CFGR2_PREDIV2_DIV7_value		6
#define RCC_CFGR2_PREDIV2_DIV8_value		7
#define RCC_CFGR2_PREDIV2_DIV9_value		8
#define RCC_CFGR2_PREDIV2_DIV10_value		9
#define RCC_CFGR2_PREDIV2_DIV11_value		10
#define RCC_CFGR2_PREDIV2_DIV12_value		11
#define RCC_CFGR2_PREDIV2_DIV13_value		12
#define RCC_CFGR2_PREDIV2_DIV14_value		13
#define RCC_CFGR2_PREDIV2_DIV15_value		14
#define RCC_CFGR2_PREDIV2_DIV16_value		15
#define RCC_CFGR2_PREDIV2_mask				15

#define RCC_CFGR2_PREDIV1_DIV1_value		0
#define RCC_CFGR2_PREDIV1_DIV2_value		1
#define RCC_CFGR2_PREDIV1_DIV3_value		2
#define RCC_CFGR2_PREDIV1_DIV4_value		3
#define RCC_CFGR2_PREDIV1_DIV5_value		4
#define RCC_CFGR2_PREDIV1_DIV6_value		5
#define RCC_CFGR2_PREDIV1_DIV7_value		6
#define RCC_CFGR2_PREDIV1_DIV8_value		7
#define RCC_CFGR2_PREDIV1_DIV9_value		8
#define RCC_CFGR2_PREDIV1_DIV10_value		9
#define RCC_CFGR2_PREDIV1_DIV11_value		10
#define RCC_CFGR2_PREDIV1_DIV12_value		11
#define RCC_CFGR2_PREDIV1_DIV13_value		12
#define RCC_CFGR2_PREDIV1_DIV14_value		13
#define RCC_CFGR2_PREDIV1_DIV15_value		14
#define RCC_CFGR2_PREDIV1_DIV16_value		15
#define RCC_CFGR2_PREDIV1_mask				15

#define RCC_CFGR2_I2S3SRC_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_I2S3SRC_bit)
#define RCC_CFGR2_I2S2SRC_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_I2S2SRC_bit)
#define RCC_CFGR2_PREDIV1SRC_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1SRC_bit)
#define RCC_CFGR2_PLL3MUL_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL3MUL_bit)
#define RCC_CFGR2_PLL3MUL_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL3MUL_0_bit)
#define RCC_CFGR2_PLL3MUL_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL3MUL_1_bit)
#define RCC_CFGR2_PLL3MUL_2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL3MUL_2_bit)
#define RCC_CFGR2_PLL3MUL_3_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL3MUL_3_bit)
#define RCC_CFGR2_PLL2MUL_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL2MUL_bit)
#define RCC_CFGR2_PLL2MUL_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL2MUL_0_bit)
#define RCC_CFGR2_PLL2MUL_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL2MUL_1_bit)
#define RCC_CFGR2_PLL2MUL_2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL2MUL_2_bit)
#define RCC_CFGR2_PLL2MUL_3_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PLL2MUL_3_bit)
#define RCC_CFGR2_PREDIV2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV2_bit)
#define RCC_CFGR2_PREDIV2_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV2_0_bit)
#define RCC_CFGR2_PREDIV2_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV2_1_bit)
#define RCC_CFGR2_PREDIV2_2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV2_2_bit)
#define RCC_CFGR2_PREDIV2_3_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV2_3_bit)
#define RCC_CFGR2_PREDIV1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1_bit)
#define RCC_CFGR2_PREDIV1_0_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1_0_bit)
#define RCC_CFGR2_PREDIV1_1_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1_1_bit)
#define RCC_CFGR2_PREDIV1_2_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1_2_bit)
#define RCC_CFGR2_PREDIV1_3_bb				bitband_t m_BITBAND_PERIPH(&RCC->CFGR2, RCC_CFGR2_PREDIV1_3_bit)

/******************************************************************************
* END OF FILE
******************************************************************************/
#endif /* HDR_RCC_H_ */
