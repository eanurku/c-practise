/*
 ============================================================================
 Name        : Bits_printBitsOfNumber.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void printBitsOfNumber(int num) {

	int mask=1,andMask, i;
	for (i = sizeof(int)*8 - 1; i >= 0; i--) {
		andMask = mask << i;
		if(num & andMask){
			printf("1");
		}else {
			printf("0");
		}
	}
}
int main(void) {
	int num=16;
	printf("\nsizeof int %d\n",sizeof(int));
	printBitsOfNumber(num);

	return EXIT_SUCCESS;
}
