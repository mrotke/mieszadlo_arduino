/*
 * MenuMotor.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_MENUSYSTEM_MENUITEMS_MENUMOTOR_H_
#define SRC_MENUSYSTEM_MENUITEMS_MENUMOTOR_H_

#include <MenuSystem/Base/MenuValue.h>
#include "devices/MotorDriver/MotorDriver.h"

class MenuMotor: public MenuValue {
public:
	MenuMotor(DisplayLCD * disp,MotorDriver* mot);
	void display();
	void analyzeKey(uint8_t key);
	virtual ~MenuMotor();
private:
	MotorDriver* motor;
};

#endif /* SRC_MENUSYSTEM_MENUITEMS_MENUMOTOR_H_ */
