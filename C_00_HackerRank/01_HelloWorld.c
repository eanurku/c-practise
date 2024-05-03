/*
 * 01_HelloWorld.c
 *
 *  Created on: Jan 18, 2022
 *      Author: anurag
 */

#include <stdio.h>

int main(){

	char str[100]={'\0'};
	scanf("%*[^\n]s%*c",str);
	printf("Hello, World!\n");
	printf("%s",str);
}


