/* system_stm32f0xx.c - Simplified SystemInit for demo: HSI -> PLL 48MHz */
#include "stm32f0xx.h"

void SystemInit(void)
{
    /* Reset RCC to default reset state */
    RCC_DeInit();

    /* Enable HSI */
    RCC_HSICmd(ENABLE);
    while (RCC_GetFlagStatus(RCC_FLAG_HSIRDY) == RESET) { }

    /* Note: Different F0 devices use different PLL input/multipliers.
       This example attempts to set system clock to 48 MHz using HSI.
       On STM32F042x6, confirm PLL settings against device reference manual.
    */

    /* Example: HSI (8 MHz) divided by 1, PLL multiplier 6 -> 48 MHz
       Many StdPeriph variants use different enumerations; adjust if linker/compiler
       reports undefined symbols. */
#ifdef RCC_PLLConfig
    RCC_PLLConfig(RCC_PLLSource_HSI_Div2, RCC_PLLMul_12); /* example: 8/2*12=48 */
#else
    /* If RCC_PLLConfig macro/signature differs in your StdPeriph, replace accordingly */
#endif

    RCC_PLLCmd(ENABLE);
    while (RCC_GetFlagStatus(RCC_FLAG_PLLRDY) == RESET) { }

    RCC_SYSCLKConfig(RCC_SYSCLKSource_PLLCLK);
    while (RCC_GetSYSCLKSource() != 0x08) { }
}
