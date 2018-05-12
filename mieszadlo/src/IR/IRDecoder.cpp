/*
 * IRDecoder.cpp
 *
 *  Created on: 8 sty 2018
 *      Author: Michal
 */

#include "IRDecoder.h"
#include "pilot_codes/pilot_codes.h"
#include "conf.h"

IRrecv * IRDecoder::irRec = 0;
decode_results * IRDecoder::results = 0;

void IRDecoder::init(IRrecv* irrec) {
	irRec = irrec;
	irRec->enableIRIn();
}

uint8_t IRDecoder::decode() {
	if (irRec->decode(results) == 1) {
		irRec->resume();
		results->value &= 0x00FFFF;
		if (results->value == 0)
			return 15;



		for (uint8_t i =0;i<NUMBER_OF_KEYS;i++)
		{
			uint16_t tmp = pilot_codes[i];
			if (tmp == results->value)
				return i;
		}
	}
	return 255;
}


