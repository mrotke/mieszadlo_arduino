/*
 * DisplayLCD.h
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#ifndef SRC_DEVICES_DISPLAY_DISPLAYLCD_H_
#define SRC_DEVICES_DISPLAY_DISPLAYLCD_H_

#include <LiquidCrystal_PCF8574.h>

class DisplayLCD: public LiquidCrystal_PCF8574 {
public:
	static DisplayLCD* getInstnce();
	virtual ~DisplayLCD();
private:
	static DisplayLCD * instance;
	DisplayLCD();
};

#endif /* SRC_DEVICES_DISPLAY_DISPLAYLCD_H_ */
