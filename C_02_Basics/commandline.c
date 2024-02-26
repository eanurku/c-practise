/*
 ============================================================================
 Name        : example7.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc,char *argv[]) {

char character;
	while(--argc && *(*++argv) =='-'){

		//printf("%s%s",*argv,argc!=1?" ":"");

		while(character=*(++*argv)){

			printf("%c,",character);
		}

		printf("\n");
	}
	return EXIT_SUCCESS;
}
