/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> LED_interface.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : LED               ***********************************************
 */

#ifndef _LED_INTERFACE_H_
#define _LED_INTERFACE_H_





// Port Defines
#define  LED_PORTA  	0
#define  LED_PORTB  	1
#define  LED_PORTC  	2
#define  LED_PORTD  	3


// PIN Defines
#define LED_PIN0   0
#define LED_PIN1   1
#define LED_PIN2   2
#define LED_PIN3   3
#define LED_PIN4   4
#define LED_PIN5   5
#define LED_PIN6   6
#define LED_PIN7   7

// LED Status
#define LED_ACTIVE_HIGH    1
#define LED_ACTIVE_LOW     0





// LED_Configuration
typedef struct{

	u8 Port         ;
	u8 Pin         ;
	u8 Active_State ; // Active High | Active Low

}LED_Type;


/*****************************************************************************************************/
/*
 * This Fun To Intialize The Led
 * It Takes Para. 		>> LED_Configuration
 *
 *
 * */
void LED_voidInit        ( LED_Type LED_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To Turn ON The Led
 * It Takes Para. 		>> LED_Configuration
 *
 *
 * */
void LED_voidOn          ( LED_Type LED_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To Turn OFF The Led
 * It Takes Para. 		>> LED_Configuration
 *
 *
 * */
void LED_voidOff         ( LED_Type LED_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To TOGGLE The Led
 * It Takes Para. 		>> LED_Configuration
 *
 *
 * */
void LED_voidToggle      ( LED_Type LED_Configuration );





#endif
