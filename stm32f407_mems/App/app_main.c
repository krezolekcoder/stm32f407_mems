#include "gpio.h"
#include "i2c.h"
#include "i2s.h"
#include "main.h"
#include "spi.h"

// #include "usb_host.h"

int main(void)
{

    STM32_HAL_Init();


    while (1) {

        HAL_GPIO_TogglePin(LD3_GPIO_Port, LD3_Pin);
        HAL_GPIO_TogglePin(LD4_GPIO_Port, LD4_Pin);
        HAL_GPIO_TogglePin(LD5_GPIO_Port, LD5_Pin);
        HAL_GPIO_TogglePin(LD6_GPIO_Port, LD6_Pin);
        HAL_Delay(1000);
    }
}