/*
 * MOTOR.c
 *
 *  Created on: Dec 20, 2024
 *      Author: phat
 */

#include "MOTOR.h"

void Start_Motor()
{
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_1);
	HAL_TIM_PWM_Start(&htim1, TIM_CHANNEL_4);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_14, 1);
	HAL_GPIO_WritePin(GPIOB, GPIO_PIN_15, 1);
}

void run(uint8_t speed, uint8_t mode)
{
	if (mode == SFORWARD) {
		genPwm(&htim1,TIM_CHANNEL_4, speed);
		genPwm(&htim1,TIM_CHANNEL_1, 0);
	} else {
		genPwm(&htim1,TIM_CHANNEL_4, 0);
		genPwm(&htim1,TIM_CHANNEL_1, speed);
	}
}

void genPwm(TIM_HandleTypeDef *htim, uint32_t channel, float duty_cycle)
{
	float load_value = (duty_cycle / 100) * htim->Instance->ARR;
	__HAL_TIM_SET_COMPARE(htim, channel, (uint16_t)load_value);
}

void stop()
{
	genPwm(&htim1,TIM_CHANNEL_4, 0);
	genPwm(&htim1,TIM_CHANNEL_1, 0);
	HAL_Delay(200);
}
