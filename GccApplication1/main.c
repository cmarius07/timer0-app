/*
 * GccApplication1.c
 *
 * Created: 04-Aug-21 9:15:42 PM
 * Author : gamer
 */ 

#include <avr/io.h>


int main(void)
{
    DDRB |= (1<<PB4);
	TCCR0 = (1<<COM01) | (1<<WGM01) | (1<<WGM00) | (1<<CS00);
	OCR0 = 178;
	
    while (1) 
    {
    }
}

