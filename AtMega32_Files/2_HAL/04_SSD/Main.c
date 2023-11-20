/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : SSD               ***********************************************
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



void main(void)
{



	SSD_voidInitialDataPort(SSD1) ;
	SSD_voidEnable(SSD1) ;
	while(1)
	{

		for (int i =0 ; i<=9 ; i++)
		{
			SSD_voidSendNumber(SSD1 , i);
			_delay_ms(300) ;
		}
		SSD_voidDisable(SSD1) ;
		_delay_ms(1000) ;
	}


}
