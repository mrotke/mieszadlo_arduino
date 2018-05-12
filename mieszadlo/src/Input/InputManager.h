/*
 * InputManager.h
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#ifndef SRC_INPUT_INPUTMANAGER_H_
#define SRC_INPUT_INPUTMANAGER_H_

#include "BaseClasses/IObserver.h"
#include "IR/IRDecoder.h"
#include "conf.h"

class InputManager {
public:
	enum type{
	NONE,
	IR_RECV,
	LAST
	};

	enum keys{
	UP =10,
	DOWN,
	LEFT,
	RIGHT,
	ENTER,
	REPEAT_KEY,
	};

	InputManager();
	virtual ~InputManager();
	void attachObserver(IObserver * obs);
	static InputManager * getInstance();
	void refresh();
	void init(IRrecv* irrec);
private:
	IObserver * observers[NUM_OF_OBSEVERS];
	static uint8_t idx;
};

#endif /* SRC_INPUT_INPUTMANAGER_H_ */
