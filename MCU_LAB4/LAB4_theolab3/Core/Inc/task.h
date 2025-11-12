/*
 * task.h
 *
 *  Created on: 10 Nov 2025
 *      Author: dell pro
 */

#ifndef INC_TASK_H_
#define INC_TASK_H_


#include "main.h"
#include "scheduler.h"
#include "fsm.h"
#include "fsm_manual.h"
#include "software_timer.h"
#include "button.h"
#include "led_display.h"

void TASK_Init(void);
void Task_Blink(void);    // chớp tắt PA9 mỗi 1s
void Task_GetKey(void);      // gọi getKeyInput()
void Task_TimerRun(void);    // gọi timer_run()
void Task_FSM_Traffic(void); // gọi fsm_traffic_run()
void Task_FSM_Manual(void);  // gọi fsm_manual_run()
#endif /* INC_TASK_H_ */
