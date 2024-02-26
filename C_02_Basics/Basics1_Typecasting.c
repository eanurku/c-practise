/*
 ============================================================================
 Name        : Basics1_Typecasting.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	int a=67;
	int *ptr=&a;

	int **ptrToPtr=&ptr;

	int *otherPtr=*ptrToPtr;

	int *typecatedPtr1=(int *)ptr;
	int *typecatedPtr2=(int *)ptrToPtr;


	char c=a;

	printf("address of a=%30u\n",&a);
	printf("ptr pointing to address=%30u\n",ptr);
	printf("address of ptr=%30u\n",&ptr);
	printf("ptrToPtr pointing to address=%30u\n",ptrToPtr);
	printf("address of ptrToPtr=%30u\n",&ptrToPtr);
	printf("otherPtr pointing to address=%30u\n",otherPtr);

	printf("otherPtr pointing to address=%30u\n",typecatedPtr1);
	printf("otherPtr pointing to address=%30u\n",*typecatedPtr2);
	//printf("otherPtr pointing to address=%30u\n",**typecatedPtr2);//cant use typecasted pointer to dereference a data

	return EXIT_SUCCESS;
}
