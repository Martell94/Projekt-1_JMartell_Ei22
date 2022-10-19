#include "header.h" //Inkluderar headerfilen.

int main(void) //Programmets b�rjan.
{	
	setup(); // Vi k�r denna en g�ng innan vi hoppar in i loopen, f�r att ettst�lla relevanta portar.
	
    while (1) // I denna loop kallar vi p� div. funktioner f�r att lysa beroende p� knapptryckningar. 
    {
		if (BUTTON1_PRESSED &&  !BUTTON2_PRESSED){ // Lyser i sekvens, r�d till bl�, ifall knapp 1 �r nedtryckt.
			leds_RTOB();
		}
		else if (BUTTON2_PRESSED && !BUTTON1_PRESSED){ // Lyser i sekvens, bl� till r�d, ifall knapp 2 �r nedtryckt.
			leds_BTOR();
		}
		else if (BUTTON1_PRESSED && BUTTON2_PRESSED){ // Alla LEDs lyser ifall b�da �r nedtryckta.
			leds_on();
		}
		else{ // Ifall ingen knapp �r nedtryck s� k�r den detta kommandot.
			leds_off();
		}
	}
	
	return 0; //Returnerar noll!
}

