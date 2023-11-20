/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>     Main.c    >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : APP              ***********************************************
 ******************************   APP    : Using_8_SWs_each_SW_run_a_specific_task Using LEDs      ***********************************************
 */

#include "STD_TYPES.h"
#include "BIT_MATH.h"


#include "DIO_Interface.h"
#include "LED_Interface.h"
#include "SW_Interface.h"
#include "SSD_Interface.h"

#include <util/delay.h>


u8 i;

/* The Tasks That Apply By SWs*/
void LEDS_voidFlashing();
void LEDS_voidShiftingL();
void LEDS_voidShiftingR();
void LEDS_Converging();
void LEDS_Diverging();
void LEDS_Ping_Pong_Effect();
void Incrementing_LED();
void SSD_voidCount();




SSD_Type SSD1 = {SSD_COMMON_CATHODE,SSD_PORTD,SSD_PORTD,SSD_PIN7};
LED_Type Led_arr[8] ={      {LED_PORTA,LED_PIN0,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN1,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN2,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN3,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN4,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN5,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN6,LED_ACTIVE_HIGH},
		{LED_PORTA,LED_PIN7,LED_ACTIVE_HIGH},

};

SW_Type SW1  = {SW_u8PORTC,SW_u8PIN0,SW_Ext_PULL_UP};
SW_Type SW2  = {SW_u8PORTC,SW_u8PIN1,SW_Ext_PULL_UP};
SW_Type SW3  = {SW_u8PORTC,SW_u8PIN2,SW_Ext_PULL_UP};
SW_Type SW4  = {SW_u8PORTC,SW_u8PIN3,SW_Ext_PULL_UP};
SW_Type SW5  = {SW_u8PORTC,SW_u8PIN4,SW_Ext_PULL_UP};
SW_Type SW6  = {SW_u8PORTC,SW_u8PIN5,SW_Ext_PULL_UP};
SW_Type SW7  = {SW_u8PORTC,SW_u8PIN6,SW_Ext_PULL_UP};
SW_Type SW8  = {SW_u8PORTC,SW_u8PIN7,SW_Ext_PULL_UP};



void main ()
{
	SSD_voidInitialDataPort(SSD1);
	SSD_voidEnable(SSD1);
	s8 i;
	for (i=0;i<8;i++)
	{
		LED_voidInit(Led_arr[i]);
	}
	SW_voidInit(SW1);
	SW_voidInit(SW2);
	SW_voidInit(SW3);
	SW_voidInit(SW4);
	SW_voidInit(SW5);
	SW_voidInit(SW6);
	SW_voidInit(SW7);
	SSD_voidInitialDataPort(SSD1);
	SSD_voidEnable(SSD1);


	while (1)
	{

		if(SW_u8GetPressed(SW1))
		{
			LEDS_voidFlashing();
		}
		if (SW_u8GetPressed(SW2))
		{
			LEDS_voidShiftingL();
		}
		if (SW_u8GetPressed(SW3))
		{
			LEDS_voidShiftingR();
		}
		if (SW_u8GetPressed(SW4))
		{
			LEDS_Converging();
		}
		if (SW_u8GetPressed(SW5))
		{
			LEDS_Diverging();
		}
		if (SW_u8GetPressed(SW6))
		{
			LEDS_Ping_Pong_Effect();
		}
		if (SW_u8GetPressed(SW7))
		{
			Incrementing_LED();
		}
		if (SW_u8GetPressed(SW8))
		{
			SSD_voidCount();
		}
	}
}



void LEDS_voidFlashing()
{
	for(u8 i =0 ; i < 8 ; i++ )
	{
		LED_voidOn( Led_arr[i] )  ;
	}
	_delay_ms(200);
	for(u8 i =0 ; i < 8 ; i++ )
	{
		LED_voidOff( Led_arr[i] )   ;

	}
	_delay_ms(200);
}
void LEDS_voidShiftingL()
{
	for ( i=0;i<8;i++)
	{
		LED_voidOn(Led_arr[7-i]);
		_delay_ms(250);
	}
	_delay_ms(250);
	for ( i=0;i<8;i++)
	{
		LED_voidOff(Led_arr[7-i]);
	}
}
void LEDS_voidShiftingR()
{
	for (i=0;i<8;i++)
	{
		LED_voidOn(Led_arr[i]);
		LED_voidOn(Led_arr[7-i]);
		_delay_ms(250);

	}
	for (i=0;i<8;i++)
	{
		LED_voidOff(Led_arr[i]);
		LED_voidOff(Led_arr[7-i]);


	}
}
void LEDS_Converging()
{
	for (i=0;i<4;i++)
	{
		LED_voidOn(Led_arr[3-i]);
		LED_voidOn(Led_arr[4+i]);
		_delay_ms(500);
	}

	for (i=0;i<8;i++)
	{
		LED_voidOff(Led_arr[i]);
	}
}
void LEDS_Diverging()
{
	for (u8 i = 0; i <= ((8) / 2); i++) {
		if (i < 4) {
			_delay_ms(300);
			LED_voidOn(Led_arr[3 - i]);
			LED_voidOn(Led_arr[4 + i]);
			_delay_ms(300);
		} else {
			for (u8 j = 0; j < 8; j++) {
				LED_voidOff(Led_arr[j]);
			}
		}
	}
}
void LEDS_Ping_Pong_Effect()
{
	for (u8 i = 0; i < 8; i++) {
		_delay_ms(250);
		LED_voidOn(Led_arr[i]);
		_delay_ms(250);
	}

	for (u8 i = 0; i < 8; i++) {
		LED_voidOff(Led_arr[i]);
	}

	for (s8 i = (8 ); i >= 0; i--) {
		_delay_ms(250);
		LED_voidOn(Led_arr[i]);
		_delay_ms(250);
	}

	for (u8 i = 0; i < 8; i++) {
		LED_voidOff(Led_arr[i]);
	}
}
void Incrementing_LED()
{
	for (u8 i = 0; i < 8; i++) {
		_delay_ms(250);
		LED_voidOn(Led_arr[i]);
		_delay_ms(250);
	}

	for (u8 i = 0; i < 8; i++) {
		LED_voidOff(Led_arr[i]);
	}
}
void SSD_voidCount()
{
	for (u8 i =0 ; i<=8 ; i++)
	{

		SSD_voidSendNumber(SSD1 , i );
		_delay_ms(300) ;

	}
	for (i=8;i>=0;i--)
	{
		SSD_voidSendNumber(SSD1 ,i);
		_delay_ms(300);
	}
}


















