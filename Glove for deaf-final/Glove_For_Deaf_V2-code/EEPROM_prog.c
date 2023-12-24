#include "STD_types.h"
#include "Utilities.h"
#include "Dio_Reg.h"
#include "Dio_int.h"
#include "I2C_int.h"
#include "LCD_int.h"
#include "EEPROM_int.h"
#include <avr/delay.h>

void EEPROM_int(void)
{
	I2C_InitMaster();
	_delay_ms(100);
}
void EEPROM_WriteData(u8 address_inBlock,u8 Data)
{
	I2C_start();

	I2C_SendSlaveAddress_Write(0xa0);
	I2C_WriteByte(address_inBlock);
	I2C_WriteByte(Data);
	I2C_stop();
}
u8 EEPROM_ReadData(u8 address_inBlock)
{
	u8 Data=0;
	I2C_start();
	I2C_SendSlaveAddress_Write(0xa0);
	I2C_WriteByte(address_inBlock);
	I2C_stop();
	I2C_start();
	I2C_SendSlaveAddress_Read(0xa1);
	Data=I2C_ReadByte();
	I2C_stop();
	return Data;
}
void EEPROM_WriteArray(u8 address_inBlock,u8 * Data)
{
	u8 i = 0;
	I2C_start();
	I2C_SendSlaveAddress_Write(0xa0);
	I2C_WriteByte(address_inBlock);
	while(Data[i] != '\0')
	{
		I2C_WriteByte(Data[i]);
		_delay_ms(100);
		i++;
	}
	I2C_WriteByte('\0');
	_delay_ms(100);
	I2C_stop();
	_delay_ms(100);
}
void EEPROM_ReadArray(u8 address_inBlock , u8 * Data)
{
	u8 i = 0;
	do
	{
		Data[i]=EEPROM_ReadData(address_inBlock+i);
		_delay_ms(50);
		i++;
	}while(Data[i-1] != '\0');
	Data[i]='\0';
	_delay_ms(50);
}
void Clean_Array(u8 Array[])
{
	for(u8 i=0 ; i<16 ;i++)
		{
			Array[i]='\0';
		}
}
