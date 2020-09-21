/*
 * BUTTON.c
 *
 * Created: 8/25/2020 2:19:23 AM
 *  Author: Lenovo
 */ 
#include "BUTTON.h"
#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\GccApplication1\MCAL\DIO\DIO.h"

void BUTTON_init(uint8_t button)
{
	if (button == BUTTON1)
	  DIO_init(PORTD,PIN0,LOW);
	else if (button == BUTTON2)
	  DIO_init(PORTD,PIN1,LOW);
	else if (button == BUTTON3)
	  DIO_init(PORTD,PIN2,LOW);
	else if (button == BUTTON4)
	  DIO_init(PORTD,PIN3,LOW);
}
uint8_t BUTTON_status (uint8_t button)
{
	if (button == BUTTON1)
	return DIO_read(PORTD,PIN0);
	
	else if (button == BUTTON2)
	return DIO_read(PORTD,PIN1);
	
	else if (button == BUTTON3)
	return DIO_read(PORTD,PIN2);
	
	else if (button == BUTTON4)
	return DIO_read(PORTD,PIN3);
		
	else
	return 0;
}