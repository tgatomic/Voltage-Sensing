/*
 * OLED.c
 *
 * Created: 2017-02-11 22:09:20
 *  Author: Atomic
 */ 
 #include "u8g_oled/u8g.h"
 #include "OLED.h"
 #include <stdlib.h>

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

void OLED_printtime(uint8_t volts, uint16_t time_left){

    char ascii_volts[30];
    char tmp_ascci_buffer[30];

    for(uint8_t i = 0; i<30; i++){
        ascii_volts[i] = 0x00;
    }

    itoa(volts, tmp_ascci_buffer, 10);

    ascii_volts[0] = tmp_ascci_buffer[0];
    ascii_volts[1] = tmp_ascci_buffer[1];
    ascii_volts[2] = '.';
    ascii_volts[3] = tmp_ascci_buffer[2];
    ascii_volts[4] = 'V';

     char ascii_hour[30], ascii_minutes[30];
     uint8_t hour = 0, minute = 0, h_numbers = 0, m_numbers = 0;

    for(uint8_t i = 0; i<30; i++){
        ascii_hour[i] = 0x00;
        ascii_minutes[i] = 0x00;
    }

    hour = time_left / 60;
    minute = time_left % 60;

    itoa(hour, ascii_hour, 10);
    itoa(minute, ascii_minutes, 10);

    if(ascii_hour[1] == NULL){
        ascii_hour[1] = 'h';
        h_numbers = 1;
    } else {
        ascii_hour[2] = 'h';
        h_numbers = 2;
    }

    if(ascii_minutes[1] == NULL){
        ascii_minutes[1] = 'm';
        ascii_minutes[2] = 'i';
        ascii_minutes[3] = 'n';
        m_numbers = 1;
    } else {
        ascii_minutes[2] = 'm';
        ascii_minutes[3] = 'i';
        ascii_minutes[4] = 'n';
        m_numbers = 2;
    }


    u8g_FirstPage(&oled_display);
    do
    {
        // Screen = 128x64
        // Printing hour left
        uint8_t hour_placing = (50-(h_numbers*10));
        u8g_SetFont(&oled_display, u8g_font_courB24);
        u8g_DrawStr(&oled_display, hour_placing, 27, ascii_hour);

        // Printing minutes left
        uint8_t min_placing = (48-(m_numbers*8));
        u8g_SetFont(&oled_display, u8g_font_courB14);
        u8g_DrawStr(&oled_display, min_placing, 45, ascii_minutes);

        // Printing "time left"
        u8g_SetFont(&oled_display, u8g_font_courB10);
        u8g_DrawStr(&oled_display, 22, 60, "time left");

        // Printing the voltage
        u8g_SetFont(&oled_display, u8g_font_4x6);
        u8g_DrawStr(&oled_display, 104, 10, ascii_volts);

    } while ( u8g_NextPage(&oled_display) );

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

 void testdraw(void){

     u8g_FirstPage(&oled_display);
     do
     {
         draw();
     } while ( u8g_NextPage(&oled_display) );

 }