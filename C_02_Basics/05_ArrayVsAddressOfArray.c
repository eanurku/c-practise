/*
 ============================================================================
 Name        : Basics5_ArrayPointer.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {


	int array[10];

	printf("%u\n",&array[0]);
	printf("%u\n",array);
	printf("%u\n",&array);

	printf("%u,%u\n",array,array+1);
	printf("%u,%u\n",&array,&array+1);//&array is pointer to whole array of size 10


	printf("\n");
	int array2d[5][10];

	printf("%u\n",&array2d[0][0]);
	printf("%u\n",array2d);
	printf("%u\n",&array2d);
	printf("\n");

	printf("%u\n",array2d[0]);//array2d[0] pointer to first array
	printf("%u\n",&array2d[1]);
	printf("%u\n",&array2d[2]);
	printf("\n");

	printf("%u,%u\n",array2d,array2d+1);//array2d is pointer to first array,array2d+1 is pointer to second array and so on
	printf("%u,%u\n",&array2d,&array2d+1);//&array2d is pointer to array of 5 row and each row of 10 columns/2d block



	return 0;
}
