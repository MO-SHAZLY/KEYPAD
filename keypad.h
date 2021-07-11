/*
 * keypad.h
 *
 *  Created on: Dec 25, 2020
 *      Author: DELL
 */
#ifndef KEYPAD_H_
#define KEYPAD_H_
#include "STD_TYPES.h"


#define PORT_keypad PORTD_Register

void KPD_Init(void);

u8 KPD_u8GetPressedKey(void);


#endif /* KEYPAD_H_ */
