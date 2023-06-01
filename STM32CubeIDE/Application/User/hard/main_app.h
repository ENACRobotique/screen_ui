#pragma once

#include "FreeRTOS.h"
#include "queue.h"

void StartMainAppTask(void *argument);


extern QueueHandle_t inputsQueue;
