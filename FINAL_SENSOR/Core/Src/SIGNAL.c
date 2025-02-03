/*
 * SIGNAL.c
 *
 *  Created on: Dec 23, 2024
 *      Author: phat
 */

#include "SIGNAL.h"

uint8_t LEFT[] 			 = { 1, 0, 0, 0, 0, 0, 0, 0 };
uint8_t RIGHT[] 		 = { 2, 0, 0, 0, 0, 0, 0, 0 };
uint8_t FORWARD[] 		 = { 3, 0, 0, 0, 0, 0, 0, 0 };
uint8_t BACKWARD_LEFT[]	 = { 4, 1, 0, 0, 0, 0, 0, 0 };
uint8_t BACKWARD_RIGHT[] = { 4, 2, 0, 0, 0, 0, 0, 0 };
uint8_t FORWARD_LEFT[]   = { 3, 1, 0, 0, 0, 0, 0, 0 };
uint8_t FORWARD_RIGHT[]  = { 3, 2, 0, 0, 0, 0, 0, 0 };

uint8_t returnSignal = 0;
uint8_t Get_State(int d1, int d2)
{

	if (abs(d1 - d2) >= 70) {
		if (d2 < d1) {
			if (d2 <= 150) return BACKWARD_RIGHT_STATE;
			if (d2 <= 600) return LEFT_STATE;
		} else if (d1 < d2) {
			if (d1 <= 150) return BACKWARD_LEFT_STATE;
			if (d1 <= 600) return RIGHT_STATE;
		}
	}

	return FORWARD_STATE;
}



