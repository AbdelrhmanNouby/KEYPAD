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
	KEYPAD_u8Init();
	uint8_t KYEPAD_State = KEYPAD_NO_PRESSED_KEY ;
    while (1) 
    {
		KEYPAD_u8GetPressedKey(&KYEPAD_State);
		switch (KYEPAD_State)
		{
			case 1 :
				PORTB_REG = 1 << 4 ;
				break ;
			case 2 :
				PORTB_REG = 2 << 4 ;
				break ;
			case 3 :
				PORTB_REG = 3 << 4 ;
				break ;
			case 4 :
				PORTB_REG = 4 << 4 ;
				break ;
			case 5 :
				PORTB_REG = 5 << 4 ;
				break ;
			case 6 :
				PORTB_REG = 6 << 4 ;
				break ;
			case 7 :
				PORTB_REG = 7 << 4 ;
				break ;
			case 8 :
				PORTB_REG = 8 << 4 ;
				break ;	
			case 9 :
				PORTB_REG = 9 << 4 ;
				break ;	
		}
    }
}

