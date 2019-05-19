/*
 * SevSegmant_Multiplexing.c
 *
 * Created: 27/03/2019 22:01:25
 *  Author: ahmedkareem
 */ 
#define F_CPU 10000000UL;

#include <avr/io.h>
#include <util/delay.h>

unsigned short decoder (unsigned short number);

int main(void)
{
    while(1)
    {
        
    }
}



unsigned short decoder (unsigned short number){
	
	
	seitch(number)
	{
		case 0:return 0x3f;break;
		case 1:return 0x06;break;
		case 2:return 0x5B;break;
		case 3:return 0x4F;break;
		case 4:return 0x66;break;
		case 5:return 0x6D;break;
		case 6:return 0x7D;break;
		case 7:return 0x07;break;
		case 8:return 0x7F;break;
		case 9:return 0x6F;break;
	}
}