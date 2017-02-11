/*
 * Bluetooth.c
 *
 * Created: 2016-05-13 16:35:15
 *  Author: Atomic
 */ 
#define F_CPU 8000000UL

#include <avr/io.h>
#include <util/delay.h>
#include <avr/interrupt.h>
#include "UART.h"
#include "main.h"

uint8_t UART_Init(unsigned int baud){
	
	//Set double speed
	UCSR0A = (1<<U2X0);
	
	//Set baudrate
	unsigned int baudrate;
	baudrate = 8000000/8/baud-1;
	//Double speed use frequency/8/baud
	
	//Set the baudrate in the registry
	UBRR0H = (unsigned char) (baudrate>>8);
	UBRR0L = (unsigned char) (baudrate);

	
	//Enables Receive and Transmit over UART
	UCSR0B = (1<<RXEN0) | (1<<TXEN0) | (1<<RXCIE0); 
	
	//Sets to 1 stop bit and 8 data bits
	UCSR0C = (0<<USBS0) | (3<<UCSZ00);
	
	//Disables Parity
	UCSR0C |= (0<<UPM01) | (0<<UPM00);

    return 1;

}


uint8_t UART_Recieve(void){
	
	//Wait for data to be received (wait for flag to be set)
	while(!(UCSR0A & (1<<RXC0)));
	
	//Returns the data from buffer
	return UDR0;
}


void UART_Send(char data){
	
	//Waits for the transmit buffer to be empty (wait for flag)
	while(!(UCSR0A & (1<<UDRE0)));
	
	//Put data in buffer and sends it
	UDR0 = data;
}

void UART_Send_String(char *data){

    while(*data != 0x00){
        UART_Send(*data++);
    }
    UART_Send(0x0A);
}


void Uart_Flush(void){
	unsigned char dummy;
	while (UCSR0A & (1<<RXC0)) dummy = UDR0;
}


void Error(unsigned int errorcode){

	unsigned long ticks = 0;
	for(;;){
		if(ticks%10000 == 0){
			PINB = (1<<DBG_LED_PIN);
			UART_Send(errorcode);
		}
		if(ticks%10000 == 50000){
			PINB = (0<<DBG_LED_PIN);
		}
		ticks++;
	}
}


//Activates if the pairing button is pressed
ISR(PCINT2_vect){
	//BT_Pair();
}
