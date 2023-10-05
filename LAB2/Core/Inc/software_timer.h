/*
 * software_timer.h
 *
 *  Created on: Sep 30, 2023
 *      Author: TrongAnh
 */

#ifndef INC_SOFTWARE_TIMER_H_
#define INC_SOFTWARE_TIMER_H_

extern int TIME_CYCLE;
extern int timer1_flag;
extern int timer2_flag;
extern int timer3_flag;
extern int timer4_flag;

void setTimer1(int duration);
void setTimer2(int duration);
void setTimer3(int duration);
void setTimer4(int duration);

void timer1Run();
void timer2Run();
void timer3Run();
void timer4Run();
#endif /* INC_SOFTWARE_TIMER_H_ */
