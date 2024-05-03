/*
 ============================================================================
 Name        : Basics3_Danglingpointer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int *ptr=(int *)malloc(sizeof(int));

	*ptr=12;

	printf("before free: %d\n",*ptr);
	free(ptr);

	printf("after free: %d\n",*ptr);

	ptr=NULL;
	printf("afterfree and assigning NULL:%d\n",*ptr);//segment error

	printf("end of main");
	return EXIT_SUCCESS;
}
