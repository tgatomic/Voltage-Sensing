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

    /* Replace with your application code */
    while (1) 
    {
        /*PORTB |= (1<<DBG_LED_PIN);
        _delay_ms(1000);
        PORTB &= ~(1<<DBG_LED_PIN);
        _delay_ms(500);*/
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

