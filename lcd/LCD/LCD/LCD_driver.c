/*
 * LCD.c
 *
 * Created: 8/19/2024 6:24:56 PM
 *  Author: elsawah
 */ 


#include <avr/io.h>
#define F_CPU 8000000UL
#include <util/delay.h>
#include "LCD.h"
int main(void)
{
	LCD_init();
	LCD_SEND_CHAR('A');
	_delay_ms(1000);
	LCD_SEND_CHAR('B');
	_delay_ms(1000);
	LCD_SEND_CHAR('C');
	_delay_ms(1000);
	LCD_clearscreen();
	LCD_SEND_STRING("HAJER MOHAMED");
	_delay_ms(1000);
	LCD_MOVE_CURSOR(2,4);
	_delay_ms(1000);
	LCD_SEND_CHAR('H');
	_delay_ms(1000);
	LCD_MOVE_CURSOR(2,8);
	_delay_ms(1000);
	LCD_SEND_CHAR('M');
	_delay_ms(1000);
    while(1)
    {
// 		LCD_SEND_CMD(0x1c);
// 		_delay_ms(1000);
     
    }
}