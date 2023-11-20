/*******************************  Main.c 			 **********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : MCAL              ***********************************************
 ******************************   SWC    : SW               ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "SW_Interface.h"

#include <util/delay.h>

u8 Var1 = 0 ;
u8 Var2 = 0 ;

SW_Type SW1 = {

		SW_u8PORTA ,
		SW_u8PIN0  ,
		SW_Ext_PULL_UP ,

} ;




SW_Type SW2 = {

		SW_u8PORTB ,
		SW_u8PIN0  ,
		SW_Ext_PULL_DOWN ,

} ;



void main(main)
{





	Var1 = SW_u8GetPressed( SW1 );
	Var2 = SW_u8GetPressed( SW2 );

	if( Var1 == SW_PRESSED )
	{
		DIO_u8SetPinDirection(DIO_u8PORTA , DIO_u8PIN1 , DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(DIO_u8PORTA , DIO_u8PIN1 , DIO_u8PIN_HIGH ) ;
		_delay_ms(1000);
		DIO_u8SetPinDirection(DIO_u8PORTA , DIO_u8PIN1 , DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(DIO_u8PORTA , DIO_u8PIN1 , DIO_u8PIN_LOW ) ;
		_delay_ms(1000);
	}

	_delay_ms(1000);

	if( Var2 == SW_NOT_PRESSED )
	{
		DIO_u8SetPinDirection(DIO_u8PORTB , DIO_u8PIN1 , DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(DIO_u8PORTB , DIO_u8PIN1 , DIO_u8PIN_HIGH ) ;

	}


	while (1)
	{


	}

}


