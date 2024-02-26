/*
 ============================================================================
 Name        : LittleAndBigEndianMachineType.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {



	int i=1;
	char *c=(int *)&i;
	printf("\n%d",*c);
	if(*c)
	  printf("\nLittle Endian");
	else
		 printf("\nBig Endian");

	return EXIT_SUCCESS;
}
