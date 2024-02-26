/*
 ============================================================================
 Name        : example12.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	char *s=malloc(10);
	char t[10]="anurag";



//these memory function are good for char array related operations
	printf("memset=%s\n",memset(s,'t',4));
	printf("memchr=%c\n",*(char *)(memchr(t,'n',strlen(t))));
	printf("memcopy=%s\n",memcpy(s,t,strlen(t)));
	printf("memove=%s\n",memmove(s,s+4,2));
	printf("memcmp=%d",memcmp(s,t,5));

	printf("waht??<");


	return EXIT_SUCCESS;
}
