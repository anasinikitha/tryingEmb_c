#ifndef __ACTIVITY4_H__
#define __ACTIVITY4_H__
/**
 * @file activity4.h
 * @author Anasi Nikitha (anasinikitha3@gmail.com)
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
 * @brief Function for initalizing the USART
 *
 */
void USARTInit(uint16_t);
/**
 * @brief Function for USART write operation
 *
 */
void USARTWriteData(uint16_t);
/**
 * @brief Function for USART read operation
 *
 * @return uint16_t
 */
//uint16_t USARTReadData();


#endif
