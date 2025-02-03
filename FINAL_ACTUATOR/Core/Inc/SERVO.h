/*
 * SERVO.h
 *
 *  Created on: Dec 20, 2024
 *      Author: phat
 */

#ifndef INC_SERVO_H_
#define INC_SERVO_H_

#include "tim.h"
#include "main.h"

#define FAST 1
#define SLOW 0

void Start_Servo();
uint16_t AngleToPWM(double angle);
void To_Default();
void Turn_Left();
void Turn_Right();
#endif /* INC_SERVO_H_ */
