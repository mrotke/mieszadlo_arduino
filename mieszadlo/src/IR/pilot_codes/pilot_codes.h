/*
 * pilot_codes.h
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#ifndef SRC_IR_PILOT_CODES_PILOT_CODES_H_
#define SRC_IR_PILOT_CODES_PILOT_CODES_H_


extern const  uint16_t pilot_codes[]  = {
		0x00FF, // "0"
		0x827D, // "1"
		0xB24D, // "2"
		0xA25D, // "3"
		0x42BD, // "4"
		0x728D, // "5"
		0x629D, // "6"
		0xC23D, // "7"
		0xF20D, // "8"
		0xE21D, // "9"
		0x807F, // "up"
		0x906F, // "down"
		0x9867, // "left"
		0x8877, // "right"
		0x02FD  // "enter"
};


#endif /* SRC_IR_PILOT_CODES_PILOT_CODES_H_ */
