/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : Counter From 0 To 99 Using two port        ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include <util/delay.h>


SSD_Type SSD1 = {
		SSD_COMMON_CATHODE,
		SSD_PORTC ,
		SSD_PORTC ,
		SSD_PIN7
};
SSD_Type SSD2 = {
		SSD_COMMON_CATHODE,
		SSD_PORTD ,
		SSD_PORTD ,
		SSD_PIN7
};

void main(void)
{


	SSD_voidInitialDataPort(SSD1) ;
	SSD_voidEnable(SSD1) ;

	SSD_voidInitialDataPort(SSD2) ;
	SSD_voidEnable(SSD2) ;
	//SSD_voidDisable(SSD1) ;
	while(1)
	{

		for (int i =0 ; i<=9 ; i++)
		{
			for ( int j = 0 ; j<=9 ; j++ )
			{

				SSD_voidSendNumber(SSD1 , i);
				SSD_voidSendNumber(SSD2 , j);
				_delay_ms(300) ;
			}

		}
	}


}


