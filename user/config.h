//
// Created by YangYongbao on 2017/4/27.
//

#ifndef STM32F107_MAKEFILE_FREERTOS_CONFIG_H
#define STM32F107_MAKEFILE_FREERTOS_CONFIG_H

#include <stdint.h>

void NVIC_Configuration(void);

void RCC_Configuration(void);

void GPIO_Configuration(void);

void sleep(uint32_t ms);

#endif //STM32F107_MAKEFILE_FREERTOS_CONFIG_H
