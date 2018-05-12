/*
 * MotorDriver.cpp
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#include <devices/MotorDriver/MotorDriver.h>
#include "conf.h"


MotorDriver::MotorDriver() :
L298N(PIN_ENABLE, PIN_IN1, PIN_IN2)
{
	// TODO Auto-generated constructor stub

}

MotorDriver::~MotorDriver() {
	// TODO Auto-generated destructor stub
}

