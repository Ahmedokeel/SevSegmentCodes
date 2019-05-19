/*
 * two_seven.c
 *
 * Created: 3/23/2016 8:59:45 PM
 *  Author: Mac
 */ 

#define F_CPU 8000000UL
#include <avr/io.h>
#include<util/delay.h>


int main(void)
{
	unsigned char num[2]={0,0},c=0;
	
	DDRA |=0x0C;
	DDRD |=0xF0;
	PORTA &=(~(1<<1));
	
	
	while(PINA & 0x01==1);
	
	while(c<60)
	{
		
 	
         for(unsigned char j=0;j<50;j++)
             {
	             for (unsigned char i=2;i<4;i++)
	             {
					 if(c>9)
					 {
						 num[0]=c%10;
						 num[1]=c/10;
					 }
					 PORTD &=0x0F;
					 PORTD |=(num[(i-2)]<<4);
					 PORTD |=(1<<i);
					 _delay_ms(10);
					 PORTA &=(~(1<<i));
	             }
	           	 
            }
			c++;
  
  }  
}