/*
 ============================================================================
 Name        : C_04_StringLength.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	char array[] = { 'a', 'n', 'u', 'r', 'a', 'g', '\0' };

	int length1 = strlen(array);
	int length2 = stringLenth(array);

	printf("length1=%d,length2=%d", length1, length2);

	return EXIT_SUCCESS;
}

int stringLenth(char array[]) {

	int length = 0;

	int i = 0;
	while (array[i] != '\0') {
		length++;
		i++;
	}

	return length;
}

