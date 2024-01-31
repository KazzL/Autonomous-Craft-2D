#define DRIVERS_INC_MSP432P401R_H_

#define FLASH_BASEADDR
#define SRAM_BASEADDR               0x20000000U
#define ROM_BASEADDR                0x02000000U

#define PERIPH_BASE                 0x40000000U
#define SBUS_BASE                   0x20000000U //Connects to SRAM and on-chip peripherals.
#define PPB_BASE                    0xE0040000U //Connects to some system-critical modules like RSTCTL and SYSCTL. Also the Core internal components like NVIC and MPU are mapped on this bus.

/*Base addresses of peripherals */
#define PORT_REG_BASE               0x40004C00U //Port registers base address
#define PORT_1-2_BASE               (PORT_REG_BASE + 0x000)
#define PORT_3-4_BASE               (PORT_REG_BASE + 0x020)
#define PORT_5-6_BASE               (PORT_REG_BASE + 0x040)
#define PORT_7-8_BASE               (PORT_REG_BASE + 0x060)
#define PORT_9-10_BASE              (PORT_REG_BASE + 0x080)
