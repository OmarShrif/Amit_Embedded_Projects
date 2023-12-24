#ifndef EEPROM_INT_H_
#define EEPROM_INT_H_

void EEPROM_int(void);
void EEPROM_WriteData(u8 address_inBlock,u8 Data);
u8 EEPROM_ReadData(u8 address_inBlock);
void EEPROM_WriteArray(u8 address_inBlock,u8 * Data);
void EEPROM_ReadArray(u8 address_inBlock , u8 * Data);
void Clean_Array(u8 Array[]);

#endif /* EEPROM_INT_H_ */
