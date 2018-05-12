/*
 * InputManager.cpp
 *
 *  Created on: May 11, 2018
 *      Author: michal
 */

#include <Input/InputManager.h>
#include "devices/Display/DisplayLCD.h"

uint8_t InputManager::idx=0;


void InputManager::refresh() {
	uint8_t mes = IRDecoder::decode();
	if(mes != 255)
	{

//		DisplayLCD::getInstnce()->clear();
//		DisplayLCD::getInstnce()->home();
//		DisplayLCD::getInstnce()->setBacklight(255);
		Serial.println(mes,HEX);
//		DisplayLCD::getInstnce()->print(value);
		for (uint8_t i=0;i<idx;i++)
		{
			observers[i]->update(mes, IR_RECV);
		}
	}

}

void InputManager::init(IRrecv* irrec) {
	IRDecoder::init(irrec);
}

InputManager::InputManager() {
	// TODO Auto-generated constructor stub
}

InputManager::~InputManager() {
	// TODO Auto-generated destructor stub
}

void InputManager::attachObserver(IObserver* obs) {
	observers[idx] = obs;
	idx++;
}
