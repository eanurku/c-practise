/*
 ============================================================================
 Name        : example10.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i;
	int *ptr=realloc(NULL,4*sizeof(int));
	int *newPtr;

	for(i=0;i<4;i++){
	      ptr[i]=11;
	}

/*	for(i=0;i<4;i++){
       printf("%d\n",ptr[i]);
	}*/

	newPtr=realloc(ptr,6*sizeof(int));

	for(i=0;i<6;i++){
       printf("%d\n",newPtr[i]);
	}

	printf("\nptr=%u,newPtr=%u",ptr,newPtr);

	return EXIT_SUCCESS;
}
