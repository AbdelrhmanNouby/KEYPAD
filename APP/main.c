/*
 * APP.c
 *
 * Created: 1/19/2022 
 * Author : Abdelrhman Elsawy
 */ 
#include "../ECUAL/KEYPAD/KEYPAD_interface.h"
#include "../ECUAL/LED/LED.h"

LED_t led1 = {PORTB,PIN4};
LED_t led2 = {PORTB,PIN5};
LED_t led3 = {PORTB,PIN6};
LED_t led4 = {PORTB,PIN7};
	
int main(void)
{
	LED_u8Init(led1);
	LED_u8Init(led2);
	LED_u8Init(led3);
	LED_u8Init(led4);	
	DIO_u8SetPortData( PORTB , 0 );
	KEYPAD_u8Init();
	uint8_t KEYPAD_State = KEYPAD_NO_PRESSED_KEY ;
    while (1) 
    {
		KEYPAD_u8GetPressedKey(&KEYPAD_State);
		if ((( KEYPAD_State > 0) && ( KEYPAD_State < 10 )) || ( KEYPAD_State == KEYPAD_NO_PRESSED_KEY ))
		{
			DIO_u8SetPortData( PORTB , KEYPAD_State << 4 ) ;
		}
    }
}

