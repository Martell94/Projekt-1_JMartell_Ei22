#ifndef HEADER_H_ //Headerguardens b�rjan.
#define HEADER_H_

#define F_CPU 16000000UL //Definierar chippets klockfrekvens som 16mHz
#include <avr/io.h> //inkluderar relevanta bibliotek
#include <util/delay.h>

#define BLED 6  //h�r definierar vi v�rdet f�r samtliga makron.
#define GLED 7
#define RLED 0
#define BUTTON1 4
#define BUTTON2 5

#define BLED_ON PORTD |= (1<<BLED) //H�r definierar vi vilka portar som ska sl�s p� f�r respektive LED.
#define GLED_ON PORTD |= (1<<GLED)
#define RLED_ON PORTB |= (1<<RLED)

#define BLED_OFF PORTD &= ~(1<<BLED) //Likt ovan, fast tv�rtom.
#define GLED_OFF PORTD &= ~(1<<GLED)
#define RLED_OFF PORTB &= ~(1<<RLED)

#define BUTTON1_PRESSED (PINB & (1<<BUTTON1)) //Definierar f�rh�llandena f�r att knapparna ska r�knas som nedtryckta.
#define BUTTON2_PRESSED (PINB & (1<<BUTTON2))


void setup (void); //Nedan inkluderar vi headers f�r samtliga funktioner.

void leds_on (void);
void leds_off (void);

void leds_RTOB (void);
void leds_BTOR (void);


#endif //HEADER_H_