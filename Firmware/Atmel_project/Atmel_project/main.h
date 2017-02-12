/*
 * main.h
 *
 * Created: 2017-02-11 20:32:17
 *  Author: Atomic
 */ 


#ifndef MAIN_H_
#define MAIN_H_

#define TRUE 1
#define FALSE 0

#define DBG_LED_PIN PORTB0

typedef struct{

    char ascii_volts[30];
    char ascii_hour[30]; 
    char ascii_minutes[30];

    uint8_t h_numbers;
    uint8_t m_numbers;

    uint8_t hour;
    uint8_t minute;

}data_struct;

volatile data_struct info; 

#endif /* MAIN_H_ */