#include "header.h" //Inkluderar headerfilen.

int main(void) //Programmets början.
{	
	setup(); // Vi kör denna en gång innan vi hoppar in i loopen, för att ettställa relevanta portar.
	
    while (1) // I denna loop kallar vi på div. funktioner för att lysa beroende på knapptryckningar. 
    {
		if (BUTTON1_PRESSED &&  !BUTTON2_PRESSED){ // Lyser i sekvens, röd till blå, ifall knapp 1 är nedtryckt.
			leds_RTOB();
		}
		else if (BUTTON2_PRESSED && !BUTTON1_PRESSED){ // Lyser i sekvens, blå till röd, ifall knapp 2 är nedtryckt.
			leds_BTOR();
		}
		else if (BUTTON1_PRESSED && BUTTON2_PRESSED){ // Alla LEDs lyser ifall båda är nedtryckta.
			leds_on();
		}
		else{ // Ifall ingen knapp är nedtryck så kör den detta kommandot.
			leds_off();
		}
	}
	
	return 0; //Returnerar noll!
}

