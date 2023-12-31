/*
 * segment_display.h
 *
 *  Created on: Oct 16, 2021
 *      Author: PC
 */

#ifndef INC_SEGMENT_DISPLAY_H_
#define INC_SEGMENT_DISPLAY_H_



uint8_t update_value_segment(uint8_t value, int idx);
void display_segment_number(int idx);
void update7SEG(uint8_t index);
void clear7SEG(void );
void updateClockBuffer(int hour, int minute);
void displayClock(int timer0_counter,uint16_t DelayTimerForSegment);


#endif /* INC_SEGMENT_DISPLAY_H_ */
