# Drivers / StdPeriph

This demo references the ST "STM32F0xx Standard Peripheral Library" (StdPeriph).
To compile the project you need the StdPeriph sources and headers (gpio, rcc, misc, core_cm0, stm32f0xx.h, etc.).

Download the StdPeriph package from ST's website or from a trusted mirror, then place the following files/folders under `Drivers/STM32F0xx_StdPeriph/`:
- Include header files (stm32f0xx.h, stm32f0xx_gpio.h, stm32f0xx_rcc.h, misc.h, ...)
- Source files (stm32f0xx_gpio.c, stm32f0xx_rcc.c, misc.c, core_cm0.c, ...)

Alternatively, if you prefer, you can add the StdPeriph files in Keil by adding the path where you installed the library.

Recommended source: STMicroelectronics website (search for "STM32F0xx Standard Peripheral Library").
