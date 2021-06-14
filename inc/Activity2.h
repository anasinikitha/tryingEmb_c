#ifndef __ACTIVITY2_H__
#define __ACTIVITY2_H__
/**
 * @file activity2.h
 * @author Anasi Nikitha(anasinikitha3@gmail.com)
 * @brief
 * @version 0.1
 * @date 2021-06-12
 *
 * @copyright Copyright (c) 2021
 *
 */


/**
 * Include files
 */
#include <avr/io.h>
/**
 * @brief Function for reading the value from ADC channel
 *
 * @param ch
 * @return uint16_t
 */
uint16_t ReadADC(uint8_t ch);
/**
 * @brief Function for initalizing the ADC 
 *
 */
void InitADC();


#endif
