#ifndef EEPROM_INT_H_
#define EEPROM_INT_H_

void EEPROM_int(void);
void EEPROM_WriteData(u8 address_inBlock,u8 Data);
u8 EEPROM_ReadData(u8 address_inBlock);
void EEPROM_WriteArray(u8 address_inBlock,u8 * Data);
void EEPROM_ReadArray(u8 address_inBlock , u8 * Data);

#endif /* EEPROM_INT_H_ */
