//
// Created by YangYongbao on 2017/4/27.
//

#include "config.h"
#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"

void NVIC_Configuration(void)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_4);
}

void RCC_Configuration(void)
{
    /* GPIOE clock enable */
    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
}

void GPIO_Configuration(void)
{
    GPIO_InitTypeDef GPIO_InitStructure;

    GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_13;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOE, &GPIO_InitStructure);
}

void sleep(uint32_t ms)
{
    if (ms < 10) { // last 10 ms
        ms = 10;
    }

    vTaskDelay( ms * configTICK_RATE_HZ / 1000);
}