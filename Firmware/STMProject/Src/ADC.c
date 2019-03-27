/*
 * ADC.c
 *
 * Created: 2016-04-28 14:03:18
 *  Author: Atomic
 */ 

#include "ADC.h"
#include "stdint.h"
#include "main.h"

extern ADC_HandleTypeDef hadc;

uint16_t Read_ADC(uint8_t ADC_Channel){
	
	uint16_t adcValue = 0;
	
	if (HAL_ADC_PollForConversion(&hadc, 10000) == HAL_OK)
	{
		adcValue = HAL_ADC_GetValue(&hadc);
	}
	
	return adcValue;
}
