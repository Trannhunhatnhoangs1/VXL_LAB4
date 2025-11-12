/*
 * scheduler.h
 *
 *  Created on: 10 Nov 2025
 *      Author: dell pro
 */
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_

#define SCH_MAX_TASK	12
#define NO_TASK_ID 		0
#define TIME_CYCLE 10
#include <stdint.h>
#include "main.h"
#include "software_timer.h"

typedef struct {
	void (* pTask)(void);
	uint32_t Delay;
	uint32_t Period;
	uint8_t RunMe;
	uint32_t TaskID;
}sTask;



void SCH_Init(void);
void SCH_Update(void);//nhu timer_run
void SCH_Dispatch_Tasks(void);// nhu timer_flag
void SCH_Add_Task(void (*pFunction)(void), uint32_t DELAY_ms, uint32_t PERIOD_ms);// nhu settimer
void SCH_Delete_Task(uint32_t index);


#endif /* INC_SCHEDULER_H_ */
