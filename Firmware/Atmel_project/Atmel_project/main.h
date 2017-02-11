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
    uint8_t buffer[20];
}data_struct;

volatile data_struct info; 

#endif /* MAIN_H_ */