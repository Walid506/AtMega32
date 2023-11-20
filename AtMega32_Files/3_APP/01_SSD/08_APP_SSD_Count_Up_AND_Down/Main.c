/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : Counter Up & Down From 0 To 9        ***********************************************
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
	//SSD_voidDisable(SSD1) ;
	while(1)
	{

		for (int i =0 ; i<=9 ; i++)
		{
			SSD_voidSendNumber(SSD1 , i);
			_delay_ms(300) ;

			if( i == 9 )
			{
				for (int i =9 ; i>=0 ; --i)
				{
					SSD_voidSendNumber(SSD1 , i);
					_delay_ms(300) ;
				}

			}
		}
	}


}


