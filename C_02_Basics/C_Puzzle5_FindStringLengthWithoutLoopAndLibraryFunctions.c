/*
 ============================================================================
 Name        : C_Puzzle5_FindStringLengthWithoutLoopAndLibraryFunctions.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void  lengthOfString(int n,char * string){

	if(*string=='\0'){
		printf("%d",n);
		return;
	}
	lengthOfString(n+1,string+1);
}
int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	char string[20]="anurag";

	lengthOfString(0,string);
	return EXIT_SUCCESS;
}
