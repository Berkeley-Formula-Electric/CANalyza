/*
 * serial.h
 *
 *  Created on: Jul 17, 2022
 *      Author: TK
 */

#ifndef SERIAL_SERIAL_H_
#define SERIAL_SERIAL_H_

#include "stm32f4xx_hal.h"

#define SERIAL_BUFFER_SIZE  11

void Serial_Init(UART_HandleTypeDef *huart, DMA_HandleTypeDef *hdma_usart_rx, DMA_HandleTypeDef *hdma_usart_tx);

void Serial_Start();

uint8_t Serial_IsValidPacket(UART_HandleTypeDef *huart, uint16_t size);

void Serial_RXInterruptHandler(UART_HandleTypeDef *huart, uint16_t size);

#endif /* SERIAL_SERIAL_H_ */
