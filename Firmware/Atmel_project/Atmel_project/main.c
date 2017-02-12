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


uint8_t hardware_init(void);


int main(void)
{
    hardware_init();
    welcome_message();
    _delay_ms(2000);
    //OLED_clrscreen();
    //_delay_ms(2000);
    //OLED_Connectmsg();
    //_delay_ms(2000);
    OLED_printtime(115, 125);

    uint8_t volts = 135;
    uint16_t time_left = 80;

    /* Replace with your application code */
    while (1) 
    {
        OLED_printtime(volts, time_left);
        volts -= 1;
        time_left -= 10;
        _delay_ms(3000);
    }

}



uint8_t hardware_init(void){

    uint8_t all_ok = TRUE;

    // Configure pins
    DDRB = (1 << DBG_LED_PIN);
    PORTB = (1<<DBG_LED_PIN);

    // Initialize peripherals
    if( UART_Init(57600) ){
        UART_Send_String("UART OK");
    } else {
        all_ok = FALSE;
    }

    if( OLED_Init() ){
        UART_Send_String("OLED OK");
        } else {
        all_ok = FALSE;
    }

    ADC_init();

    PORTB &= ~(1<<DBG_LED_PIN);

    return all_ok;
}

