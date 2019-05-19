/*
 * SevSegment_1.c
 *
 * Created: 27/03/2019 21:34:38
 *  Author: ahmedkareem
 */ 
#define  F_CPU 4000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	unsigned char count=0;
	
	DDRC=0xff;
	PORTC=0x00;
	_delay_ms(500);
	
    while(1)
    {
		count++;
		
		if (count ==10)
		{
			while (count>0)
			{
				count--;
				PORTC=count;
				_delay_ms(500);
			}
			
			count=0;
		}
		
		PORTC=count;
		_delay_ms(500);
         
    }
}