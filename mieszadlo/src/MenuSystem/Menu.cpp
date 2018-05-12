/*
 * Menu.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <MenuSystem/Menu.h>
#include "Input/InputManager.h"

uint8_t Menu::idx=0;
uint8_t Menu::currentMenu=0;


void Menu::update(uint8_t key, uint8_t dev) {
	if (dev == InputManager::IR_RECV)
	{
		switch (key) {
			case InputManager::DOWN:
				next();
				break;
			case InputManager::UP:
				prevoius();
				break;
			default:
				menuitems[currentMenu]->analyzeKey(key);
				break;
		}

	}
}

void Menu::addMenuItem(MenuItem* item) {
	if (idx < (NUM_OF_ITEMS))
	menuitems[idx] = item;
	idx++;
	menuitems[currentMenu]->display();
}

Menu::Menu() {
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::prevoius() {
	if (currentMenu)
		currentMenu--;
	else
		currentMenu = idx - 1;

	menuitems[currentMenu]->display();

}

void Menu::next() {
	if (currentMenu >= (idx - 1))
		currentMenu = 0;
	else
		currentMenu++;

	menuitems[currentMenu]->display();
}
