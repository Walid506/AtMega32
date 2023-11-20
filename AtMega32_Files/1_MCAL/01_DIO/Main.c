/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : MCAL              ***********************************************
 ******************************   SWC    : DIO               ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"

void main(void)
{
	/* check all of the function */

	/* check DIO_u8SetPinDirection */
	DIO_u8SetPinDirection(DIO_u8PORTA , DIO_u8PIN0 , DIO_u8PIN_OUTPUT) ;
	/*  DDRA = 0b1000000 */
	/* check DIO_u8SetPinValue */
	DIO_u8SetPinValue(DIO_u8PORTA , DIO_u8PIN0 , DIO_u8PIN_HIGH ) ;

	/* check DIO_u8SetPortDirection & DIO_u8SetPortValue */
	DIO_u8SetPortDirection(DIO_u8PORTC , 0xff);
	DIO_u8SetPortValue(DIO_u8PORTC , 0xff ) ;

	/* check  DIO_u8GetPinValue */

	u8 val = 1 ;
	DIO_u8GetPinValue(DIO_u8PORTC , DIO_u8PIN2 , &val) ;
	DIO_u8SetPinDirection(DIO_u8PORTD , DIO_u8PIN2 , DIO_u8PIN_OUTPUT);
	DIO_u8SetPinValue(DIO_u8PORTD , DIO_u8PIN2 , val ) ;




	while(1)
	{

	}
}
