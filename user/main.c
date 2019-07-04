//
// Created by YangYongbao on 2017/3/16.
//

#include "stm32f10x.h"
#include "stm32f10x_conf.h"
#include "FreeRTOS.h"
#include "task.h"
#include "uart_log.h"
#include "config.h"

void vTaskFunction(void * pvParameters)
{
    while (1) {
        GPIO_ResetBits(GPIOE, GPIO_Pin_13);
        sleep(1000);
        debug("test");
        GPIO_SetBits(GPIOE, GPIO_Pin_13);
        sleep(1000);
        debug("test");
    }
}

int main()
{
	// init uart log
    uart_log_init();
	
    NVIC_Configuration();
    RCC_Configuration();
    GPIO_Configuration();
	
    debug("start main");
    const char* pcTextForTask1 = "Task1 is running\r\n";

    xTaskCreate(vTaskFunction, "Task 1", 1000, (void*)pcTextForTask1, 1, NULL);
    vTaskStartScheduler();
    return 0;
}
