/*
 * Atmel_project.c
 *
 * Created: 2017-02-11 20:23:47
 * Author : Atomic
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>
#include "main.h"
#include "ADC.h"
#include "UART.h"
//#include "PWM.h"
#include "OLED.h"
#include "u8g_oled/u8g.h"



uint8_t hardware_init(void);
uint8_t connected(void);
void OLED_printtime(data_struct values);
data_struct Get_ADC_and_time(void);
data_struct Calculate_voltage(void);
uint16_t Calculate_time_left(uint8_t volts);

extern u8g_t oled_display;

int main(void)
{
    hardware_init();
    data_struct data;

    welcome_message();
    _delay_ms(4000);
    OLED_clrscreen();
    _delay_ms(2000);
    OLED_Connectmsg();
    _delay_ms(2000);
    OLED_clrscreen();
    _delay_ms(2000);

    Calculate_voltage();

    data.volts = 125;
    data.time_left = 135;

    /* Replace with your application code */
    while (1) 
    {
        OLED_printtime(data);
        data.volts -= 1;
        data.time_left -= 10;
        _delay_ms(3000);
    }


    while(1)
    {
        if( connected() ){
            OLED_printtime(data);
        } else {
            OLED_Connectmsg();
        }
        _delay_ms(100);
    }


}

uint8_t hardware_init(void){

    uint8_t all_ok = TRUE;

    // Configure pins
    DDRB = (1 << DBG_LED_PIN);
    PORTB = (1<<DBG_LED_PIN);

    // Initialize peripherals
    if( UART_Init(57600) ){
        //UART_Send_String("UART OK");
    } else {
        all_ok = FALSE;
    }

    if( OLED_Init() ){
        //UART_Send_String("OLED OK");
        } else {
        all_ok = FALSE;
    }

    ADC_init();

    PORTB &= ~(1<<DBG_LED_PIN);

    return all_ok;
}

uint8_t connected(void){
    
    uint16_t ADC_value = Read_ADC(0);

    if(ADC_value > 500){
        return TRUE;
    } else {
        return FALSE;
    }
}

void OLED_printtime(data_struct values){

    data_struct data;

    // Get the adv values and store that and time left on battery
    data = Get_ADC_and_time();

    // Convert the results to ascii values
    data = OLED_Convertvalues(values);

    // Prints it out on the screen
    u8g_FirstPage(&oled_display);
    do
    {
        // Screen = 128x64
        // Printing hour left
        uint8_t hour_placing = (50-(data.h_numbers*10));
        u8g_SetFont(&oled_display, u8g_font_courB24);
        u8g_DrawStr(&oled_display, hour_placing, 27, data.ascii_hour);

        // Printing minutes left
        uint8_t min_placing = (48-(data.m_numbers*8));
        u8g_SetFont(&oled_display, u8g_font_courB14);
        u8g_DrawStr(&oled_display, min_placing, 45, data.ascii_minutes);

        // Printing "time left"
        u8g_SetFont(&oled_display, u8g_font_courB10);
        u8g_DrawStr(&oled_display, 22, 60, "time left");

        // Printing the voltage
        u8g_SetFont(&oled_display, u8g_font_4x6);
        u8g_DrawStr(&oled_display, 104, 10, data.ascii_volts);

    } while ( u8g_NextPage(&oled_display) );

}

data_struct Get_ADC_and_time(void){

    data_struct data;

    // Get adc data and calculate it to correct value
    data = Calculate_voltage();
    
    // Takes the voltage as an argument and use it to calculate
    // time left on the battery. 
    data.time_left = Calculate_time_left(data.ascii_volts);

    return data;
}

data_struct Calculate_voltage(void){

    data_struct result;

    result.volts = Read_ADC(0);

    uint8_t test_volt = (1024/5) * result.volts;
    UART_Send(test_volt);

/*
    // Algorithm from my first version

    vout = ((value/30) * 5.0)/1024.0;
    vin = (vout / (R2/(R1+R2)))-0.5;
    percentage = (((maxVolt-minVolt)-(maxVolt-vin))/(maxVolt-minVolt));
    round(percentage);
    tlefth = (AH * percentage)/60;
*/

    return result;
}

uint16_t Calculate_time_left(uint8_t volts){


    return 1;
}

void UART_Send_ADC(uint16_t ADC_Value){

    uint8_t hi = ( (ADC_Value>>8) & 0xFF );
    uint8_t lo = ADC_Value & 0xFF;

    UART_Send(lo);
    UART_Send(hi);

}



