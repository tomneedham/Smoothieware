#ifndef LAMP_MODULE_H
#define LAMP_MODULE_H

#include "libs/Module.h"
#include "Pwm.h"

class Lamp : public Module{
	public:
		Lamp();
		virtual ~Lamp() {};
		void on_module_loaded();
		void on_block_end(void* argument);
		void on_block_begin(void* argument);
		void on_play(void* argument);
		void on_pause(void* argument);
		void on_gcode_execute(void* argument);

	//heater copy	
	private:
		Pwm heater_pin;
		struct {
			bool heater_on:1;
		};
};

#endif

 