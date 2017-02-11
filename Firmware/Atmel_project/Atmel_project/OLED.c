/*
 * OLED.c
 *
 * Created: 2017-02-11 22:09:20
 *  Author: Atomic
 */ 
 #include "u8g_oled/u8g.h"
 #include "OLED.h"

 u8g_t oled_display, u8g;


 uint8_t OLED_Init(void){

    // Setting transfer speed
    CLKPR = 0x80;
    CLKPR = 0x00;

    // Initialize I2C and OLED display
    u8g_InitI2C(&oled_display, &u8g_dev_ssd1306_128x64_i2c, U8G_I2C_OPT_NONE);

    welcome_message();

    return 1;
 }

void draw_logo(uint8_t d)
{
    u8g_SetFont(&oled_display, u8g_font_gdr25r);
    u8g_DrawStr(&oled_display, 0+d, 30+d, "U");
    u8g_SetFont(&oled_display, u8g_font_gdr30n);
    u8g_DrawStr90(&oled_display, 23+d,10+d,"8");
    u8g_SetFont(&oled_display, u8g_font_gdr25r);
    u8g_DrawStr(&oled_display, 53+d,30+d,"g");

    u8g_DrawHLine(&oled_display, 2+d, 35+d, 47);
    u8g_DrawVLine(&oled_display, 45+d, 32+d, 12);
}


void draw(void)
{
    u8g_SetColorIndex(&oled_display, 1);
    if ( U8G_MODE_GET_BITS_PER_PIXEL(u8g_GetMode(&u8g)) > 1 )
    {
        draw_logo(2);
        u8g_SetColorIndex(&oled_display, 2);
        draw_logo(1);
        u8g_SetColorIndex(&oled_display, 3);
    }
    draw_logo(0);
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

 void OLED_print(const uint8_t  *font, uint8_t x,  uint8_t y, const char *s){

    u8g_FirstPage(&oled_display);
    do
    {
        //draw();
        //Screen = 128x64
        u8g_SetFont(&oled_display, font);
        u8g_DrawStr(&oled_display, 0, 10, s);
    } while ( u8g_NextPage(&oled_display) );

 }

 void testdraw(void){

     u8g_FirstPage(&oled_display);
     do
     {
         draw();
     } while ( u8g_NextPage(&oled_display) );

 }