/*
 ============================================================================
 Name        : Bits_getbitsInterval.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int getbits(int x,int p,int n){
	return (x>>p-n)& ~(-1<<n);
}

int main(void) {

	int num=86;
	printf("final number=%d",getbits(num,6,4));
	return EXIT_SUCCESS;
}
