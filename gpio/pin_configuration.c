
#include <stdio.h>
#include "Arduino.h"
#include "MKL25Z4.h"



/*
void Pin_Mode(int port,int pin,int estate)
{
	 SIM->SCGC5 |=SCGC5_PORT(port);
	 PORT(port)->PCR[pin]=MUX_ALT(Alternative1);
	 if(estate==1){GPIO(port)->PDDR|=0x01<<pin;}
	 else {GPIO(port)->PDDR &= ~(0x01<<pin);}
}

void Digital_Write(int port,int pin,int on)
{
    if(on==1){GPIO(port)->PDOR|=0x01<<pin;}
    else{GPIO(port)->PDOR &=~(0x01<<pin);}
}

int Read_Input(int port, int pin)
{
   return ((GPIO(port)->PDIR)>>pin)&0x1;
}




*/
void D0(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[1]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<1;}
	else {GPIO(A)->PDDR &= ~(0x01<<1);}
}

void D1(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[2]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<2;}
	else {GPIO(A)->PDDR &= ~(0x01<<2);}
}

void D2(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(D);
	PORT(D)->PCR[4]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(D)->PDDR|=0x01<<4;}
	else {GPIO(D)->PDDR &= ~(0x01<<4);}
}

void D3(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[12]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<12;}
	else {GPIO(A)->PDDR &= ~(0x01<<12);}
}

void D4(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[4]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<4;}
	else {GPIO(A)->PDDR &= ~(0x01<<4);}
}

void D5(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[5]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<5;}
	else {GPIO(A)->PDDR &= ~(0x01<<5);}
}

void D6(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[8]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<8;}
	else {GPIO(C)->PDDR &= ~(0x01<<8);}
}

void D7(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[9]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<9;}
	else {GPIO(C)->PDDR &= ~(0x01<<9);}
}

void D8(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[13]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<13;}
	else {GPIO(A)->PDDR &= ~(0x01<<13);}
}

void D9(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(D);
	PORT(D)->PCR[0]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(D)->PDDR|=0x01<<0;}
	else {GPIO(D)->PDDR &= ~(0x01<<0);}
}

void D10(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(D);
	PORT(D)->PCR[2]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(D)->PDDR|=0x01<<2;}
	else {GPIO(D)->PDDR &= ~(0x01<<2);}
}

void D11(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(D);
	PORT(D)->PCR[3]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(D)->PDDR|=0x01<<3;}
	else {GPIO(D)->PDDR &= ~(0x01<<3);}
}

void D12(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[0]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<0;}
	else {GPIO(E)->PDDR &= ~(0x01<<0);}
}

void D13(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[1]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<1;}
	else {GPIO(E)->PDDR &= ~(0x01<<1);}
}

void D14(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[7]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<7;}
	else {GPIO(C)->PDDR &= ~(0x01<<7);}
}

void D15(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[3]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<3;}
	else {GPIO(C)->PDDR &= ~(0x01<<3);}
}

void D16(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[4]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<4;}
	else {GPIO(C)->PDDR &= ~(0x01<<4);}
}

void D17(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[5]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<5;}
	else {GPIO(C)->PDDR &= ~(0x01<<5);}
}

void D18(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[6]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<6;}
	else {GPIO(C)->PDDR &= ~(0x01<<6);}
}

void D19(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[10]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<10;}
	else {GPIO(C)->PDDR &= ~(0x01<<10);}
}

void D20(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[11]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<11;}
	else {GPIO(C)->PDDR &= ~(0x01<<11);}
}

void D21(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[12]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<12;}
	else {GPIO(C)->PDDR &= ~(0x01<<12);}
}

void D22(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[13]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<13;}
	else {GPIO(C)->PDDR &= ~(0x01<<13);}
}

void D23(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[16]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<16;}
	else {GPIO(C)->PDDR &= ~(0x01<<16);}
}

void D24(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(C);
	PORT(C)->PCR[17]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(C)->PDDR|=0x01<<17;}
	else {GPIO(C)->PDDR &= ~(0x01<<17);}
}

void D25(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[16]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<16;}
	else {GPIO(A)->PDDR &= ~(0x01<<16);}
}

void D26(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[17]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<17;}
	else {GPIO(A)->PDDR &= ~(0x01<<17);}
}

void D27(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[31]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<31;}
	else {GPIO(E)->PDDR &= ~(0x01<<31);}
}

void D28(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(D);
	PORT(D)->PCR[7]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(D)->PDDR|=0x01<<7;}
	else {GPIO(D)->PDDR &= ~(0x01<<7);}
}

void D29(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[5]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<5;}
	else {GPIO(E)->PDDR &= ~(0x01<<5);}
}

void D30(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[4]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<4;}
	else {GPIO(E)->PDDR &= ~(0x01<<4);}
}

void D31(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(E);
	PORT(E)->PCR[3]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(E)->PDDR|=0x01<<3;}
	else {GPIO(E)->PDDR &= ~(0x01<<3);}
}

void D32(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(B);
	PORT(B)->PCR[11]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(B)->PDDR|=0x01<<11;}
	else {GPIO(B)->PDDR &= ~(0x01<<11);}
}

