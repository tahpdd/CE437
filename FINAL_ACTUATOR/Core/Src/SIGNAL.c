/*
 * SIGNAL.c
 *
 *  Created on: Dec 23, 2024
 *      Author: phat
 */

#include "SIGNAL.h"

uint8_t LEFT[] 		= { 1, 0, 0, 0, 0, 0, 0, 0 };
uint8_t RIGHT[] 	= { 2, 0, 0, 0, 0, 0, 0, 0 };
uint8_t FORWARD[] 	= { 3, 0, 0, 0, 0, 0, 0, 0 };
uint8_t BACKWARD[] 	= { 4, 0, 0, 0, 0, 0, 0, 0 };

uint8_t Get_State(int d1, int d2)
{


	return FORWARD_STATE;
}

uint8_t Get_CounterState(uint8_t state)
{
	if (state == RIGHT_STATE) {
		return LEFT_STATE;
	} else if (state == LEFT_STATE) {
		return RIGHT_STATE;
	} else {
		return LEFT_STATE;
	}
}

