/*
 * SERVO.c
 *
 *  Created on: Dec 20, 2024
 *      Author: phat
 */

#include "SERVO.h"

void Start_Servo()
{
	HAL_TIM_PWM_Start(&htim4, TIM_CHANNEL_1);
	To_Default();
	HAL_Delay(100);
}

uint16_t AngleToPWM(double angle)
{
	double temp = 250 + angle * 5.56;
	return (int)temp;
}

void To_Default()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, AngleToPWM(90));
}


void Turn_Left()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, AngleToPWM(55));
}

void Turn_Right()
{
	__HAL_TIM_SET_COMPARE(&htim4,TIM_CHANNEL_1, AngleToPWM(135));
}
