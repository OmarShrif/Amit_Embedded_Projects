#include "STD_types.h"
#include "Utilities.h"
#include "Dio_Reg.h"
#include "Dio_int.h"
#include "led_int.h"
#include "LCD_int.h"
#include "EEPROM_int.h"
#include <avr/delay.h>

u8 Array[16];

void Clean_Array(u8 Array[])
{
	for(u8 i=0 ; i<16 ;i++)
		{
			Array[i]='\0';
		}
}
int main()
{
	LED(0);
	lcd_init();
	EEPROM_int();
//	for(u8 i=114 ; i<115 ;i++)
//	{
//		EEPROM_WriteData(i,'\0');
//		_delay_ms(100);
//	}
//	EEPROM_WriteArray(0,"I'mWatchingYou\0");
//	EEPROM_WriteArray(16,"You\0");
//	EEPROM_WriteArray(225,"ReallyILoveYou");
//	EEPROM_WriteArray(34,"ILOVEYOU\0");
//	EEPROM_WriteArray(240,"ThisIsTerrible\0");
//	EEPROM_WriteArray(56,"GoodJob\0");
//	EEPROM_WriteArray(64,"OK");
//	EEPROM_WriteArray(67,"I'mNotSure");
//	EEPROM_WriteArray(117,"Question");
//	EEPROM_WriteArray(87,"Welcome");
//	EEPROM_WriteArray(96,"GoodBye");
//	EEPROM_WriteArray(105,"I");
//	EEPROM_WriteArray(108,"W");
//	EEPROM_WriteArray(111,"L");
//	EEPROM_WriteArray(114,"7");
//	LED_ON(0);
	Clean_Array(Array);
	EEPROM_ReadArray(114,Array);
	lcd_write_command(0x80);
	lcd_writeword(Array);

	while(1)
	{
	}

	return 0;
}
