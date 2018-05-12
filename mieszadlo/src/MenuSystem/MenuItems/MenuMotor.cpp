/*
 * MenuMotor.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <MenuSystem/MenuItems/MenuMotor.h>
#include "devices/Display/DisplayLCD.h"
#include "Input/InputManager.h"

MenuMotor::MenuMotor(DisplayLCD * disp, MotorDriver *mot):
MenuValue(disp),
motor(mot)
{
	motor->setSpeed(0);
	motor->forward();
	// TODO Auto-generated constructor stub

}

void MenuMotor::display() {
	last_key = 255;
	screen->clear();
 	screen->setCursor(0, 0);
	screen->print(F("Motor Speed"));
	displayValue();
}

void MenuMotor::analyzeKey(uint8_t key) {

		switch (key) {
			case InputManager::LEFT:
				if (value)
					decrementValue();
				last_key = InputManager::LEFT;
				break;
			case InputManager::RIGHT:
				if (value < 255)
					incrementValue();
				last_key = InputManager::RIGHT;
				break;
			case InputManager::REPEAT_KEY:
				if (last_key == InputManager::LEFT)
					if (value)
						decrementValue();
				if (last_key == InputManager::RIGHT)
					if (value < 255)
						incrementValue();
				break;
			default:
				last_key =255;
				break;
		}
		motor->setSpeed(value);
		motor->forward();
		analogWrite(10,value);

}

MenuMotor::~MenuMotor() {
	// TODO Auto-generated destructor stub
}

