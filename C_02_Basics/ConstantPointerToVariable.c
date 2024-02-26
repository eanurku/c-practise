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
    int j=99;

     int *  const ptr=&i;



      //ptr=&j;  //pointer cannot point to other location as ptr is fix pointer to a variable

    printf("%d",*ptr);

	return EXIT_SUCCESS;
}
