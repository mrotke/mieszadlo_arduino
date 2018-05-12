/*
 * DisplayLCD.cpp
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#include <devices/Display/DisplayLCD.h>
#include "LiquidCrystal_PCF8574.h"
#include "conf.h"


DisplayLCD::DisplayLCD():
LiquidCrystal_PCF8574(LCD_I2C_ADR)
{

}

DisplayLCD::~DisplayLCD() {
	// TODO Auto-generated destructor stub
}

