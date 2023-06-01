#include <gui/model/Model.hpp>
#include <gui/model/ModelListener.hpp>

#ifndef SIMULATOR
#include <stm32h7xx_hal.h>
#endif

Model::Model() : modelListener(0)
{

}

void Model::tick()
{
#ifndef SIMULATOR
	tirette = HAL_GPIO_ReadPin(GPIOE, GPIO_PIN_3);
#endif
	modelListener->handle_tirette(tirette);
}