void D33(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(B);
	PORT(B)->PCR[10]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(B)->PDDR|=0x01<<10;}
	else {GPIO(B)->PDDR &= ~(0x01<<10);}
}

void D34(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(B);
	PORT(B)->PCR[9]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(B)->PDDR|=0x01<<9;}
	else {GPIO(B)->PDDR &= ~(0x01<<9);}
}

void D35(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(B);
	PORT(B)->PCR[8]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(B)->PDDR|=0x01<<8;}
	else {GPIO(B)->PDDR &= ~(0x01<<8);}
}

void D36(int estate)
{
	SIM->SCGC5 |=SCGC5_PORT(A);
	PORT(A)->PCR[20]=MUX_ALT(Alternative1);
	if(estate==1){GPIO(A)->PDDR|=0x01<<20;}
	else {GPIO(A)->PDDR &= ~(0x01<<20);}
}



void D0_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<1;}
else{GPIO(A)->PDOR &=~(0x01<<1);}}

void D1_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<2;}
else{GPIO(A)->PDOR &=~(0x01<<2);}}

void D2_R(int on)
{if(on==1){GPIO(D)->PDOR|=0x01<<4;}
else{GPIO(D)->PDOR &=~(0x01<<4);}}

void D3_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<12;}
else{GPIO(A)->PDOR &=~(0x01<<12);}}

void D4_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<4;}
else{GPIO(A)->PDOR &=~(0x01<<4);}}

void D5_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<5;}
else{GPIO(A)->PDOR &=~(0x01<<5);}}

void D6_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<8;}
else{GPIO(C)->PDOR &=~(0x01<<8);}}

void D7_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<9;}
else{GPIO(C)->PDOR &=~(0x01<<9);}}

void D8_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<13;}
else{GPIO(A)->PDOR &=~(0x01<<13);}}

void D9_R(int on)
{if(on==1){GPIO(D)->PDOR|=0x01<<0;}
else{GPIO(D)->PDOR &=~(0x01<<0);}}

void D10_R(int on)
{if(on==1){GPIO(D)->PDOR|=0x01<<2;}
else{GPIO(D)->PDOR &=~(0x01<<2);}}

void D11_R(int on)
{if(on==1){GPIO(D)->PDOR|=0x01<<3;}
else{GPIO(D)->PDOR &=~(0x01<<3);}}

void D12_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<0;}
else{GPIO(E)->PDOR &=~(0x01<<0);}}

void D13_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<1;}
else{GPIO(E)->PDOR &=~(0x01<<1);}}

void D14_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<7;}
else{GPIO(C)->PDOR &=~(0x01<<7);}}

void D15_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<3;}
else{GPIO(C)->PDOR &=~(0x01<<3);}}

void D16_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<4;}
else{GPIO(C)->PDOR &=~(0x01<<4);}}

void D17_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<5;}
else{GPIO(C)->PDOR &=~(0x01<<5);}}

void D18_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<6;}
else{GPIO(C)->PDOR &=~(0x01<<6);}}

void D19_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<10;}
else{GPIO(C)->PDOR &=~(0x01<<10);}}

void D20_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<11;}
else{GPIO(C)->PDOR &=~(0x01<<11);}}

void D21_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<12;}
else{GPIO(C)->PDOR &=~(0x01<<12);}}

void D22_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<13;}
else{GPIO(C)->PDOR &=~(0x01<<13);}}

void D23_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<16;}
else{GPIO(C)->PDOR &=~(0x01<<16);}}

void D24_R(int on)
{if(on==1){GPIO(C)->PDOR|=0x01<<17;}
else{GPIO(C)->PDOR &=~(0x01<<17);}}

void D25_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<16;}
else{GPIO(A)->PDOR &=~(0x01<<16);}}

void D26_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<17;}
else{GPIO(A)->PDOR &=~(0x01<<17);}}

void D27_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<31;}
else{GPIO(E)->PDOR &=~(0x01<<31);}}

void D28_R(int on)
{if(on==1){GPIO(D)->PDOR|=0x01<<7;}
else{GPIO(D)->PDOR &=~(0x01<<7);}}

void D29_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<5;}
else{GPIO(E)->PDOR &=~(0x01<<5);}}

void D30_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<4;}
else{GPIO(E)->PDOR &=~(0x01<<4);}}

void D31_R(int on)
{if(on==1){GPIO(E)->PDOR|=0x01<<3;}
else{GPIO(E)->PDOR &=~(0x01<<3);}}

void D32_R(int on)
{if(on==1){GPIO(B)->PDOR|=0x01<<11;}
else{GPIO(B)->PDOR &=~(0x01<<11);}}

void D33_R(int on)
{if(on==1){GPIO(B)->PDOR|=0x01<<10;}
else{GPIO(B)->PDOR &=~(0x01<<10);}}

void D34_R(int on)
{if(on==1){GPIO(B)->PDOR|=0x01<<9;}
else{GPIO(B)->PDOR &=~(0x01<<9);}}

void D35_R(int on)
{if(on==1){GPIO(B)->PDOR|=0x01<<8;}
else{GPIO(B)->PDOR &=~(0x01<<8);}}

