/*
 * MenuBacklight.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_MENUSYSTEM_MENUITEMS_MENUBACKLIGHT_H_
#define SRC_MENUSYSTEM_MENUITEMS_MENUBACKLIGHT_H_

#include <MenuSystem/Base/MenuValue.h>

class MenuBacklight: public MenuValue {
public:
	MenuBacklight(DisplayLCD * disp);
	void display();
	void analyzeKey(uint8_t key);
	virtual ~MenuBacklight();
};

#endif /* SRC_MENUSYSTEM_MENUITEMS_MENUBACKLIGHT_H_ */
