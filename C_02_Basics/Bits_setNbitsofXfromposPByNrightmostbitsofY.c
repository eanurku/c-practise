/*
 ============================================================================
 Name        : Bits_setNbitsofXfromposPByNrightmostbitsofY.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int setbits(int x,int p,int n,int y ){

	return x|((y<<p-1) & (~(~0<<n)<<p-1));
}
int main(void) {


	int x=0,y=15,p=3,n=4;
	printf("number=%d",setbits(x,p,n,y));
	return EXIT_SUCCESS;
}
