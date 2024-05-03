/*
 ============================================================================
 Name        : Basics6_ImplementYourOwnSizeOf.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MySizeofF(x)  (char *)(&x+1)- (char *)(&x)
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	long int x;

	printf("%d",MySizeofF(x));
	return EXIT_SUCCESS;
}
