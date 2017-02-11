/*
 * Bluetooth.h
 *
 * Created: 2016-05-13 16:35:28
 *  Author: Atomic
 */ 


#ifndef BLUETOOTH_H_
#define BLUETOOTH_H_

void BT_Pair(void);
uint8_t UART_Init(unsigned int baud);

void UART_Send(char data);
void UART_Send_String(char *data);

uint8_t UART_Recieve(void);
void Uart_Flush(void);

void Error(unsigned int errorcode);

#endif /* BLUETOOTH_H_ */