/*
 * main.c
 *
 *  Created on: Dec 25, 2020
 *      Author: DELL
 */
#include "DIO_INT_1.h"
#include "BIT_MATH.h"
#include "STD_TYPES.h"
#include <util/delay.h>
#include "seven_segment.h"
#include "keypad.h"

int main()
{
	u8 x;
	 DIO_Init();
	 void_seven_segemt_intialization();


	while(1)
	{
		 x= KPD_u8GetPressedKey();
		 void_set_sevent_segment(x);

		}

}