void D36_R(int on)
{if(on==1){GPIO(A)->PDOR|=0x01<<20;}
else{GPIO(A)->PDOR &=~(0x01<<20);}}



int D0_W(int on)
{return (GPIO(A)->PDIR>>1)&0x1;}

int D1_W(int on)
{return(GPIO(A)->PDIR>>2)&0x01;}

int D2_W(int on)
{return(GPIO(D)->PDIR>>4)&0x01;}

int D3_W(int on)
{return (GPIO(A)->PDIR>>12)&0x01;}

int D4_W(int on)
{return (GPIO(A)->PDIR>>4)&0x01;}

int D5_W(int on)
{return (GPIO(A)->PDIR>>5)&0x01;}

int D6_W(int on)
{return (GPIO(C)->PDIR>>8)&0x01;}

int D7_W(int on)
{return(GPIO(C)->PDIR>>9)&0x01;}

int D8_W(int on)
{return (GPIO(A)->PDIR>>13)&0x01;}

int D9_W(int on)
{return (GPIO(D)->PDIR>>0)&0x01;}

int D10_W(int on)
{return (GPIO(D)->PDIR>>2)&0x01;}

int D11_W(int on)
{return (GPIO(D)->PDIR>>3)&0x01;}

int D12_W(int on)
{return (GPIO(E)->PDIR>>0)&0x01;}

int D13_W(int on)
{return (GPIO(E)->PDIR>>1)&0x01;}

int D14_W(int on)
{return (GPIO(C)->PDIR>>7)&0x01;}

int D15_W(int on)
{return (GPIO(C)->PDIR>>3)&0x01;}

int D16_W(int on)
{return (GPIO(C)->PDIR>>4)&0x01;}

int D17_W(int on)
{return (GPIO(C)->PDIR>>5)&0x01;}

int D18_W(int on)
{return (GPIO(C)->PDIR>>6)&0x01;}

int D19_W(int on)
{return (GPIO(C)->PDIR>>10)&0x01;}

int D20_W(int on)
{return (GPIO(C)->PDIR>>11)&0x01;}

int D21_W(int on)
{return (GPIO(C)->PDIR>>12)&0x01;}

int D22_W(int on)
{return (GPIO(C)->PDIR>>13)&0x01;}

int D23_W(int on)
{return (GPIO(C)->PDIR>>16)&0x01;}

int D24_W(int on)
{return(GPIO(C)->PDIR>>17)&0x01;}

int D25_W(int on)
{return (GPIO(A)->PDIR>>16)&0x01;}

int D26_W(int on)
{return (GPIO(A)->PDIR>>17)&0x01;}

int D27_W(int on)
{return (GPIO(E)->PDIR>>31)&0x01;}

int D28_W(int on)
{return (GPIO(D)->PDIR>>7)&0x01;}

int D29_W(int on)
{return (GPIO(E)->PDIR>>5)&0x01;}

int D30_W(int on)
{return (GPIO(E)->PDIR>>4)&0x01;}

int D31_W(int on)
{return(GPIO(E)->PDIR>>3)&0x01;}

int D32_W(int on)
{return (GPIO(B)->PDIR>>11)&0x01;}

int D33_W(int on)
{return (GPIO(B)->PDIR>>10)&0x01;}


int D34_W(int on)
{return (GPIO(B)->PDIR>>9)&0x01;}


int D35_W(int on)
{return (GPIO(B)->PDIR>>8)&0x01;}


int D36_W(int on)
{return (GPIO(A)->PDIR>>20)&0x01;}


void Pin_Mode(int pin,int estate)
{
	void(*p[])(int)={D0,D1,D2,D3,D4,D5,D6,D7,D8,D9,D10,D11,D12,D13,D14,D15,D16,D17,D18,D19,D20,D21,D22,D23,D24,D25,D26,D27,D28,D29,D30,D31,D32,D33,D34,D35,D36};
	(*p[pin])(estate);
}


void Digital_Write(int pin,int on)
{
	void(*p[])(int)={D0_R,D1_R,D2_R,D3_R,D4_R,D5_R,D6_R,D7_R,D8_R,D9_R,D10_R,D11_R,D12_R,D13_R,D14_R,D15_R,D16_R,D17_R,D18_R,D19_R,D20_R,D21_R,D22_R,D23_R,D24_R,D25_R,D26_R,D27_R,D28_R,D29_R,D30_R,D31_R,D32_R,D33_R,D34_R,D35_R,D36_R};
		(*p[pin])(on);
}



int Read_Input(int pin)
{
	int(*p[])()={D0_W,D1_W,D2_W,D3_W,D4_W,D5_W,D6_W,D7_W,D8_W,D9_W,D10_W,D11_W,D12_W,D13_W,D14_W,D15_W,D16_W,D17_W,D18_W,D19_W,D20_W,D21_W,D22_W,D23_W,D24_W,D25_W,D26_W,D27_W,D28_W,D29_W,D30_W,D31_W,D32_W,D33_W,D34_W,D35_W,D36_W};
		return (*p[pin])();
}



