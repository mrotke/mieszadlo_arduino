/*
 * MenuBacklight.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <MenuSystem/MenuItems/MenuBacklight.h>
#include "devices/Display/DisplayLCD.h"
#include "Input/InputManager.h"


MenuBacklight::MenuBacklight(DisplayLCD * disp):
MenuValue(disp)
{
	// TODO Auto-generated constructor stub

}

void MenuBacklight::display() {
	last_key = 255;
	screen->clear();
	screen->setCursor(0, 0);
	screen->print(F("Backlight"));
	displayValue();
}

void MenuBacklight::analyzeKey(uint8_t key) {
	switch (key) {
		case InputManager::LEFT:
			if (value)
				value--;
			last_key = InputManager::LEFT;
			break;
		case InputManager::RIGHT:
			if (value < 255)
				value++;
			last_key = InputManager::RIGHT;
			break;
		case InputManager::REPEAT_KEY:
			if (last_key == InputManager::LEFT)
				if (value)
					value--;
			if (last_key == InputManager::RIGHT)
				if (value < 255)
					value++;
			break;
		default:
			last_key =255;
			break;
	}

	displayValue();
}

MenuBacklight::~MenuBacklight() {
	// TODO Auto-generated destructor stub
}

