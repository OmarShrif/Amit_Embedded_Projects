#include "STD_types.h"
#include "Utilities.h"
#include "Dio_Reg.h"
#include "Dio_int.h"
#include "led_int.h"
#include "LCD_int.h"
#include "EEPROM_int.h"
#include "Sensors_int.h"
#include <avr/delay.h>

u8 Array[16]; //Array For Storing String Word


int main()
{
	Sensor_int(); //For Required Sensor Input Pins Which Connected on Kit
	lcd_init();
	EEPROM_int();
	while(1)
	{
		//1:

		if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(87,Array); //Call String Which Starts for Location 87 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print Welcome
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//2:

		else if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(34,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print ILOVEYOU
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//3:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(0,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print I'mWatchingYou
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//4:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(105,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print I
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//5:

		if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(16,Array); //Call String Which Starts for Location 87 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print You
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//6:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(240,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print ThisIsTerrible
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//7:

		else if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(56,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print GoodJob
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//8:

		else if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(225,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print ReallyILoveYou
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//9:

		if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(64,Array); //Call String Which Starts for Location 87 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print OK
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//10:

		else if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(67,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print I'mNotSure
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//11:

		else if(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(111,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print L
			while(Sensor_Reading(GroupD,PIN0)==HIGH && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//12:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(114,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print 7
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

		//13:

		if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(108,Array); //Call String Which Starts for Location 87 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print W
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//14:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(117,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print Question
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==LOW && Sensor_Reading(GroupB,PIN4)==LOW && Sensor_Reading(GroupB,PIN5)==LOW && Sensor_Reading(GroupA,PIN0)==LOW);
		}

		//15:

		else if(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH)
		{
			Clean_Array(Array); //Clean The Array of Char.
			lcd_Clean(); //Clean LCD Screen
			EEPROM_ReadArray(96,Array); //Call String Which Starts for Location 34 in Memory
			lcd_write_command(0x80); //Start Writing on Top Left of LCD ==> Location 0X80
			lcd_writeword(Array); //Print GoodBye
			while(Sensor_Reading(GroupD,PIN0)==LOW && Sensor_Reading(GroupD,PIN7)==HIGH && Sensor_Reading(GroupB,PIN4)==HIGH && Sensor_Reading(GroupB,PIN5)==HIGH && Sensor_Reading(GroupA,PIN0)==HIGH);
		}

	}
	return 0;
}
