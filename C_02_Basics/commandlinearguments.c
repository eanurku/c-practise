/*
 ============================================================================
 Name        : example5.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {



	printf("ygyug=%d\n",argc);
	while(--argc){

		printf("%c%s",(*++argv)[0],argc!=1?" ":"");

	}

	return EXIT_SUCCESS;
}
