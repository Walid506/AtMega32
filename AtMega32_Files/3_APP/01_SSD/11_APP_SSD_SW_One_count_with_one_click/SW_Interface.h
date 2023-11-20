/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> SW_interface.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : HAL              ***********************************************
 ******************************   SWC    : SW               ***********************************************
 */

#ifndef _SW_INTERFACE_H_
#define _SW_INTERFACE_H_


#define SW_PRESSED     1
#define SW_NOT_PRESSED 0

/*
     $ Optins of State :-
	 1- SW_Int_PULL_UP
	 2- SW_Ext_PULL_UP
	 3- SW_Ext_PULL_DOWN
	 4- SW_FLOATING

 */
/*******/
#define SW_Int_PULL_UP     0
#define SW_Ext_PULL_UP     1
#define SW_Ext_PULL_DOWN   2
#define SW_FLOATING        3
/*******/

/* The Port Types That Entered By User "Copy_u8Port" */

#define SW_u8PORTA     	0
#define SW_u8PORTB     	1
#define SW_u8PORTC     	2
#define SW_u8PORTD     	3



/* The Pin Value That Entered By User "Copy_u8Pin" */
#define SW_u8PIN0      	0
#define SW_u8PIN1      	1
#define SW_u8PIN2      	2
#define SW_u8PIN3      	3
#define SW_u8PIN4      	4
#define SW_u8PIN5      	5
#define SW_u8PIN6      	6
#define SW_u8PIN7      	7



typedef struct{

	u8 Port;
	u8 Pin ;
	u8 Pull_State;

}SW_Type;

void SW_voidInit       ( SW_Type SW_Config ); /* make the pin is input */
u8   SW_u8GetPressed   ( SW_Type SW_Config );

#endif
