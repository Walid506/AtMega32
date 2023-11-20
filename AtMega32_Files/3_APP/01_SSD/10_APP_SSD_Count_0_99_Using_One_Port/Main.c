/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : Counter From 0 To 99 Using One port        ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include <util/delay.h>


SSD_Type SSD1 = {
		SSD_COMMON_CATHODE,
		SSD_PORTC ,
		SSD_PORTD ,
		SSD_PIN0
};
SSD_Type SSD2 = {
		SSD_COMMON_CATHODE,
		SSD_PORTC ,
		SSD_PORTD ,
		SSD_PIN1
};

void main(void)
{


	SSD_voidInitialDataPort(SSD1) ;
	SSD_voidInitialDataPort(SSD2) ;


	while(1)
	{

		for (u8 i =0 ; i<=99 ; i++)
		{
			DisplayTwoDigits(i);
			//_delay_ms(300);
		}

		_delay_ms(500) ;
	}
	//_delay_ms(500) ;
}

void DisplayTwoDigits(u8 num)
{
	u8 tens = num / 10;
	u8 ones = num % 10;

	SSD_voidSendNumber(SSD1, tens);
	SSD_voidEnable(SSD1);
	_delay_ms(20);
	SSD_voidDisable(SSD1);

	SSD_voidSendNumber(SSD2, ones);
	SSD_voidEnable(SSD2);
	_delay_ms(20);
	SSD_voidDisable(SSD2);
}


