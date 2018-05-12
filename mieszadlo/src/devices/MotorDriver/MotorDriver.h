/*
 * MotorDriver.h
 *
 *  Created on: May 12, 2018
 *      Author: michal
 */

#ifndef SRC_DEVICES_MOTORDRIVER_MOTORDRIVER_H_
#define SRC_DEVICES_MOTORDRIVER_MOTORDRIVER_H_

#include <L298N.h>

class MotorDriver: public L298N {
public:
	virtual ~MotorDriver();
	MotorDriver();
private:

};

#endif /* SRC_DEVICES_MOTORDRIVER_MOTORDRIVER_H_ */
