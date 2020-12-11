// Testing git and github capabilities

#define F_CPU 16000000ul

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
    DDRB |= 1 << PB5 | 1 << PB2 | 1 << PB3;
    for(;;)
    {
        PINB = 1 << PB5 | 1 << PB2 | 1 << PB3;
        _delay_ms(500);
    DDRB |= 1 << PB5 | 1 << PB2;
    for(;;)
    {
        PINB = 1 << PB5 | 1 << PB2;
        _delay_ms(1000);
    }
}

