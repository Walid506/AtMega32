/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BUZ_interface.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : BUZ               ***********************************************
 */

#ifndef _BUZ_INTERFACE_H_
#define _BUZ_INTERFACE_H_





// Port Defines
#define  BUZ_PORTA  	0
#define  BUZ_PORTB  	1
#define  BUZ_PORTC  	2
#define  BUZ_PORTD  	3


// PIN Defines
#define BUZ_PIN0   0
#define BUZ_PIN1   1
#define BUZ_PIN2   2
#define BUZ_PIN3   3
#define BUZ_PIN4   4
#define BUZ_PIN5   5
#define BUZ_PIN6   6
#define BUZ_PIN7   7

// BUZ Status
#define BUZ_ACTIVE_HIGH    1
#define BUZ_ACTIVE_LOW     0





// BUZ_Configuration
typedef struct{

	u8 Port         ;
	u8 Pin         ;
	u8 Active_State ; // Active High | Active Low

}BUZ_Type;


/*****************************************************************************************************/
/*
 * This Fun To Intialize The BUZ
 * It Takes Para. 		>> BUZ_Configuration
 *
 *
 * */
void BUZ_voidInit        ( BUZ_Type BUZ_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To Turn ON The BUZ
 * It Takes Para. 		>> BUZ_Configuration
 *
 *
 * */
void BUZ_voidOn          ( BUZ_Type BUZ_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To Turn OFF The BUZ
 * It Takes Para. 		>> BUZ_Configuration
 *
 *
 * */
void BUZ_voidOff         ( BUZ_Type BUZ_Configuration );

/*****************************************************************************************************/
/*
 * This Fun To TOGGLE The BUZ
 * It Takes Para. 		>> BUZ_Configuration
 *
 *
 * */






#endif
