/*
 * stop_watch.c
 *
 * Created: 3/14/2016 11:05:01 PM
 *  Author: Mac
 */ 


#include <avr/io.h>
#define F_CPU 4000000UL
#include <util/delay.h>

unsigned char BCD(unsigned char y)
{
	y=y&0x0F;
	if (y>9)
	{
		y=y+6;
	}
	return y;
}


int main(void)
{
	unsigned char x=0;
	DDRA&=0xDF;
	DDRB=0xFF;
	DDRC|=0x03;
	PORTC|=0x03;
	
	while((PINA & 0x02)==0);
	for(unsigned char i=0;i<60;++i)
	{
		x=BCD(x);
		PORTB=x;
		PORTC &=0xFC;
		PORTC |=0X03;
		_delay_ms(1000);
		x++;
	}
}