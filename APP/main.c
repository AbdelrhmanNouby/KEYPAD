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
	PORTB_REG = 0 ;
	KEYPAD_u8Init();
	uint8_t KYEPAD_State = KEYPAD_NO_PRESSED_KEY ;
    while (1) 
    {
		KEYPAD_u8GetPressedKey(&KYEPAD_State);
		switch (KYEPAD_State)
		{
			case 1 :
				DIO_u8SetPortData( PORTB , 1 << 4 ) ;
				break ;
			case 2 :
				DIO_u8SetPortData( PORTB , 2 << 4 ) ;
				break ;
			case 3 :
				DIO_u8SetPortData( PORTB , 3 << 4 ) ;
				break ;
			case 4 :
				DIO_u8SetPortData( PORTB , 4 << 4 ) ;
				break ;
			case 5 :
				DIO_u8SetPortData( PORTB , 5 << 4 ) ;
				break ;
			case 6 :
				DIO_u8SetPortData( PORTB , 6 << 4 ) ;
				break ;
			case 7 :
				DIO_u8SetPortData( PORTB , 7 << 4 ) ;
				break ;
			case 8 :
				DIO_u8SetPortData( PORTB , 8 << 4 ) ;
				break ;	
			case 9 :
				DIO_u8SetPortData( PORTB , 9 << 4 ) ;
				break ;	
			default:
				break ;
		}
    }
}

