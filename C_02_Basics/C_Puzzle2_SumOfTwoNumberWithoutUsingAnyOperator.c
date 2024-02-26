/*
 ============================================================================
 Name        : C_Puzzle2_SumOfTwoNumberWithoutUsingAnyOperator.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	puts("!!!Hello World!!!"); /* prints !!!Hello World!!! */

	//solution 1
	int a=2;
	int b=3;

	while(b>0){
		a++;
		b--;
	}
	printf("sum=%d\n",a);

	//solution 2

	int x=2;
	int y=3;

	int sum=printf("%*c%*c",x,' ',y,' ');
	printf("\nsum=%d",sum);
	return EXIT_SUCCESS;
}
