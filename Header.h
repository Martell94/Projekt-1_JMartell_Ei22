#ifndef HEADER_H_ //Headerguardens början.
#define HEADER_H_

#define F_CPU 16000000UL //Definierar chippets klockfrekvens som 16mHz
#include <avr/io.h> //inkluderar relevanta bibliotek
#include <util/delay.h>

#define BLED 6  //här definierar vi värdet för samtliga makron.
#define GLED 7
#define RLED 0
#define BUTTON1 4
#define BUTTON2 5

#define BLED_ON PORTD |= (1<<BLED) //Här definierar vi vilka portar som ska slås på för respektive LED.
#define GLED_ON PORTD |= (1<<GLED)
#define RLED_ON PORTB |= (1<<RLED)

#define BLED_OFF PORTD &= ~(1<<BLED) //Likt ovan, fast tvärtom.
#define GLED_OFF PORTD &= ~(1<<GLED)
#define RLED_OFF PORTB &= ~(1<<RLED)

#define BUTTON1_PRESSED (PINB & (1<<BUTTON1)) //Definierar förhållandena för att knapparna ska räknas som nedtryckta.
#define BUTTON2_PRESSED (PINB & (1<<BUTTON2))


void setup (void); //Nedan inkluderar vi headers för samtliga funktioner.

void leds_on (void);
void leds_off (void);

void leds_RTOB (void);
void leds_BTOR (void);


#endif //HEADER_H_