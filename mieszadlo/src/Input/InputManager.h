/*
 * InputManager.h
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#ifndef SRC_INPUT_INPUTMANAGER_H_
#define SRC_INPUT_INPUTMANAGER_H_

#include "BaseClasses/IObserver.h"
#include "conf.h"

class InputManager {
public:
	enum type{
	NONE,
	IR_RECV,
	LAST
	};


	virtual ~InputManager();
	void attachObserver(IObserver * obs);
	static InputManager * getInstance();
	void refresh();
	void init();
private:
	InputManager();

	static InputManager * instance;
	static IObserver * observers[NUM_OF_OBSEVERS];
	static uint8_t idx;
};

#endif /* SRC_INPUT_INPUTMANAGER_H_ */
