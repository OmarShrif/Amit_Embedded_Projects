/*
 * LCD_Int.h
 *
 *  Created on: Sep 25, 2021
 *      Author: pc
 */

#ifndef LCD_INT_H_
#define LCD_INT_H_

void lcd_init (void);

void lcd_write_command (u8 command); // set the location in LCD
void lcd_write_data (u8 data); // write number number

void lcd_writeword (u8 arr[]); // write names in array
void lcd_print_number(u32 num);
void lcd_Clean(void);

#endif /* LCD_INT_H_ */
