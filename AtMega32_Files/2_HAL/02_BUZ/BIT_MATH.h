/* >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>> BIT_MATH.h >>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
 ***********************************************************************************************************
 *******************************  Auther : Walid M0 Ghanem   ***********************************************
 *******************************  Layer  : MCAL              ***********************************************
 ******************************   SWC    : DIO               ***********************************************
 */

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(VAR , BIT_No )     (VAR|=(1<<BIT_No))

#define CLR_BIT(VAR , BIT_No ) 	   (VAR&=(~(1<<BIT_No)))

#define TOGGLE_BIT(VAR , BIT_No )  (VAR~=(1<<BIT_No))

#define GET_BIT(VAR , BIT_No )     ((VAR>>BIT_No)&0x01)

#endif /* BIT_MATH_H_ */
