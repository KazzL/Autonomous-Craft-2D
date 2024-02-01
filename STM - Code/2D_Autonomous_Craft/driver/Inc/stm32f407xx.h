/*
 * stm32f407xx.h
 *
 *  Created on: Dec 31, 2023
 *      Author: KasLe
 */

#ifndef INC_STM32F407XX_H_
#define INC_STM32F407XX_H_

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
	uint32_t	MODER;			//GPIO port mode register
	uint32_t	OTYPER;			//GPIO port output type register
	uint32_t	OSPEEDR;		//GPIO port output speed register
	uint32_t	PUPDR;			//GPIO port pull-up/pull-down register
	uint32_t	IDR;			//GPIO port input data register
	uint32_t	ODR;			//GPIO port output data register
	uint32_t	BSRR;			//GPIO port bit set/reset register
	uint32_t	LCKR;			//GPIO port configuration lock register
	uint32_t	AFR[2];			//GPIO alternate function register
}GPIO_RegDef_t;



#endif /* INC_STM32F407XX_H_ */
