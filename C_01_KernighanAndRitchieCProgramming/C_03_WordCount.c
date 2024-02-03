/*
 ============================================================================
 Name        : C_03_WordCount.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define OUT 0
#define IN 1

int main(void) {

	int wordCount = 0;
	int character;
	int state = OUT;

	while ((character = getchar()) != EOF) {

		if (character == '\n' || character == ' ' || character == '\t') {
			state = OUT;
		} else if (state == OUT) {
			wordCount++;
			state = IN;
		}
	}

	printf("word count=%d", wordCount);
	return EXIT_SUCCESS;
}
