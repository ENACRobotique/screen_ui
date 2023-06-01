#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
//#include <stm32h7xx_hal.h>
#include "FreeRTOS.h"
#include "task.h"
#include "queue.h"
#include "main_app.h"
#endif

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	uint32_t notif_val = 0;

	if(xQueueReceive(inputsQueue, &notif_val, 100) == pdTRUE) {
		tirette = notif_val;
	}

#endif
	modelListener->handle_tirette(tirette);
}
