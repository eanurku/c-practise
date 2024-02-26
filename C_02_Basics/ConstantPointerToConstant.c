/*
 ============================================================================
 Name        : ConstantPointerToConstant.c
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
    const int *const p=&i;
    // above declaration is same as this one
    //int const* const p=&i;

/*    *p=100;  //both operation not allowed as per pointer declaration
    p=p+1;*/


    printf("%d",*p);
	return EXIT_SUCCESS;
}
