/*
 * led_int.h
 *
 *  Created on: Sep 18, 2021
 *      Author: pc
 */

#ifndef LED_INT_H_
#define LED_INT_H_

#include"STD_TYPES.h"

#define LED0 0
#define LED1 1
#define LED2 2

void LED (u8 led);
void LED_ON(u8 led);
void LED_OFF(u8 led);
void LED_TOG(u8 led);

#endif /* LED_INT_H_ */
