/*
 * 02_PlayingWithCharacters.c
 *
 *  Created on: Jan 18, 2022
 *      Author: anura
 */


#include <stdio.h>
#include <stdlib.h>//EXIT_SUCCESS,EXIT_FAILURE,malloc()
#include <limits.h>//INT_MAX,INT_MIN
#include <float.h>
#include <ctype.h> //lower(),isDigit(),isspace(),isalnum(),isdigit()
#include <math.h>
#include <string.h> //strlen(),strcmp(),strstr(),strindex()
#include <stddef.h> //size_t ,ptrdiff_t

int main(void) {

	char ch;
	char string[100];
	char line[100];

	scanf("%c",&ch);
	scanf("%s",string);
	scanf("%[^\n]%*c",string);

	printf("%c\n",ch);
	printf("%s\n",string);
	printf("%s\n",line);


	return EXIT_SUCCESS;
}
