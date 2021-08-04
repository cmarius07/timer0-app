#include <avr/io.h>


int main(void)
{
	//set DDRB high to read signal from PB4 (OC0)
    DDRB |= (1<<PB4);
	
	//Non-inverting - fast PWM - clk/1
	TCCR0 = (1<<COM01) | (1<<WGM01) | (1<<WGM00) | (1<<CS00);
	
	//50% duty cycle
	OCR0 = 127;
	
    while (1) 
    {
    }
}

