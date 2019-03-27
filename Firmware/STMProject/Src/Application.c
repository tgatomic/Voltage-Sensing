/*
 * Application.c
 *
 *  Created on: 15 mars 2019
 *      Author: Atomic
 */
#include "main.h"
#include "ADC.h"

data_struct Calculate_voltage(void){

    data_struct result;

    result.volts = Read_ADC(0);

    uint8_t test_volt = (1024/5) * result.volts;
    UART_Send(test_volt);

    return result;
}

uint16_t Calculate_time_left(uint16_t volts){


    return 1;
}

data_struct Get_ADC_and_time(void){

    data_struct data;

    // Get adc data and calculate it to correct value
    data = Calculate_voltage();

    // Takes the voltage as an argument and use it to calculate
    // time left on the battery.
    data.time_left = Calculate_time_left((uint16_t)data.ascii_volts);

    return data;
}
