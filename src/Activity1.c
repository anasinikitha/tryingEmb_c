#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include "activity1.h"
#include "project_config.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"


void peripheral_init(void)
{
	DDRB|=(1<<LED_PIN);//SET PB0 AS OUTPUT PIN FOR LED
    DDRD&=~(1<<HEARTER_PIN);//PUSH BUTTON FOR PASENGER CHECK
    DDRD&=~(1<<OCCUPANCY_PIN);//PUSH BUTTON FOR HEATER CHECK

    HEATER_OCCUPANCY_PORT|=(1<<HEARTER_PIN);//SET 5 VOLT WHEN SWITCH IS OFF
    HEATER_OCCUPANCY_PORT|=(1<<OCCUPANCY_PIN);//SET 5 VOLT WHEN SWITCH IS OFF

    InitADC();//INITALIZE ADC
    InitPWM(); //INITIALIZATION FOR PWM OUTPUT
    USARTInit(103); //USART INITIATE
}

void change_led_state(uint8_t state)
{
	LED_PORT = (state << LED_PIN);
}
