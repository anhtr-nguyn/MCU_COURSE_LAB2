/*
 * matrx_leld.c
 *
 *  Created on: Oct 5, 2023
 *      Author: TrongAnh
 */
#include "matrix_led.h"
#include "main.h"
const int  MAX_LED_MATRIX = 8;
int index_led_matrix = 0;
// edit the column in order to present the letter A
uint8_t matrix_buffer[8] = {0b00000000,
							0b00111111,
							0b01111111,
							0b11001100,
							0b11001100,
							0b01111111,
							0b00111111,
							0b00000000};
void updateColM(int index){
	switch (index){
	case 0:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 1);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 1);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 1);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 3:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 1);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 4:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 1);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 5:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 1);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 6:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 1);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 0);
		break;
	case 7:
		HAL_GPIO_WritePin(ENM0_GPIO_Port, ENM0_Pin, 0);
		HAL_GPIO_WritePin(ENM1_GPIO_Port, ENM1_Pin, 0);
		HAL_GPIO_WritePin(ENM2_GPIO_Port, ENM2_Pin, 0);
		HAL_GPIO_WritePin(ENM3_GPIO_Port, ENM3_Pin, 0);
		HAL_GPIO_WritePin(ENM4_GPIO_Port, ENM4_Pin, 0);
		HAL_GPIO_WritePin(ENM5_GPIO_Port, ENM5_Pin, 0);
		HAL_GPIO_WritePin(ENM6_GPIO_Port, ENM6_Pin, 0);
		HAL_GPIO_WritePin(ENM7_GPIO_Port, ENM7_Pin, 1);
		break;
	default:
		break;

	}
}

// Function to present the value of each row: each bit is present for the value
void updateLEDBuffer(int index){
	if (index >= 0 && index <= MAX_LED_MATRIX){
		HAL_GPIO_WritePin(ROW0_GPIO_Port, ROW0_Pin, (matrix_buffer[index] >> 7) & 0x01);
		HAL_GPIO_WritePin(ROW1_GPIO_Port, ROW1_Pin, (matrix_buffer[index] >> 6) & 0x01);
		HAL_GPIO_WritePin(ROW2_GPIO_Port, ROW2_Pin, (matrix_buffer[index] >> 5) & 0x01);
		HAL_GPIO_WritePin(ROW3_GPIO_Port, ROW3_Pin, (matrix_buffer[index] >> 4) & 0x01);
		HAL_GPIO_WritePin(ROW4_GPIO_Port, ROW4_Pin, (matrix_buffer[index] >> 3) & 0x01);
		HAL_GPIO_WritePin(ROW5_GPIO_Port, ROW5_Pin, (matrix_buffer[index] >> 2) & 0x01);
		HAL_GPIO_WritePin(ROW6_GPIO_Port, ROW6_Pin, (matrix_buffer[index] >> 1) & 0x01);
		HAL_GPIO_WritePin(ROW7_GPIO_Port, ROW7_Pin, (matrix_buffer[index] >> 0) & 0x01);
	}
}
