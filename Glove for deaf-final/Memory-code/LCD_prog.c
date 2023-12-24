#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_types.h"
#include"Utilities.h"
#include "DIO_Reg.h"
#include "Dio_Int.h"
#include"LCD_Int.h"
#include <avr/delay.h>

void lcd_init (void){
	//control lines ____________________________________
	Dio_SetPinDirection(GroupB,PIN1,OUTPUT); // RS
	Dio_SetPinDirection(GroupB,PIN2,OUTPUT); // R\W
	Dio_SetPinDirection(GroupB,PIN3,OUTPUT); // enable

	// Data lines _____________________________________
	Dio_SetPinDirection(GroupA,PIN4,OUTPUT); // A4
	Dio_SetPinDirection(GroupA,PIN5,OUTPUT); // A5
	Dio_SetPinDirection(GroupA,PIN6,OUTPUT); // A6
	Dio_SetPinDirection(GroupA,PIN7,OUTPUT); // A7

	//steps _______________
	_delay_ms(50);
	// function set
	lcd_write_command(0x02);
	lcd_write_command(0x2c);
	_delay_ms(1);
	// display on\off control
	lcd_write_command(0x0c); // d=1 , c=1 , b=1
	_delay_ms(1);
	// clear
	lcd_write_command(0x01);
	_delay_ms(2);
	// entry mode set
	lcd_write_command(0x06);



}

void lcd_write_command (u8 command){
	Dio_SetPinValue(GroupB,PIN2,LOW); // R\W --> write
	Dio_SetPinValue(GroupB,PIN1,LOW); // RS --> command = zero
	// write command on data pins _____________________
	PORTA = (PORTA & 0x0f) | (command & 0xf0); // for the first number of command
	Dio_SetPinValue(GroupB,PIN3,HIGH); //enable
	_delay_ms(2);
	Dio_SetPinValue(GroupB,PIN3,LOW);
	PORTA = (PORTA & 0x0f) | ((command<<4) & 0xf0); // for the second number of command
	//enable pin
	Dio_SetPinValue(GroupB,PIN3,HIGH); // enable
	_delay_ms(2);
	Dio_SetPinValue(GroupB,PIN3,LOW);


}

void lcd_write_data (u8 data){
	Dio_SetPinValue(GroupB,PIN2,LOW); // R\W --> write
	Dio_SetPinValue(GroupB,PIN1,HIGH); // RS --> data = 1 ;
	// write command on data pins _____________________
	PORTA = (PORTA & 0x0f) | (data & 0xf0); // for the first number of command
	Dio_SetPinValue(GroupB,PIN3,HIGH); //enable
	_delay_ms(2);
	Dio_SetPinValue(GroupB,PIN3,LOW);
	PORTA = (PORTA & 0x0f) | ((data<<4) & 0xf0); // for the second number of command
	//enable pin
	Dio_SetPinValue(GroupB,PIN3,HIGH); // enable
	_delay_ms(2);
	Dio_SetPinValue(GroupB,PIN3,LOW);


}
void lcd_writeword (u8 arr[])
{
	for(int i=0;i<16;i++)
	{
		if(arr[i]!='\0')
		{
			lcd_write_data(arr[i]);
		}
		else
		{
			break;
		}
	}
}
void lcd_print_number(u32 num)
{
	u32 string[8];
	itoa(num,string,10);
	lcd_writeword(string);
}


