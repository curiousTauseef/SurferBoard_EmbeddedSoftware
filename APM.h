#ifndef APM_H
#define APM_H

#include <WProgram.h>

namespace APM {
	void init();

	void outputPWM(uint8_t channel, int16_t pwm);
	
	int16_t getPWM(uint8_t channel);
}

#endif