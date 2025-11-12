/*
 * task.c
 *
 *  Created on: 10 Nov 2025
 *      Author: dell pro
 */
#include "task.h"

void TASK_Init(void) {
    SCH_Add_Task(Task_Blink, 0, 2000);
    SCH_Add_Task(Task_GetKey, 0, 50);
    SCH_Add_Task(Task_TimerRun, 0, 10);
    SCH_Add_Task(Task_FSM_Traffic, 0, 20);
    SCH_Add_Task(Task_FSM_Manual, 0, 20);
}
void Task_Blink(void)
{
    HAL_GPIO_TogglePin(GPIOA, GPIO_PIN_9);
}

void Task_GetKey(void)
{
    getKeyInput();
}

void Task_TimerRun(void)
{
    timer_run();
}

void Task_FSM_Traffic(void)
{
    fsm_traffic_run();
}

void Task_FSM_Manual(void)
{
    fsm_manual_run();
}
