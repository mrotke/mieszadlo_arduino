/*
 * IObserver.h
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#ifndef SRC_BASECLASSES_IOBSERVER_H_
#define SRC_BASECLASSES_IOBSERVER_H_

#include "Arduino.h"

class IObserver {
public:
	IObserver();
	virtual void update(uint8_t key,uint8_t dev) =0;
	virtual ~IObserver();
};

#endif /* SRC_BASECLASSES_IOBSERVER_H_ */
