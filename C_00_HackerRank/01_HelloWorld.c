/*
 * 01_HelloWorld.c
 *
 *  Created on: Jan 18, 2022
 *      Author: anurag
 */

#include <stdio.h>

int main(){

	char str[100];
	scanf("%[^\n]%*c",str);
	printf("Hello, World!\n");
	printf("%s",str);
}


