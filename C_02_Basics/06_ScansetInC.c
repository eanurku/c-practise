/*
 ============================================================================
 Name        : Basics6_ScansetInC.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char s1[100];
	char s2[100];

	//read only capital latter from beginning of string string.
//	scanf("%[A-Z]s%*c",s1);
//	printf("%s\n",s1);


	//read only digits from beginning of string
//	scanf("%[0-9]s",s2);
//	printf("%s\n",s2);


	//read chars until A occur in string
//	scanf("%[^A]s",s1);
//	printf("%s",s1);

	//read chars until newline occurs in string
//	scanf("%[^\n]s",s1);
//	printf("%s",s1);

	//read chars of paragraph until + occurs
//	scanf("%[^+]s",s1);
//	printf("%s",s1);

	//read numbers from a string of input

	int num1;
    scanf("%*c%d",&num1);
    printf("%d",);

	//scanf("%[^\n]s",s2);
	//scanf("%[^\n]%*c",s);

	//printf("%s\n",s1);

	//printf("%s\n",s2);
	return EXIT_SUCCESS;
}
