/*
 * MenuValue.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_MENUSYSTEM_BASE_MENUVALUE_H_
#define SRC_MENUSYSTEM_BASE_MENUVALUE_H_

#include <MenuSystem/Base/MenuItem.h>
#include "devices/Display/DisplayLCD.h"

class MenuValue: public MenuItem {
public:
	MenuValue(DisplayLCD *disp);
	void decrementValue();
	void incrementValue();

	void setNewValue(uint8_t val);
	void displayValue();

	virtual ~MenuValue();
protected:
	uint8_t value;
};

#endif /* SRC_MENUSYSTEM_BASE_MENUVALUE_H_ */
