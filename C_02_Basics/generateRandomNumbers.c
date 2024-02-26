/*
 ============================================================================
 Name        : generateRandomNumbers.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	//randome numbers
		srand(time(NULL));
		for(int i=0;i<5;i++){

			printf("%d,",random()%100);
		}

	return EXIT_SUCCESS;
}
