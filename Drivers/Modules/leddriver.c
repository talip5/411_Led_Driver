/*
 * leddriver.c
 *
 *  Created on: Aug 29, 2024
 *      Author: ataha
 */
#include "stm32f4xx_hal.h"

void leddriver_init(void)
{
	RCC->AHB1ENR |= (1 << 3);
	GPIOD->MODER |= (1 << 24);
	GPIOD->MODER &= ~(1 << 25);

	GPIOD->OTYPER &= ~(1 << 12);

	GPIOD->OSPEEDR |= (1 << 24);
	GPIOD->OSPEEDR |= (1 << 25);
}

void leddriver_on(void)
{
	GPIOD->ODR |= (1 << 12);
}
void leddriver_off(void)
{
	GPIOD->ODR &= ~(1 << 12);
}
