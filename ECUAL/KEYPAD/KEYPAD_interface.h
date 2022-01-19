/*
 * KEYPAD_interface.h
 *
 * Created: 1/19/2022
 * Author : Abdelrhman Elsawy
 */

#ifndef ECUAL_KEYPAD_KEYPAD_INTERFACE_H_
#define ECUAL_KEYPAD_KEYPAD_INTERFACE_H_

#include "../../LIB/Typedef.h"
#include "../../LIB/atmega32.h"
#include "../../LIB/BIT_Math.h"
#include "../../MCAL/DIO/DIO.h"
#include "KEYPAD_cfg.h"
#include "KEYPAD_ERR_Handle.h"

#define KEYPAD_NO_PRESSED_KEY		 0xFF

// function to initialize keypad 
uint8_t KEYPAD_u8Init(void);

// function to check which key is pressed 
uint8_t KEYPAD_u8GetPressedKey(uint8_t* KeyPressed);

#endif /* ECUAL_KEYPAD_KEYPAD_INTERFACE_H_ */
