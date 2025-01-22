#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "Serial.h"
#include "AD.h"
uint16_t ADValue;
float Voltage;
uint8_t RxData;

int main(void)
{
	
	
	Serial_Init();
	AD_Init();
	while (1)
	{
			//ADValue = AD_GetValue();
			//Voltage = (float)ADValue / 4095 * 3.3;
			//RxData = Voltage;
			RxData = 1;
			Serial_SendByte(RxData);
			
		
	}
}
