/*
 * serial.c
 *
 *  Created on: Jul 17, 2022
 *      Author: TK
 */

#include "serial.h"

UART_HandleTypeDef *_huart;
DMA_HandleTypeDef  *_hdma_usart_rx;
DMA_HandleTypeDef  *_hdma_usart_tx;

uint8_t buffer[SERIAL_BUFFER_SIZE];

void Serial_Init(UART_HandleTypeDef *huart, DMA_HandleTypeDef *hdma_usart_rx, DMA_HandleTypeDef *hdma_usart_tx) {
  _huart = huart;
  _hdma_usart_rx = hdma_usart_rx;
  _hdma_usart_tx = hdma_usart_tx;
}

void Serial_Start() {
  HAL_UARTEx_ReceiveToIdle_DMA(_huart, buffer, SERIAL_BUFFER_SIZE);
}

uint8_t Serial_IsValidPacket(UART_HandleTypeDef *huart, uint16_t size) {
  return huart == _huart && size == SERIAL_BUFFER_SIZE;
}

void Serial_RXInterruptHandler(UART_HandleTypeDef *huart, uint16_t size) {
  if (Serial_IsValidPacket(huart, size)) {
      // user code here
  }
  HAL_UARTEx_ReceiveToIdle_DMA(_huart, buffer, SERIAL_BUFFER_SIZE);
}

