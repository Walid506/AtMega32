/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> DIO_interface.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : MCAL              ***********************************************
 ******************************   SWC    : DIO               ***********************************************
 */


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_

/* The Port Types That Entered By User "Copy_u8Port" */
#define DIO_u8PORTA     	0
#define DIO_u8PORTB     	1
#define DIO_u8PORTC     	2
#define DIO_u8PORTD     	3


/* The Pin Value That Entered By User "Copy_u8Pin" */
#define DIO_u8PIN0      	0
#define DIO_u8PIN1      	1
#define DIO_u8PIN2      	2
#define DIO_u8PIN3      	3
#define DIO_u8PIN4      	4
#define DIO_u8PIN5      	5
#define DIO_u8PIN6      	6
#define DIO_u8PIN7      	7


/* The Pin Direction That Entered By User "Copy_u8Direction" */
#define DIO_u8PIN_OUTPUT 1
#define DIO_u8PIN_INPUT  0


/* The Port Direction That Entered By User "Copy_u8Value" For make all of Port is Output Or Input >> in fun "DIO_u8SetPortDirection" */
#define DIO_u8PORT_OUTPUT   0xff
#define DIO_u8PORT_INPUT    0x00

/* The Pin Value That Entered By User "Copy_u8Value" */
#define DIO_u8PIN_HIGH   1
#define DIO_u8PIN_LOW    0

/* The Port Value That Entered By User "Copy_u8Value" For make all of Port is High Or Low >> in fun "DIO_u8SetPortValue"  */
#define DIO_u8PORT_HIGH      0xff
#define DIO_u8PORT_LOW       0x00




u8 DIO_u8SetPinDirection   (u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Direction ) ;

u8 DIO_u8SetPortDirection  (u8 Copy_u8Port , u8 Copy_u8Direction ) ;

u8 DIO_u8SetPinValue       (u8 Copy_u8Port , u8 Copy_u8Pin , u8 Copy_u8Value ) ;

u8 DIO_u8SetPortValue      (u8 Copy_u8Port , u8 Copy_u8Value ) ;

u8 DIO_u8GetPinValue       (u8 Copy_u8Port , u8 Copy_u8Pin , u8* Copy_u8Value ) ;
/*
u8 DIO_u8TogglePinValue      (u8 Copy_u8Port , u8 Copy_u8Pin ) ;
*/

#endif /* DIO_INTERFACE_H_ */
