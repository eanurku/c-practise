/*
 ============================================================================
 Name        : DanglingPointer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int *p=malloc(sizeof(int));
	*p=4;
	printf("%u\n",p);

	free(p);
	printf("%u\n",p);
	p=NULL;
	printf("%u\n",p);
	printf("%u\n",&p);

	return EXIT_SUCCESS;
}
