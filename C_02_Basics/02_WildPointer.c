/*
 ============================================================================
 Name        : Basics2_wildPointer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *ptr; //this is wild pointer pointing to unkown address;


	printf("%u\n",ptr);
	//printf("%d",*ptr); //segmentation error

	printf("end of main");
	return EXIT_SUCCESS;
}
