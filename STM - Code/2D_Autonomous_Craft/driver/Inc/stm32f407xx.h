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
#define PERIPH_BASE					0x40000000U
#define APB1PERPH_BASE				PERIPH_BASE
#define APB2PERPH_BASE				0x40010000U
#define AHB1PERPH_BASE				0x40020000U
#define AHB2PERPH_BASE				0x50000000U

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



#endif /* INC_STM32F407XX_H_ */
