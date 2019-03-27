/*
 * OLED.h
 *
 * Created: 2017-02-11 22:09:32
 *  Author: Atomic
 */ 


#ifndef OLED_H_
#define OLED_H_

uint8_t OLED_Init(void);
void testdraw(void);
void welcome_message(void);
void OLED_Connectmsg(void);
void OLED_clrscreen(void);
void OLED_print(const uint8_t  *font, uint8_t x,  uint8_t y, const char *s);
data_struct OLED_Convertvalues(data_struct data);


#endif /* OLED_H_ */