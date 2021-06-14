#ifndef __AVR_ATmega328__
#define __AVR_ATmega328__
#endif

#include "activity1.h"
#include "project_config.h"
#include "activity2.h"
#include "activity3.h"
#include "activity4.h"

void USARTWriteData(uint16_t data)
{
    //wait until transmitter is ready
    while(!(USART_CONTROL_STATUS_REG_0A & (1<<USART_DATA_REG_EMPTY)))
    {
        //do nothing
    }
    //write data to USART buffer
    USART_DATA_REG0=data;
}

void USARTInit(uint16_t ubrr_value)
{
    //set Baud rate
    USART_BAUDRATE_REG_L=ubrr_value;
    USART_BAUDRATE_REG_H=(ubrr_value>>8)&(0x00ff);
    USART_CONTROL_STATUS_REG_0B=(1<<RECEIVER_COMPLETE_INTERUPT_ENABLE)|(1<<TRANSMITTER_COMPLETE_INTERUPT_ENABLE)|(1<<TRANSMITTER_ENABLE)|(1<<RECEIVER_ENABLE);
    USART_CONTROL_STATUS_REG_0C=(1<<USART_MODE_SELECT)|(1<<USART_DATA_CHAR_SIZE_BIT1)|(1<<USART_DATA_CHAR_SIZE_BIT0);

}

// uint16_t USARTReadData()
// {
//     //WAIT UNTIL DATA IS AVAILABLE
//     while(!(USART_CONTROL_STATUS_REG_0A & (1<<USART_RECEIVE_COMPLETE)))
//     {
//         //do nothing
//     }
//     return USART_DATA_REG0;
// }
