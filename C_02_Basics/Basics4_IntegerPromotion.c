/*
 ============================================================================
 Name        : Basics4_IntegerPromotion.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	signed char a=0Xfb;
	unsigned char b=0Xfb;

	printf("a=%d\n",a);
	printf("b=%d\n",b);
	printf("are same=%d\n",a==b);//a=251 will overflow so its value become -5

	return EXIT_SUCCESS;
}
