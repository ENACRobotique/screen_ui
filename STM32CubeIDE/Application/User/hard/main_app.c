#include "main_app.h"
#include "main.h"

#include "FreeRTOS.h"
#include "task.h"
#include <stm32h7xx_hal.h>
#include "queue.h"


void StartMainAppTask(void *argument)
{

  /* Infinite loop */
  while(1)
  {
	  uint32_t tirette = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_3);
	  xQueueSend(inputsQueue, &tirette, 0);

    vTaskDelay(pdMS_TO_TICKS(10));
  }
}
