/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> Main.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther   : Walid M0 Ghanem      			 ***********************************************
 *******************************  Layer    : App                 			 **************************
 *******************************  App_Type : Converging_AND_Diverging_LED    ***********************************************
 ******************************   Data     : 11/11/2023         		     ***********************************************
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_interface.h"
#include "LED_Interface.h"

#include <util/delay.h>


void main (void )
{
	const u8 Num_Of_LEDs = 8 ;

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

		/*................................................Converging...................................*/
		u8 i = 0;
		for( i = 0 ; i < ( (Num_Of_LEDs)/2 ) ; i++ )
		{
			_delay_ms(300);
			LED_voidOn( LEDS[i] )  ;
			LED_voidOn( LEDS[ ( Num_Of_LEDs -1 ) - i] )  ;
			_delay_ms(300);

		}
		for( i = 0 ; i <  (Num_Of_LEDs) ; i++ )
		{
			LED_voidOff( LEDS[i] )  ;
		}

		/*................................................Diverging...................................*/
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



		}
	}
}
