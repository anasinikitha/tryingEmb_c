#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include "activity1.h"
#include "project_config.h"
#include "activity2.h"
#include "activity3.h"

void InitPWM()
{
    TIMER_CONTROL_REGISTER_A|=(1<<NON_INVERTING_COMPAIR_MODE)|(1<<WAVE_GENERATION_MODE_0)|(1<<WAVE_GENERATION_MODE_1);// nON INVERTING PWM & FAST  PWM MODE
    TIMER_CONTROL_REGISTER_B|=(1<<PRESCALAR_BIT_0)|(1<<PRESCALAR_BIT_1);//PRESCALING OF /64
    DDRD|=(1<<CRO_DISPLAY_PIN);
    OUTPUT_COMPAIR_REGISTER_0A=255;
}
