/*
 * SystemInit.cpp
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#include <Init/SystemInit.h>
#include "Input/InputManager.h"


void SystemInit::systemInit() {
	InputManager::getInstance()->init();

}
