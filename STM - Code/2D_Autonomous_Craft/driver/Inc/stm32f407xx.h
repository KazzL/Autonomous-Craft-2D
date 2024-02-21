/*
 * stm32f407xx.h
 *
 *  Created on: Dec 31, 2023
 *      Author: KasLe
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

#include <stdint.h>

#define __vo volatile

/* Base Address of Flash and SRAM Memories */
#define FLASH_BASEADDR				0x08000000U
#define SRAM1_BASEADDR				0x20000000U
#define SRAM2_BASEADDR				0x2001C000U
#define ROM_BASEADDR				0x1FFF0000U
#define SRAM 						SRAM1_BASEADDR

/*Base address of AHB and APB busses */
#define PERIPH_BASEADDR				0x40000000U
#define APB1PERPH_BASEADDR			PERIPH_BASE
#define APB2PERPH_BASEADDR			0x40010000U
#define AHB1PERPH_BASEADDR			0x40020000U
#define AHB2PERPH_BASEADDR			0x50000000U

/*Base addresses of peripherals wich are hanging on the AHB1 bus*/
#define GPIOA_BASEADDR				(AHB1PERPH_BASE + 0x0000)
#define GPIOB_BASEADDR				(AHB1PERPH_BASE + 0x0400)
#define GPIOC_BASEADDR				(AHB1PERPH_BASE + 0x0800)
#define GPIOD_BASEADDR				(AHB1PERPH_BASE + 0x0C00)
#define GPIOE_BASEADDR				(AHB1PERPH_BASE + 0x1000)
#define GPIOF_BASEADDR				(AHB1PERPH_BASE + 0x1400)
#define GPIOG_BASEADDR				(AHB1PERPH_BASE + 0x1800)
#define GPIOH_BASEADDR				(AHB1PERPH_BASE + 0x1C00)
#define GPIOI_BASEADDR				(AHB1PERPH_BASE + 0x2000)
#define RCC_BASEADDR				(AHB1PERPH_BASE + 0x3800)

/*Base addresses of peripherals on the APB bus*/
#define I2C1_BASEADDR				(APB1PERPH_BASE + 0x5400)
#define I2C2_BASEADDR				(APB1PERPH_BASE + 0x5800)
#define I2C3_BASEADDR				(APB1PERPH_BASE + 0x5C00)

#define SPI2_BASEADDR					(APB1PERPH_BASEADDR + 0x3800)
#define SPI3_BASEADDR					(APB1PERPH_BASEADDR + 0x3C00)

#define USART2_BASEADDR					(APB1PERPH_BASEADDR + 0x4400)
#define USART3_BASEADDR					(APB1PERPH_BASEADDR + 0x4800)
#define UART4_BASEADDR					(APB1PERPH_BASEADDR + 0x4C00)
#define UART5_BASEADDR					(APB1PERPH_BASEADDR + 0x5000)

/*Base Addresses of peripherals which hang from the APB2 bus*/
#define EXTI_BASEADDR					(APB2PERPH_BASEADDR + 0x3C00)
#define SPI1_BASEADDR					(APB2PERPH_BASEADDR + 0x3000)
#define SYSCFG_BASEADDR					(APB2PERPH_BASEADDR + 0x3800)
#define USART1_BASEADDR					(APB2PERPH_BASEADDR + 0x1000)
#define USART6_BASEADDR					(APB2PERPH_BASEADDR + 0x1400)


/****************************** peripheral register definition structures ********************/

/*
 * Note: Registers of periphers are specific to MCU
 * e.g: Number of registers of SPI peripheral of STM32F4x family of MCUs may be diffrent (more or less)
 * Compared to number of registers of SPI peripheral of SPM32Lx or STMF0x maily MCUs
 * pPlease check your device RM
 *
 */

typedef struct
{
	__vo uint32_t	MODER;			//GPIO port mode register
	__vo uint32_t	OTYPER;			//GPIO port output type register
	__vo uint32_t	OSPEEDR;		//GPIO port output speed register
	__vo uint32_t	PUPDR;			//GPIO port pull-up/pull-down register
	__vo uint32_t	IDR;			//GPIO port input data register
	__vo uint32_t	ODR;			//GPIO port output data register
	__vo uint32_t	BSRR;			//GPIO port bit set/reset register
	__vo uint32_t	LCKR;			//GPIO port configuration lock register
	__vo uint32_t	AFR[2];			//GPIO alternate function register
}GPIO_RegDef_t;




typedef struct
{
	__vo uint32_t	CR;					//
	__vo uint32_t	PLLCFGR;			//
	__vo uint32_t	CFGR;				//
	__vo uint32_t	CIR;				//
	__vo uint32_t	AHB1RSTR;			//
	__vo uint32_t	AHB2RSTR;			//
	__vo uint32_t	AHB3RSTR;			//
	__vo uint32_t	RESERVED0;			// 0X1C
	__vo uint32_t	APB1RSTR;			//
	__vo uint32_t	APB2RSTR;			//
	__vo uint32_t	RESERVED1[2];		// 0X28 - 0X2C
	__vo uint32_t	AHB1ENR;			//
	__vo uint32_t	AHB2ENR;			//
	__vo uint32_t	AHB3ENR;			//
	__vo uint32_t	RESERVED2;			//
	__vo uint32_t	APB1ENR;			//
	__vo uint32_t	APB2ENR;			//
	__vo uint32_t	RESERVED3[2];		//
	__vo uint32_t	AHB1LPENR;			//
	__vo uint32_t	AHB2LPENR;			//
	__vo uint32_t	AHB3LPENR;			//
	__vo uint32_t	RESERVED4;			//
	__vo uint32_t	APB1LPENR;			//
	__vo uint32_t	APB2LPENR;			//
	__vo uint32_t	RESERVED5[2];		//
	__vo uint32_t	BDCR;				//
	__vo uint32_t	CSR;				//
	__vo uint32_t	RESERVED6[2];		//
	__vo uint32_t	SSCGR;				//
	__vo uint32_t	PLLI2SCFGR;			//
	__vo uint32_t	PLLSAICFGR;			//
	__vo uint32_t	DCKCFGR;			//
}RCC_RegDef_t;

/*
 * peripheral definitions (peripheral base addresses type casted to xxx_RegDef_t)
 */
#define GPIOA 		((GPIO_RegDef_t*) GPIOA_BASEADDR)
#define GPIOB 		((GPIO_RegDef_t*) GPIOB_BASEADDR)
#define GPIOC		((GPIO_RegDef_t*) GPIOC_BASEADDR)
#define GPIOD		((GPIO_RegDef_t*) GPIOD_BASEADDR)
#define GPIOE 		((GPIO_RegDef_t*) GPIOE_BASEADDR)
#define GPIOF 		((GPIO_RegDef_t*) GPIOF_BASEADDR)
#define GPIOG 		((GPIO_RegDef_t*) GPIOG_BASEADDR)
#define GPIOH 		((GPIO_RegDef_t*) GPIOH_BASEADDR)
#define GPIOI 		((GPIO_RegDef_t*) GPIOI_BASEADDR)

#define RCC			((RCC_RegDef_t*) RCC_BASEADDR)




#endif /* INC_STM32F407XX_H_ */
