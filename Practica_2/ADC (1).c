/*
 * ADC.c
 *
 *  Created on: 24 jun. 2021
 *      Author: Personal
 */

#include "MKL25Z4.h"
#include<stdio.h>
#include "adc.h"
//**************************************************
//				ADC DRIVERS
//**************************************************

void ADC_Init10b(void)
{
	SIM->SCGC6 = 0x8000000; //Activar reloj del ADC

	SIM->SCGC5 = 0x3E00;	//Inicializar reloj del puerto B

	PORTB->PCR[0] |= PORT_PCR_MUX(0); // Entrada analogica B0

	//PORTB_PCR0 |= PORT_PCR_MUX(0);		//Select alternate function as ADC-CH8

	/*10 bit conversion, Prescalar of 8, long sample time*/
	ADC0->CFG1 = 0x70; //1111000      0x70 = 8bits
	//ADC0_CFG1 |= (ADC_CFG1_MODE(0X2) | ADC_CFG1_ADIV(0X3)|ADC_CFG1_ADLSMP(0X01));
	ADC0->CFG1 |= (ADC_CFG1_ADLPC(1)); //Modo de baja potencia
	//ADC0_CFG2 |= ADC_CFG1_ADLSTS(0X0);
	ADC0->SC1[0] = ADC_SC1_ADCH(31); //Desactivar todos los canales
	//ADC0_SC1A  = ADC_SC1_ADCH(31); //Disable the module
}

unsigned short ADC_read10b(unsigned char channelNumber)
{
	unsigned short I;
	//canal 8
	while(1){
	ADC0->SC1[0] = channelNumber & ADC_SC1_ADCH_MASK;
	//ADC0_SC1A = channelNumber & ADC_SC1_ADCH_MASK; 	//Write to SC1A to start conversion
	while(ADC0->SC2 & ADC_SC2_ADACT_MASK);  			//Conversion in progress
	while(!(ADC0->SC1[0] & ADC_SC1_COCO_MASK));			//wait till conversion is complete
	I = ADC0->R[0];
	return ADC0->R[0]; //return the ADC temperatur value
	}
}
