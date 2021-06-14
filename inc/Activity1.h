#ifndef __ACTIVITY1_H_
#define __ACTIVITY1_H_
/**
 * @file activity1.h
 * @author Anasi Nikitha (anasinikitha3@gmail.com)
 * @brief Activity1 LED is ON only when Occupancy of Person is There and Heater is ON
 * @version 0.1
 * @date 2021-06-12
 *
 * @copyright Copyright (c) 2021
 *
 */

/**
 * Macro Definitions
 */
#define LED_ON 	(0x01)			/**< LED state HIGH */
#define LED_OFF	(0x00)			/**< LED state LOW */

#define LED_ON_TIME     (1000)  /**< LED ON time in milli seconds  */
#define LED_OFF_TIME    (1000)   /**< LED OFF time in milli seconds */

/**
 * Include files
 */
#include <avr/io.h>

/**
 * Function Definitions
 */

/**
 * @brief LED is ON and OFF according to its HIGH and LOW state
 *
 * @param state
 */
void change_led_state(uint8_t state);
/**
 * @brief peripheral Inialization for LED
 *
 */
void peripheral_init(void);


#endif /** __ACTIVITY1_H_ */
