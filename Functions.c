#include "header.h"

void setup (void){ //Ettställer relevanta portar på chippet.
	DDRD = ((1<< BLED) | (1<<GLED));
	DDRB = ((1<< RLED));
	PINB = ((1 << BUTTON1) | (1 <<BUTTON2));
	
	return;
}

void leds_on (void){ //Slår på alla LEDs via de makron jag definierat i headerfilen.
	
	BLED_ON;
	GLED_ON;
	RLED_ON;
	return;	
}

void leds_off (void){ //Släcker alla LEDs via de makron jag definierat i headerfilen.
	
	BLED_OFF;
	GLED_OFF;
	RLED_OFF;
	return;
}

void leds_RTOB (void){ //Tänder och släcker LEDs i sekvens, riktning röd till blå (därav RTOB)
	
	RLED_ON;
	_delay_ms(100);
	RLED_OFF;
	GLED_ON;
	_delay_ms(100);
	GLED_OFF;
	BLED_ON;
	_delay_ms(100);
	BLED_OFF;
	return;
}

void leds_BTOR (void){ //Tänder och släcker LEDs i sekvens, riktning röd till blå (BTOR)
	
	BLED_ON;
	_delay_ms(100);
	BLED_OFF;
	GLED_ON;
	_delay_ms(100);
	GLED_OFF;
	RLED_ON;
	_delay_ms(100);
	RLED_OFF;
	return;
}
