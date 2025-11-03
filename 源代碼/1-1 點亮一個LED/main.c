#include <STC15F2K60S2.h> 
  
sbit HC138_C = P2^7;
sbit HC138_B = P2^6;
sbit HC138_A = P2^5;

sbit Led0 = P0^0; //第一个led灯引脚

void delay(unsigned int t)
{
	while(t--);
	while(t--);
}

void ledRunning()
{
	//控制一组8个灯
	/* 
	unsigned char i; //定义变量一定要在函数开头
	
	HC138_C = 1;
	HC138_B = 0;
	HC138_A = 0; 
 	
	for(i = 0; i<3; i++)
	{
		P0 = 0x00; //输出低电平，则灯亮
		delay(60000);
		delay(60000);
		
		P0 = 0xff; //输出高电平，则灯灭
		delay(60000);
		delay(60000); 
	}
	
	 
	for(i=1; i<=8; i++)
	{
		P0 = 0xff << i; //逐个亮
		delay(60000);
		delay(60000);
	}
	
	for(i=1; i<=8; i++)
	{
		P0 = ~(0xff << i); //逐个灭
		delay(60000);
		delay(60000);
	}
	*/
	
	
	//控制一个灯
	//138译码器
	HC138_C = 1;
	HC138_B = 0;
	HC138_A = 0; 
	
	//灯
	Led0 = 0;
	delay(60000);
	delay(60000);
	Led0 = 1;
	delay(60000);
	delay(60000);
	
}



int main()
{
	
	while(1)
	{
		 ledRunning();
	} 
}
