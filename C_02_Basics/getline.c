/*
 ============================================================================
 Name        : example1.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

#define MAXLINESIZE  20


int getLine(char *line){

	int character;
    int lineSize=0;
	while((character=getchar()) !=EOF){

		if(character=='\n' ){
			line[lineSize++]=character;
			break;
		}
		else if(lineSize==MAXLINESIZE-1){
			break;
		}
		else{
			line[lineSize++]=character;
		}

	}
	line[lineSize++]='\0';

	return lineSize-1;  //line size is without null end character
}
int main(void) {

	char *line=(char *)malloc(MAXLINESIZE);
	int lineSize;
	while((lineSize=getLine(line))){

		printf("%s",line);
	}

	return EXIT_SUCCESS;
}
