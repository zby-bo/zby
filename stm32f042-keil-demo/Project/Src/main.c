/* main.c - STM32F042 Keil StdPeriph demo (LED on PA5) */
#include "stm32f0xx.h"
#include "stm32f0xx_conf.h"

#define LED_GPIO_PORT GPIOA
#define LED_GPIO_PIN  GPIO_Pin_5
#define LED_GPIO_CLK  RCC_AHBPeriph_GPIOA

static void Delay(volatile uint32_t d)
{
    while (d--) {
        volatile uint32_t i = 12000;
        while (i--) __NOP();
    }
}

int main(void)
{
    /* SystemInit configures PLL to 48MHz (see system_stm32f0xx.c) */
    SystemInit();

    RCC_AHBPeriphClockCmd(LED_GPIO_CLK, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Pin = LED_GPIO_PIN;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_OUT;
    GPIO_InitStructure.GPIO_OType = GPIO_OType_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_Level_1;
    GPIO_InitStructure.GPIO_PuPd = GPIO_PuPd_NOPULL;
    GPIO_Init(LED_GPIO_PORT, &GPIO_InitStructure);

    while (1)
    {
        GPIO_SetBits(LED_GPIO_PORT, LED_GPIO_PIN);
        Delay(300);
        GPIO_ResetBits(LED_GPIO_PORT, LED_GPIO_PIN);
        Delay(300);
    }
}
