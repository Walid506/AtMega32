/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : One Count With One Click       ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include "SW_Interface.h"

#include <util/delay.h>


SSD_Type SSD1 = {
		SSD_COMMON_CATHODE,
		SSD_PORTC ,
		SSD_PORTC ,
		SSD_PIN7
};

SW_Type SW1 = {
		SW_u8PORTA ,
		SW_u8PIN0  ,
		SW_Ext_PULL_UP

};





void main (void )
{

	SSD_voidInitialDataPort(SSD1) ;
	SSD_voidEnable(SSD1) ;
	SW_voidInit(SW1) ;


	while(1)
	{

		u8 i=0;// always make u8 variable outside while and do not make int never
		while (1)
		{


			if ( SW_u8GetPressed(SW1))
			{

				SSD_voidSendNumber(SSD1,i);
				_delay_ms(50); // cause my press may make him count more than one (pooling)so we made dely that is bad best case  is interrrupt

				i++;
			}
			if (i==10)
			{
				i=0;
			}
		}



	}

}







