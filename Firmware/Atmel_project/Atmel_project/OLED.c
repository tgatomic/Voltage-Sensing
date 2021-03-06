/*
 * OLED.c
 *
 * Created: 2017-02-11 22:09:20
 *  Author: Atomic
 */ 
#include <stdlib.h>
#include "u8g_oled/u8g.h"
#include "main.h"
#include "OLED.h"

u8g_t oled_display;

uint8_t OLED_Init(void){

    // Setting transfer speed
    CLKPR = 0x80;
    CLKPR = 0x00;

    // Initialize I2C and OLED display
    return u8g_InitI2C(&oled_display, &u8g_dev_ssd1306_128x64_i2c, U8G_I2C_OPT_NONE);
 }

void welcome_message(void){

    u8g_FirstPage(&oled_display);
    do
    {
        //Screen = 128x64
        u8g_DrawHLine(&oled_display, 20, 17, 88);

        u8g_SetFont(&oled_display, u8g_font_8x13);
        u8g_DrawStr(&oled_display, 36, 32, "V-Sense");

        u8g_DrawHLine(&oled_display, 20, 38, 88);
        
        u8g_SetFont(&oled_display, u8g_font_4x6);
        u8g_DrawStr(&oled_display, 50, 55, "By: Team Embedded");

    } while ( u8g_NextPage(&oled_display) );

}

void OLED_Connectmsg(void){

    u8g_FirstPage(&oled_display);
    do
    {
        //Screen = 128x64
        u8g_SetFont(&oled_display, u8g_font_8x13);
        u8g_DrawStr(&oled_display, 14, 24, "Connect it to");

        u8g_SetFont(&oled_display, u8g_font_8x13);
        u8g_DrawStr(&oled_display, 20, 44, "the battery");

    } while ( u8g_NextPage(&oled_display) );

}

data_struct OLED_Convertvalues(data_struct data){

    // Clear the arrays
    for(uint8_t i = 0; i<30; i++){
        data.ascii_volts[i] = 0x00;
        data.ascii_hour[i] = 0x00;
        data.ascii_minutes[i] = 0x00;
    }

    // Convert voltage values to correct format
    char tmp_ascci_buffer[30];
    itoa(data.volts, tmp_ascci_buffer, 10);
    data.ascii_volts[0] = tmp_ascci_buffer[0];
    data.ascii_volts[1] = tmp_ascci_buffer[1];
    data.ascii_volts[2] = '.';
    data.ascii_volts[3] = tmp_ascci_buffer[2];
    data.ascii_volts[4] = 'V';

    // Convert time to right format in hour and minutes
    data.hour = data.time_left / 60;
    data.minute = data.time_left % 60;

    itoa(data.hour, data.ascii_hour, 10);
    itoa(data.minute, data.ascii_minutes, 10);

    if(data.ascii_hour[1] == NULL){
        data.ascii_hour[1] = 'h';
        data.h_numbers = 1;
        } else {
        data.ascii_hour[2] = 'h';
        data.h_numbers = 2;
    }

    if(data.ascii_minutes[1] == NULL){
        data.ascii_minutes[1] = 'm';
        data.ascii_minutes[2] = 'i';
        data.ascii_minutes[3] = 'n';
        data.m_numbers = 1;
        } else {
        data.ascii_minutes[2] = 'm';
        data.ascii_minutes[3] = 'i';
        data.ascii_minutes[4] = 'n';
        data.m_numbers = 2;
    }
    return data;
}

 void OLED_print(const uint8_t  *font, uint8_t x,  uint8_t y, const char *s){

    u8g_FirstPage(&oled_display);
    do
    {
        u8g_SetFont(&oled_display, font);
        u8g_DrawStr(&oled_display, 0, 10, s);
    } while ( u8g_NextPage(&oled_display) );

 }

 void OLED_clrscreen(void){

    u8g_FirstPage(&oled_display);
    while( u8g_NextPage(&oled_display) );

 }