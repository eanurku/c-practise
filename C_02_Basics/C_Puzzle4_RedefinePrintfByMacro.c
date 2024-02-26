/*
 ============================================================================
 Name        : C_Puzzle4_RedefinePrintfByMacro.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

fun(){

#define printf(x,y) printf(x,10)


}
int main(void) {


	int i=10;
	fun();
	i=20;
	for(int a=0;a<10;a++)
	printf("%d,",i);


   #undef printf(x,y)

	printf("\n%d",i);
	return EXIT_SUCCESS;
}
