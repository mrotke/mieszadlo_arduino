/*
 * MenuValue.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <MenuSystem/Base/MenuValue.h>
#include "devices/Display/DisplayLCD.h"

MenuValue::MenuValue(DisplayLCD * disp):
MenuItem(disp)
{
	value = 0;
}

void MenuValue::setNewValue(uint8_t val) {
	value = val;
	displayValue();
}

void MenuValue::displayValue() {
	screen->setCursor(0, 1);
	screen->print("   ");
	screen->setCursor(0, 1);
	screen->print(value);
}

MenuValue::~MenuValue() {
	// TODO Auto-generated destructor stub
}

void MenuValue::decrementValue() {
	value--;
	setNewValue(value);
}

void MenuValue::incrementValue() {
	value++;
	setNewValue(value);
}
