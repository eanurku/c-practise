/*
 ============================================================================
 Name        : C_02_CopyInputToOutput.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style

 using getchar(),putchar() function

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int c;
	while((c=getchar())!=EOF){
		putchar(c);
	}
	return EXIT_SUCCESS;
}
