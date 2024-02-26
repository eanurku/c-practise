/*
 ============================================================================
 Name        : StringTokenizer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include<string.h>

//include string.h header else you get segmentation fault error
int main(void) {
	FILE* input=fopen("/home/anurag/Desktop/CPROGG/DataStructure-geeksforgeeks_workspace/PracticeC/src/inputNames.txt","r");
	FILE* out =fopen("/home/anurag/Desktop/CPROGG/DataStructure-geeksforgeeks_workspace/PracticeC/src/out.txt","w");

	int c;
	int charCount=0;
	int separator=0;
	char *token;
	char *delim=",\"";


	while((c=fgetc(input))!=EOF){

		charCount++;
		if(c==','){
			separator++;
		}

	}

	printf("%d,%d",charCount,separator);
	int totalWords=separator+1;

	char* string=(char *)malloc(sizeof(char)* charCount);

	rewind(input);
	fscanf(input,"%s",string);



	token=strtok(string,delim);
	printf("\n%s",token);

	return EXIT_SUCCESS;
}
