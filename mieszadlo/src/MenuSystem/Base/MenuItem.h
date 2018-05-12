/*
 * MenuItem.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_MENUSYSTEM_BASE_MENUITEM_H_
#define SRC_MENUSYSTEM_BASE_MENUITEM_H_
#include "Arduino.h"
#include "devices/Display/DisplayLCD.h"

class MenuItem {
public:
	MenuItem(DisplayLCD* disp);
	virtual ~MenuItem();
	virtual void display() = 0;
	virtual void analyzeKey(uint8_t key) = 0;
protected:
	uint8_t last_key;
	DisplayLCD* screen;
};

#endif /* SRC_MENUSYSTEM_BASE_MENUITEM_H_ */
