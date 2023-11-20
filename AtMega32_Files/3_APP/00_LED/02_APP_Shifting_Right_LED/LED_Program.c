/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> LED_Program.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : LED               ***********************************************
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "DIO_Config.h"
#include "DIO_Private.h"

#include "LED_Interface.h"



/* Implementation of the functions*/

void LED_voidInit        ( LED_Type LED_Configuration )
{

	/* make the pin output */
	DIO_u8SetPinDirection(LED_Configuration.Port , LED_Configuration.Pin , DIO_u8PIN_OUTPUT ) ;

}

void LED_voidOn          ( LED_Type LED_Configuration )
{
	if( LED_Configuration.Active_State == LED_ACTIVE_HIGH )
	{
		DIO_u8SetPinValue(LED_Configuration.Port , LED_Configuration.Pin , DIO_u8PIN_HIGH) ;
	}
	else if ( LED_Configuration.Active_State == LED_ACTIVE_LOW )
	{
		DIO_u8SetPinValue(LED_Configuration.Port , LED_Configuration.Pin , DIO_u8PIN_LOW) ;
	}
}

void LED_voidOff         ( LED_Type LED_Configuration )
{
	if( LED_Configuration.Active_State == LED_ACTIVE_HIGH )
	{
		DIO_u8SetPinValue(LED_Configuration.Port , LED_Configuration.Pin , DIO_u8PIN_LOW) ;
	}
	else if ( LED_Configuration.Active_State == LED_ACTIVE_LOW )
	{
		DIO_u8SetPinValue(LED_Configuration.Port , LED_Configuration.Pin , DIO_u8PIN_HIGH) ;
	}
}
/*
void LED_voidToggle      ( LED_Type LED_Configuration )
{
	DIO_u8TogglePinValue(LED_Configuration.Port , LED_Configuration.Pin) ;
}
*/







