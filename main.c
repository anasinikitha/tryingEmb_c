#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif
/**
 * @file project_main.c
 * @author Prapti Bhajiyawala (praptibhajiyawala312@gmail.com)
 * @brief Activity1 LED is ON only when Heater is ON and Occupancy of Person is Detected
 * @version 0.1
 * @date 2021-04-24
 *
 * @copyright Copyright (c) 2021
 *
 */
#include "project_config.h"

#include "user_utils.h"
#include "activity1.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

int main(void)
{
	/* Initialize Peripherals */
	peripheral_init();

	for(;;)
	{
        if(!(HEATER_OCCUPANCY_PIN & (1<<HEARTER_PIN))  &&  !(HEATER_OCCUPANCY_PIN & (1<<OCCUPANCY_PIN)))
        {
            uint16_t temp;
            change_led_state(LED_ON);
		    delay_ms(LED_ON_TIME);

            temp=ReadADC(0);
            _delay_ms(200);

            USARTWriteData(temp);

            if (0b0000000000000000 <= temp  && temp <= 0b0000000011001000)
            {
                OUTPUT_COMPAIR_REGISTER_0A=51; // 20% PWM
               _delay_ms(200);
            }
            else if (0b0000000011001001 <= temp && temp <= 0b0000000111110100)
            {
                OUTPUT_COMPAIR_REGISTER_0A=102; // 40% PWM
               _delay_ms(200);
            }
            else if (0b0000000111110101 <= temp && temp <= 0b0000001010111100)
            {
                OUTPUT_COMPAIR_REGISTER_0A=179; // 70% PWM
               _delay_ms(200);
            }
            else
            {
                OUTPUT_COMPAIR_REGISTER_0A=243; // 95% PWM
               _delay_ms(200);
            }

        }
        else
        {
            change_led_state(LED_OFF);
		    delay_ms(LED_OFF_TIME);
        }

	}
	return 0;
}
