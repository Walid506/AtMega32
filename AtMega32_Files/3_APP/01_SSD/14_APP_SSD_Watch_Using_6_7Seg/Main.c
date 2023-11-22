/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : Watch Using Six 7Segment            ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "SSD_Interface.h"
#include <util/delay.h>

void Time_On_LCD( u8 Hours , u8 Minutes , u8 Seconds ) ;


SSD_Type SSDs[6] = {

		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN1}, /* SSD1 */
		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN2}, /* SSD2 */
		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN3}, /* SSD3 */
		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN4}, /* SSD4 */
		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN5}, /* SSD5 */
		{SSD_COMMON_CATHODE,SSD_PORTC ,SSD_PORTD ,SSD_PIN6}, /* SSD6 */
};




void main(void)
{

	/* Initialize the SSDs */
	for (u8 i = 0; i < 6; ++i) {
		SSD_voidInitialDataPort(SSDs[i]);
		SSD_voidEnable(SSDs[i]) ;
	}

	u8 hours     =   0;    // Initialize hours to 12
	u8 minutes   =   0;    // Initialize minutes to 0
	u8 seconds   =   0;    // Initialize seconds to 0

	while (1)
	{

		//_delay_ms(500) ;
		Time_On_LCD(hours , minutes , seconds );

		_delay_ms(7) ;

		seconds++ ;

		if( seconds == 60 )
		{
			seconds = 0 ;
			minutes ++ ;

			if( minutes == 60 )
			{
				minutes = 0 ;
				hours++ ;

				if( hours == 12 )
				{
					hours = 0;
				}
			}
		}
	}


}




void Time_On_LCD( u8 Hours , u8 Minutes , u8 Seconds )
{

	/* For Second */

	u8 Ones = Seconds % 10 ;
	u8 Tens = Seconds / 10 ;

	/*-----------------------------------For SSD6---------------------------------*/
	SSD_voidSendNumber(SSDs[5] , Ones) ;
	SSD_voidEnable(SSDs[5]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[5]) ;
	/*-----------------------------------For SSD5---------------------------------*/
	SSD_voidSendNumber(SSDs[4] , Tens) ;
	SSD_voidEnable(SSDs[4]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[4]) ;

	/* --------------------------------------------------------------------------- */

	/* For Minutes */
	/*-----------------------------------For SSD4---------------------------------*/
	Ones = Minutes % 10 ;
    Tens = Minutes / 10 ;

	SSD_voidSendNumber(SSDs[3] , Ones) ;
	SSD_voidEnable(SSDs[3]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[3]) ;
	/*-----------------------------------For SSD3---------------------------------*/
	SSD_voidSendNumber(SSDs[2] , Tens) ;
	SSD_voidEnable(SSDs[2]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[2]) ;

	/* --------------------------------------------------------------------------- */

	/* For Hours */
	/*-----------------------------------For SSD2---------------------------------*/
	Ones = Hours % 10 ;
	Tens = Hours / 10 ;

	SSD_voidSendNumber(SSDs[1] , Ones) ;
	SSD_voidEnable(SSDs[1]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[1]) ;
	/*-----------------------------------For SSD1---------------------------------*/
	SSD_voidSendNumber(SSDs[0] , Tens) ;
	SSD_voidEnable(SSDs[0]) ;
	_delay_ms(10) ;
	SSD_voidDisable(SSDs[0]) ;

	/* --------------------------------------------------------------------------- */













}

