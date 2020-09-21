/*
 * GccApplication1.c
 *
 * Created: 8/24/2020 5:09:15 PM
 * Author : Lenovo
 */ 

#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\registers.h"
#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\GccApplication1\MCAL\DIO\DIO.h"
#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\GccApplication1\ECUAL\LED\LED.h"
#include "C:\Users\Lenovo\Documents\Atmel Studio\7.0\GccApplication1\GccApplication1\ECUAL\BUTTON\BUTTON.h"
int main(void)
{

    /* Replace with your application code */
   

    while (1) 
    {
      LED_init(LED1);
	  LED_init(LED2);
	  BUTTON_init(BUTTON1);
	  BUTTON_init(BUTTON2);
	  if (BUTTON_status(BUTTON1) == 0)
	  {
        LED_toggle(LED1);
	  }
	  if (BUTTON_status(BUTTON2) == 1)
	  {
		  LED_toggle(LED2);
	  }
	  
    }
}

