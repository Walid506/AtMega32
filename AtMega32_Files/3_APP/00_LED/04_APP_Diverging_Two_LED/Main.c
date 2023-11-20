/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Main.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther   : Walid M0 Ghanem      ***********************************************
 *******************************  Layer    : App                  **************************
 *******************************  App_Type : Diverging_Two_LED   ***********************************************
 ******************************   Data     : 11/11/2023           ***********************************************
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LED_Interface.h"

#include <util/delay.h>


void main (void )
{
	u8 Num_Of_LEDs = 8 ;

	/* Create an array of struct */
	LED_Type LEDS [Num_Of_LEDs];

	/* Making a loop to intialize the LED With Different Pin Value */
	for(u8 i =0 ; i < Num_Of_LEDs ; i++ )
	{
		LEDS[i].Port = LED_PORTA ;
		LEDS[i].Active_State = LED_ACTIVE_HIGH ;
		LEDS[i].Pin = LED_PIN0 +i ; //  Use it to generate different pin values (LED_PIN0, LED_PIN1 ,...)

		//..............................
		LED_voidInit( LEDS[i] );

	}





	while (1)
	{

		/* Reduced Code */
		for (u8 i = 0; i <= ((Num_Of_LEDs) / 2); i++) {
		            if (i < 4) {
		                _delay_ms(300);
		                LED_voidOn(LEDS[3 - i]);
		                LED_voidOn(LEDS[4 + i]);
		                _delay_ms(300);
		            } else {
		                for (u8 j = 0; j < Num_Of_LEDs; j++) {
		                    LED_voidOff(LEDS[j]);
		                }
		            }
		 /* First Tring ..*/
		 /*
		for(u8 i =0 ; i<= ((Num_Of_LEDs)/2) ; i++)
		{

			switch (i)
			{
			case 0:
			{
				_delay_ms(300);
				LED_voidOn(LEDS[3]);
				LED_voidOn(LEDS[4]);
				_delay_ms(300);
				break ;
			}
			case 1:
			{
				LED_voidOn(LEDS[2]);
				LED_voidOn(LEDS[5]);
				_delay_ms(300);
				break ;
			}
			case 2:
			{
				LED_voidOn(LEDS[1]);
				LED_voidOn(LEDS[6]);
				_delay_ms(300);
				break ;
			}
			case 3:
			{
				LED_voidOn(LEDS[0]);
				LED_voidOn(LEDS[7]);
				_delay_ms(300);
				break ;
			}
			case 4:
			{
				for(u8 j=0 ;j<8 ; j++)
				{
					LED_voidOff(LEDS[j]);
					//_delay_ms(300);
				}

				break ;
			}

			}
		}

*/
		 /* First Tring ..*/
	}
}
}
