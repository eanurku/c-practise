/*
 ============================================================================
 Name        : SumWithoutPlusOperator.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum(int a,int b){
	printf("%*c%*c",a,'x',b,'y');
	return printf("%*c%*c",a,' ',b,' ');

}
int main(void) {


	printf("sum=%d",sum(2,3));
	return EXIT_SUCCESS;
}
