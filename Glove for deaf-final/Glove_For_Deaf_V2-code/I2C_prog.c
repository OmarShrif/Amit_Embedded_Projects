#include "STD_types.h"
#include "Utilities.h"
#include "Dio_Reg.h"
#include "Dio_int.h"
#include "I2C_int.h"

void I2C_InitMaster(void)
{
	//Clock Factor
	TWBR=10;

	//Prescaler
	clr_bit(TWSR,0);
	clr_bit(TWSR,1);

	//Enable ACK
	set_bit(TWCR,6);

}
void I2C_InitSlave(void)
{
	//Set Slave Address
	TWAR=0x20;

	//Enable ACK
	set_bit(TWCR,6);
}
void I2C_start(void)
{
	//Clear Flag
	//START Condition
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<5)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//State start is ok
	while((TWSR & 0xF8)!=0x08);
}

void I2C_RepeatedStart(void)
{
	//Clear Flag
	//START Condition
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<5)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//State Re_start is ok
	while((TWSR & 0xF8)!=0x10);
}
void I2C_stop(void)
{
	//Clear Flag
	//STOP Condition
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<2)|(1<<4);
}
void I2C_SendSlaveAddress_Write(u8 Slave_Address)
{
	//Send Address for Slave to write to it
	TWDR=Slave_Address;

	//Clear Flag
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//ACK Check
	while((TWSR & 0xF8)!=0x18);
}
void I2C_SendSlaveAddress_Read(u8 Slave_Address)
{
	//Send Address for Slave to write to it
	TWDR=Slave_Address;

	//Clear Flag
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//ACK Check
	while((TWSR & 0xF8)!=0x40);
}
void I2C_WriteByte(u8 Data)
{
	//Load Data
	TWDR=Data;

	//Clear Flag
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//ACK Check
	while((TWSR & 0xF8)!=0x28);
}
u8 I2C_ReadByte(void)
{
	//Clear Flag
	//TWI Enable Bit
	TWCR = (1<<7)|(1<<2);

	//Wait For Flage
	while(get_bit(TWCR,7)!=1);

	//ACK Check
	while((TWSR & 0xF8)!=0x58);

	//Get Data
	return TWDR;
}
