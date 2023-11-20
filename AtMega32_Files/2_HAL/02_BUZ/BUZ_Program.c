/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BUZ_Program.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : BUZ               ***********************************************
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include "BUZ_Interface.h"

#include "DIO_Interface.h"
#include "DIO_Config.h"
#include "DIO_Private.h"




/* Implementation of the functions*/

void BUZ_voidInit        ( BUZ_Type BUZ_Configuration )
{

	/* make the pin output */
	DIO_u8SetPinDirection(BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_u8PIN_OUTPUT ) ;

}

void BUZ_voidOn          ( BUZ_Type BUZ_Configuration )
{
	if( BUZ_Configuration.Active_State == BUZ_ACTIVE_HIGH )
	{
		DIO_u8SetPinValue(BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_u8PIN_HIGH) ;
	}
	else if ( BUZ_Configuration.Active_State == BUZ_ACTIVE_LOW )
	{
		DIO_u8SetPinValue(BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_u8PIN_LOW) ;
	}
}

void BUZ_voidOff         ( BUZ_Type BUZ_Configuration )
{
	if( BUZ_Configuration.Active_State == BUZ_ACTIVE_HIGH )
	{
		DIO_u8SetPinValue(BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_u8PIN_LOW) ;
	}
	else if ( BUZ_Configuration.Active_State == BUZ_ACTIVE_LOW )
	{
		DIO_u8SetPinValue(BUZ_Configuration.Port , BUZ_Configuration.Pin , DIO_u8PIN_HIGH) ;
	}
}
/*
void BUZ_voidToggle      ( BUZ_Type BUZ_Configuration )
{
	DIO_u8TogglePinValue(BUZ_Configuration.Port , BUZ_Configuration.Pin) ;
}
*/







