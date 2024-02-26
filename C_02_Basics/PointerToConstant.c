/*
 ============================================================================
 Name        : ConstantPointer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i=10;
	int j=90;

    const int *ptr=&i;


    // *ptr=0;  value can't be changed, as ptr is pointer to constant

    printf("%d",*ptr);

	return EXIT_SUCCESS;
}
