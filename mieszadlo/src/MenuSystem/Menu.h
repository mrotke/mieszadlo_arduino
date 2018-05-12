/*
 * Menu.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_MENUSYSTEM_MENU_H_
#define SRC_MENUSYSTEM_MENU_H_

#include <BaseClasses/IObserver.h>
#include "Base/MenuItem.h"
#include "conf.h"

class Menu: public IObserver {
public:
	void update(uint8_t key,uint8_t dev);
	void addMenuItem(MenuItem* item);
	virtual ~Menu();
	Menu();
private:
	void prevoius();
	void next();

	MenuItem * menuitems[NUM_OF_ITEMS];
	static uint8_t idx;
	static uint8_t currentMenu;

};

#endif /* SRC_MENUSYSTEM_MENU_H_ */
