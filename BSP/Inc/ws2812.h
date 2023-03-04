#include "main.h"
#include "tim.h"
#include "stdbool.h"

bool ws2812_set_LED(uint8_t led_No, uint8_t *RGB_arr);
bool ws2812_set_LED_arr(uint8_t **i_arr, uint8_t start_LED_No, uint8_t amount);
void ws2812_send();