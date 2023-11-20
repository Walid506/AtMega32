/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Main.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther   : Walid M0 Ghanem      ***********************************************
 *******************************  Layer    : App                  **************************
 *******************************  App_Type : Shifting_Right_LED    ***********************************************
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

		for( u8 i = ( Num_Of_LEDs -1 ) ; i>=0 ; i-- )
		{
			LED_voidOn( LEDS[i] )  ;
			_delay_ms(300);
			LED_voidOff( LEDS[i] )  ;
			//_delay_ms(200);
			if(i==0)
			{
				i =Num_Of_LEDs  ;
			}
		}




	}
}
