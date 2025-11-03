#include <STC12C5A60S2.h>
  
sbit HC138_C = P2^7;
sbit HC138_B = P2^6;
sbit HC138_A = P2^5;

sbit Led = P0^0; //第一個LED燈引脚
int main()
{

	HC138_C = 1;
	HC138_B = 0;
	HC138_A = 0; 

	Led = 0;

	while(1)
	{
		 ledRunning();
	} 
}
