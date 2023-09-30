/*
 * display_7seg.c
 *
 *  Created on: Sep 30, 2023
 *      Author: TrongAnh
 */

#include "main.h"
#include "display_7seg.h"

void display7SEG(int num){
	 switch (num)
	 {
	 case 0:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		 break;
	 case 1:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		 break;
	 case 2:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 3:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 4:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 5:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 6:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 7:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, SET);
		 break;
	 case 8:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 case 9:
		 HAL_GPIO_WritePin(SEG1_A_GPIO_Port, SEG1_A_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_B_GPIO_Port, SEG1_B_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_C_GPIO_Port, SEG1_C_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_D_GPIO_Port, SEG1_D_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_E_GPIO_Port, SEG1_E_Pin, SET);
		 HAL_GPIO_WritePin(SEG1_F_GPIO_Port, SEG1_F_Pin, RESET);
		 HAL_GPIO_WritePin(SEG1_G_GPIO_Port, SEG1_G_Pin, RESET);
		 break;
	 default:
		 break;
	 }
  }

