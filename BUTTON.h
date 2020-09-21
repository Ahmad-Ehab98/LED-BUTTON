/*
 * BUTTON.h
 *
 * Created: 8/25/2020 2:19:09 AM
 *  Author: Lenovo
 */ 


#ifndef BUTTON_H_
#define BUTTON_H_
#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\registers.h"

#define BUTTON1 1
#define BUTTON2 2
#define BUTTON3 3
#define BUTTON4 4

void BUTTON_init (uint8_t button);
uint8_t BUTTON_status (uint8_t button);




#endif /* BUTTON_H_ */