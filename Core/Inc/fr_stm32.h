/*
 * fr_stm32.h
 *
 *  Created on: 22 cze 2023
 *      Author: Filip
 */

#ifndef INC_FR_STM32_H_
#define INC_FR_STM32_H_

#include <main.h>
#include "fr_global.h"
#include "ui.h"
#include "fr_ESP8266.h"
#include "fr_lv_drv_touch.h"

void pobierz_czas();
void sleep();
void SetNextAlarm(void);
int CheckAlarm();
void pobierz_alarm();
void update_ui_data();
void init_lvgl();

#endif /* INC_FR_STM32_H_ */
