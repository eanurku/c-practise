/*
 ============================================================================
 Name        : Passing2DArrayToFunction.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define ROWS 100
#define COLS 100

void printarray2d1(int array2d[ROWS][COLS],int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	}
}
void printarray2d2(int array2d[][COLS],int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	}
}

//TO DO not working as2d array is stored as column major order instead of
//row major order
void printarray2d3(int* array2d,int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",*(array2d+i*cols+j));
		}
		printf("\n");
	}
}


int main(void) {


	int rows;
	int cols;


	int array2d[ROWS][COLS];

	scanf("%d",&rows);
	scanf("%d",&cols);

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			scanf("%d",&array2d[i][j]);
		}

	}

//	printarray2d1(array2d,rows,cols);
//	printarray2d2(array2d,rows,cols);

	//verify row major or column major order
//	int *ptr=&array2d[0][0];
//	printf("\n");
//
//	for(int i=0;i<rows;i++){
//		for(int j=0;j<cols;j++){
//			printf("%u ",&array2d[i][j]);
//		}
//	}
//	printf("\n");
//	for(int i=0;i<rows*cols;i++){
//		printf("%u ",ptr);
//		ptr++;
//
//	}

//using pointer to array to print 2d array

	int (*ptrToArray)[cols];

	for(int i=0;i<rows;i++){
		ptrToArray=array2d[i];//is same as ptrToArray=&array2d[i][0];
		int *ptr=(int *)ptrToArray;

		for(int j=0;j<cols;j++){
			printf("%d ",*ptr);
			ptr++;
		}
		printf("\n");

	}





	return EXIT_SUCCESS;
}
