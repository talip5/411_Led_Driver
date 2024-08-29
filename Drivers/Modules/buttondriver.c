/*
 * buttondriver.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ataha
 */

#include "stm32f4xx_hal.h"

void buttondriver_init()
{
	RCC->AHB1ENR |= (1 << 0);
	GPIOA->MODER &= ~(1 << 0);
	GPIOA->MODER &= ~(1 << 1);
}

int buttondriver_get_state() {
	if (GPIOA->IDR & (1 << 0))

	{
		return 1;
	}

	else
	{
		return 0;
	}
}
