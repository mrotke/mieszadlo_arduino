/*
 * DisplayLCD.cpp
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#include <devices/Display/DisplayLCD.h>
#include "conf.h"

DisplayLCD * DisplayLCD::instance = 0;

DisplayLCD* DisplayLCD::getInstnce()
{
	if(!instance)
		instance = new DisplayLCD;
	return instance;

}

DisplayLCD::DisplayLCD():
LiquidCrystal_PCF8574(LCD_I2C_ADR)
{
	begin(LCD_COLS, LCD_ROWS);
}

DisplayLCD::~DisplayLCD() {
	// TODO Auto-generated destructor stub
}

