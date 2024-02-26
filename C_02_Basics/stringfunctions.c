/*
 ============================================================================
 Name        : example6.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


int _strlen(char *string){

char *ptr=string;
while(*ptr++) ;

	return ptr-string-1;
}

strcpy(char *target,char *source){

	while(*target++=*source++);
}


int _strcmp(char *string1,char *string2){

	for(;*string1==*string2;string1++,string2++){
		if(!(*string1)){
			return 0;
		}
	}


	return *string1-*string2;
}
int main(void) {

char string[20]="banu";
char source[20]="anu";
//
//	printf("%d\n",_strlen(string));

   /* strcpy(string,source);
    printf("%s\n",string);

    printf("%d\n",_strcmp(string,source));*/

	printf("value=%d\n",'\0');
	return EXIT_SUCCESS;
}
