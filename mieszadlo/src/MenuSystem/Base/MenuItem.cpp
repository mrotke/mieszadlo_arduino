/*
 * MenuItem.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <MenuSystem/Base/MenuItem.h>

MenuItem::MenuItem(DisplayLCD* disp) {
	last_key = 255;
	screen = disp;
}

MenuItem::~MenuItem() {
	// TODO Auto-generated destructor stub
}

