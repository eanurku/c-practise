/*
 ============================================================================
 Name        : C_01_HelloWorld.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	printf("!!!Hello World!!!");
	printf("hello");

	char *str="1234 rrknneg egkje eg";
	char *endptr;

	int i=strtol(str,&endptr,10);
	printf("\ni=%d",i);
	printf("\n%s",endptr);



	return EXIT_SUCCESS;
}
