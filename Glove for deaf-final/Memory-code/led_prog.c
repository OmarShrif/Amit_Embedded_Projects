#include "led_int.h"
#include "Dio_Int.h"
#include "STD_types.h"
#include"Utilities.h"
#include "DIO_Reg.h"

void LED (u8 led){

switch(led){
case LED0 : Dio_SetPinDirection(GroupC, PIN2, OUTPUT);break;
case LED1 : Dio_SetPinDirection(GroupC, PIN7, OUTPUT);break;
case LED2 : Dio_SetPinDirection(GroupD, PIN3, OUTPUT);break;
}
	}

void LED_ON(u8 led){

	switch(led){
	case LED0 : Dio_SetPinValue(GroupC, PIN2, HIGH);break;
	case LED1 : Dio_SetPinValue(GroupC, PIN7, HIGH);break;
	case LED2 : Dio_SetPinValue(GroupD, PIN3, HIGH);break;
	}

}
void LED_OFF(u8 led){

	switch(led){
	case LED0 : Dio_SetPinValue(GroupC, PIN2, LOW);break;
	case LED1 : Dio_SetPinValue(GroupC, PIN7, LOW);break;
	case LED2 : Dio_SetPinValue(GroupD, PIN3, LOW);break;
	}

}

void LED_TOG(u8 led){
	switch(led){
	case LED0 : tog_bit(PORTC,2);break;
	case LED1 : tog_bit(PORTC,7);break;
	case LED2 : tog_bit(PORTD,3);break;
	}
}


