/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> SSD_Program.c >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : SSD               ***********************************************
 */


#include "STD_TYPES.h"
#include "BIT_MATH.h"

#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include "SSD_Config.h"
#include "SSD_Private.h"

static u8 Local_u8SSDNumbers[10] = SSD_NUMBER_ARR ;



/*
 * Breif : This Function initialize the port which connected to 7 Seg leds as output pins ( 8 Pins or Port )
 * Parameters :
            =>Copy_u8PORT --> Port Name [ SSD_PORTA ,	SSD_PORTB , SSD_PORTC , SSD_PORTD ]
 * return : void
 */
void SSD_voidInitialDataPort  ( SSD_Type Copy_structConfig )
{
	DIO_u8SetPortDirection(Copy_structConfig.DataPort , 0xff ) ;
}

/*
 * Breif : This Function enable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidEnable           ( SSD_Type Copy_structConfig )
{

	if( Copy_structConfig.Type == SSD_COMMON_ANODE)
	{
		DIO_u8SetPinDirection(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin ,DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin , DIO_u8PIN_HIGH) ;
	}

	else if (Copy_structConfig.Type == SSD_COMMON_CATHODE)
	{
		DIO_u8SetPinDirection(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin ,DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin , DIO_u8PIN_LOW) ;
	}

}
/*
 * Breif : This Function disable common pin
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidDisable          ( SSD_Type Copy_structConfig )
{
	if( Copy_structConfig.Type == SSD_COMMON_ANODE)
	{
		DIO_u8SetPinDirection(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin ,DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin , DIO_u8PIN_LOW) ;
	}

	else if (Copy_structConfig.Type == SSD_COMMON_CATHODE)
	{
		DIO_u8SetPinDirection(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin ,DIO_u8PIN_OUTPUT) ;
		DIO_u8SetPinValue(Copy_structConfig.EnablePort , Copy_structConfig.EnablePin , DIO_u8PIN_HIGH) ;
	}
}

/*
 * Breif : This Function write Number on 7 seg [ 0 : 9 ]
 * Parameters : => struct has the SSD type , data port and enable(port & pin)
 * return : void
 */
void SSD_voidSendNumber       ( SSD_Type Copy_structConfig , u8 Copy_u8Number )
{

	if( Copy_structConfig.Type == SSD_COMMON_ANODE)
	{
		DIO_u8SetPortValue(Copy_structConfig.DataPort , ~( Local_u8SSDNumbers[Copy_u8Number] ) );
	}
	else if (Copy_structConfig.Type == SSD_COMMON_CATHODE)
	{
		DIO_u8SetPortValue(Copy_structConfig.DataPort ,Local_u8SSDNumbers[Copy_u8Number] );
	}
}


