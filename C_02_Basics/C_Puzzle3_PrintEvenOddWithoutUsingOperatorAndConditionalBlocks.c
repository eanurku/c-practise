/*
 ============================================================================
 Name        : C_Puzzle3_PrintEvenOddWithoutUsingOperatorAndConditionalBlocks.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */
	//solution 1
	int num=44;
	(num & 1 && printf("Odd"))||printf("Even");


	//solution 2

	int n=33;
	char array[2][10]={"Even","Odd"};

	printf("\n%s",array[n&1]);
	return EXIT_SUCCESS;
}
