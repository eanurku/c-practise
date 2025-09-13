/*
 ============================================================================
 Name        : C_05_LongestInputLine.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define MAX_LENGTH 1000

int getLine(char line[],int maxLength){

	int c;
	int i=0;
	for( i=0;i<maxLength-1 && ((c=getchar())!=EOF && c!='\n');i++){
		line[i]=c;
	}
	if(c=='\n'){
		line[i++]=c;
	}

	line[i]='\0';
	return i;
}

int main(void) {

	char line[MAX_LENGTH];
	char longestLine[MAX_LENGTH];
	int max=-1;
	int length;

	while((length=getLine(line,MAX_LENGTH))>0){
		if(length>max){
			max=length;
			strcpy(longestLine,line);
		}

	}

	printf("%s",longestLine);

	return EXIT_SUCCESS;
}
