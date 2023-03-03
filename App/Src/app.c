#include "app.h"

void app()
{
    HAL_GPIO_TogglePin(LED_1_GPIO_Port, LED_1_Pin);
    HAL_Delay(100);
}
