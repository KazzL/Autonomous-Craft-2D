#ifndef DRIVERS_INC_MSP432P401R_H_
//#define DRIVERS_INC_MSP432P401R_H_

#include <stdint.h>

#define __vo volatile

#define FLASH_BASEADDR
#define SRAM_BASEADDR                   0x20000000U
#define ROM_BASEADDR                    0x02000000U

#define PERIPH_BASEADDR                 0x40000000U
#define SBUS_BASEADDR                   0x20000000U //Connects to SRAM and on-chip peripherals.
#define PPB_BASEADDR                    0xE0040000U //Connects to some system-critical modules like RSTCTL and SYSCTL. Also the Core internal components like NVIC and MPU are mapped on this bus.

/*Base addresses of peripherals */
#define PORT_REG_BASEADDR               0x40004C00U //Port registers base address
#define PORT_1_2_BASEADDR               (PORT_REG_BASEADDR + 0x000)
#define PORT_3_4_BASEADDR               (PORT_REG_BASEADDR + 0x020)
#define PORT_5_6_BASEADDR               (PORT_REG_BASEADDR + 0x040)
#define PORT_7_8_BASEADDR               (PORT_REG_BASEADDR + 0x060)
#define PORT_9_10_BASEADDR              (PORT_REG_BASEADDR + 0x080)

#define I2CB0_BASEADDR                  (PERIPH_BASEADDR + 0x2000)
#define I2CB1_BASEADDR                  (PERIPH_BASEADDR + 0x2400)
#define I2CB2_BASEADDR                  (PERIPH_BASEADDR + 0x2800)
#define I2CB3_BASEADDR                  (PERIPH_BASEADDR + 0x2C00)

#define SPIA0_BASEADDR                  (PERIPH_BASEADDR + 0x1000)
#define SPIA1_BASEADDR                  (PERIPH_BASEADDR + 0x1400)
#define SPIA2_BASEADDR                  (PERIPH_BASEADDR + 0x1800)
#define SPIA3_BASEADDR                  (PERIPH_BASEADDR + 0x1C00)
#define SPIB0_BASEADDR                  (PERIPH_BASEADDR + 0x2000)
#define SPIB1_BASEADDR                  (PERIPH_BASEADDR + 0x2400)
#define SPIB2_BASEADDR                  (PERIPH_BASEADDR + 0x2800)
#define SPIB3_BASEADDR                  (PERIPH_BASEADDR + 0x2C00)

#define UARTA0_BASEADDR                 (PERIPH_BASEADDR + 0x1000)
#define UARTA1_BASEADDR                 (PERIPH_BASEADDR + 0x1400)
#define UARTA2_BASEADDR                 (PERIPH_BASEADDR + 0x1800)
#define UARTA3_BASEADDR                 (PERIPH_BASEADDR + 0x1C00)

#define SYSCTL_LOWER_BASEADDR            0xE004_3000
#define SYSCTL_UPPER_BASEADDR            0xE004_4000


/****************************** peripheral register definition structures ********************/
/*
 * Note: As each set of ports refers to a pair of ports 1/2, 3/4, 5/6, 7/8, 9/10, the struct has been set to refer to port X (odd numbers) and port Y
 * (even numbers). This allows for all ports to be referenced cleanly and easily
 */
typedef struct
{
    __vo uint32_t   P_X_IN;
    __vo uint32_t   P_Y_IN;
    __vo uint32_t   P_X_OUT;
    __vo uint32_t   P_Y_OUT;
    __vo uint32_t   P_X_DIR;
    __vo uint32_t   P_Y_DIR;
    __vo uint32_t   P_X_REN;
    __vo uint32_t   P_Y_REN;
    __vo uint32_t   P_Y_DS;
    __vo uint32_t   P_X_SEL0;
    __vo uint32_t   P_Y_SEL0;
    __vo uint32_t   P_X_SEL1;
    __vo uint32_t   P_Y_SEL1;
    __vo uint32_t   P_X_IV;
    __vo uint32_t   P_X_SELC;
    __vo uint32_t   P_Y_SELC;
    __vo uint32_t   P_X_IES;
    __vo uint32_t   P_Y_IES;
    __vo uint32_t   P_X_IE;
    __vo uint32_t   P_Y_IE;
    __vo uint32_t   P_X_IFG;
    __vo uint32_t   P_Y_IFG;
    __vo uint32_t   P_Y_IV;
}PORT_RegDef_t;

#define PORT1_2  ((PORT_RegDef_t*) PORT_1-2_BASEADDR)
#define PORT3_4  ((PORT_RegDef_t*) PORT_3-4_BASEADDR)
#define PORT5_6  ((PORT_RegDef_t*) PORT_5-6_BASEADDR)
#define PORT7_8  ((PORT_RegDef_t*) PORT_7-8_BASEADDR)
#define PORT9_10 ((PORT_RegDef_t*) PORT_9-10_BASEADDR)


#endif /*DRIVERS_INC_MSP432P401R_H_*/
