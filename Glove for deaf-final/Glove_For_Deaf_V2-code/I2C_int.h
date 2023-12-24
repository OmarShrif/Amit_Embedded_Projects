/*
 * I2C_int.h
 *
 *  Created on: ??þ/??þ/????
 *      Author: USERR
 */

#ifndef I2C_INT_H_
#define I2C_INT_H_

void I2C_InitMaster(void);
void I2C_InitSlave(void);
void I2C_start(void);
void I2C_RepeatedStart(void);
void I2C_stop(void);
void I2C_SendSlaveAddress_Write(u8 Slave_Address);
void I2C_SendSlaveAddress_Read(u8 Slave_Address);
void I2C_WriteByte(u8 Data);
u8 I2C_ReadByte(void);

#endif /* I2C_INT_H_ */
