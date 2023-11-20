/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : LED               ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "LED_Interface.h"
#include <util/delay.h>

LED_Type Led1 ;

LED_Type Led2 = {
		LED_PORTB ,
		LED_PIN0  ,
		LED_ACTIVE_LOW ,
} ;



void main(void)
{


	Led1.Port = LED_PORTA ;
	Led1.Pin  = LED_PIN0  ;
	Led1.Active_State = LED_ACTIVE_HIGH ;


	LED_voidInit(Led1) ;
	// LED_voidOn(Led1 )  ;

	LED_voidInit(Led2) ;

	while(1)
	{
		LED_voidOn(Led1 )  ;
		_delay_ms(200);
		LED_voidOff(Led1)   ;
		_delay_ms(200);

		LED_voidOn(Led2 )  ;
		_delay_ms(200);
		LED_voidOff(Led2)   ;
		_delay_ms(200);
	}


}


