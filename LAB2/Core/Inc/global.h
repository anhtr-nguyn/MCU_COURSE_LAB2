/*
 * global.h
 *
 *  Created on: Sep 30, 2023
 *      Author: TrongAnh
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_

#define INIT	4
#define SEG0	0
#define SEG1	1
#define SEG2	2
#define SEG3	3

extern int TIME_7SEG;
extern int status;

extern const int MAX_LED;
extern int index_led;
extern int led_buffer[4];

extern int hour, minute, second;

#endif /* INC_GLOBAL_H_ */
