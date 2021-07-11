/*
 * keypad.c
 *
 *  Created on: Dec 25, 2020
 *      Author: DELL
 */

#include "DIO_INT_1.h"
#include "DIO_reg.h"
#include <util/delay.h>

const u8 KPD_SwitchVal[4][4] ={{7,8,9,'A'},{4,5,6,'B'},{1,2,3,'c'},{'f',0,'e','d'}};

#define PORT PORTA_Register

#define COL_INIT   0

#define COL_FIN    4

#define ROW_INIT   4

#define ROW_FIN    4

#define NOT_PRESSED    0

u8 KPD_u8GetPressedKey()
{
	u8 Col;
	u8 Row;

	/* Initialize the switch status to NOT Pressed                                                                     */
	u8 val_Retrun;
	while (1)
	{
		for (Col = 0 ; Col < COL_FIN; Col++)
		{
			// DIO_WritePort(PORT_keypad, 0X00); /* active the column */

			PORTD_Register=0b11101111<<Col; // row input  awel 1111 , col out 0<<1

			for (Row = 0; Row < ROW_FIN; Row++)

			{
				if (GET_BIT(PIND_Register,Row)==0) /* check the switch */
				{
					val_Retrun=KPD_SwitchVal[Row][Col];
					/*  val_Retrun = KPD_SwitchVal[Col - COL_INIT][Row - ROW_INIT];

				  while (!DIO_Readchannel(PORT))
				            ;


				          _delay_ms(10);

				        }
				      }


				             DIO_Writechannel(PORT, 0XFF); */

				}


			}
		}
		return val_Retrun;
	}

}


