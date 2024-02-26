/*
 ============================================================================
 Name        : oneBitcount.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int getCountOf1sBitFast(int number){

	int count;
	while(number & number-1){
		count++;
		number&=number-1;
	}
	return count+1;
}
//valid  only for positive numbers
int getCountOf1sBit(int number) {

	int count = 0;
	while (number) {
		if (number & 1) {
			count++;
		}
		number >>= 1;

	}

	return count;
}
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	int num=-2;
	printf("count of 1's bit=%d",getCountOf1sBitFast(num));
	return EXIT_SUCCESS;
}
