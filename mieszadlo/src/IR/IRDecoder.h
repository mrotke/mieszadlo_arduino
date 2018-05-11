/*
 * IRDecoder.h
 *
 *  Created on: 8 sty 2018
 *      Author: Michal
 */
#include "Arduino.h"
#include <RobotIRremote.h>
#include <RobotIRremoteInt.h>
#include "conf.h"


#ifndef IRDECODER_H_
#define IRDECODER_H_

#define IRPIN IR_RECV_PIN

class IRDecoder {
private:
	static IRrecv * irRec;
public:
	static void init();
	static uint8_t decode();
	static decode_results *results;
protected:

};

#endif /* IRDECODER_H_ */
