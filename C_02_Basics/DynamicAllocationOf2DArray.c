/*
 ============================================================================
 Name        : DynamicAllocationOf2DArray.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void printArray2dSinglePointer(int* array2d,int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",*(array2d+i*cols+j));
		}
		printf("\n");
	}
}

void printArray2dByArrayOfPointers(int* array2d[],int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	}
}

void printArray2dByDynamicArrayOfPointers(int** array2d,int rows,int cols){

	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			printf("%d ",array2d[i][j]);
		}
		printf("\n");
	}
}
int main(void) {
	//dynamic allocation of 2d array
	//using single pointer
	//	int rows;
	//	int cols;
	//	scanf("%d",&rows);
	//	scanf("%d",&cols);
	//
	//    int *array2d=(int *)malloc(sizeof(int)*rows*cols);
	//
	//    for(int i=0;i<rows;i++){
	//   		for(int j=0;j<cols;j++){
	//   			scanf("%d",array2d+i*cols+j);
	//   		}
	//    }
	//
	//    printArray2dSinglePointer(array2d,rows,cols);

	// using fix array of pointers
	//		int rows;
	//		int cols;
	//		scanf("%d",&rows);
	//		scanf("%d",&cols);
	//
	//	    int* rowsPointers[rows];
	//
	//	    for(int i=0;i<rows;i++){
	//	    	rowsPointers[i]=(int *)malloc(sizeof(int)*cols);
	//	    }
	//
	//	        for(int i=0;i<rows;i++){
	//	       		for(int j=0;j<cols;j++){
	//	       			scanf("%d",&rowsPointers[i][j]);//rowsPointers[i][j]is same as *(rowsPointers[i]+j)
	//	       		}
	//	        }
	//	     printArray2dByArrayOfPointers(rowsPointers,rows,cols);

// using dynamic array of pointers
//				int rows;
//				int cols;
//				scanf("%d",&rows);
//				scanf("%d",&cols);
//
//			    int** rowsPointers=(int**)malloc(sizeof(int *)*rows);
//
//			    for(int i=0;i<rows;i++){
//			    	rowsPointers[i]=(int *)malloc(sizeof(int)*cols);
//			    }
//
//			        for(int i=0;i<rows;i++){
//			       		for(int j=0;j<cols;j++){
//			       			scanf("%d",&rowsPointers[i][j]);//rowsPointers[i][j]is same as *(*(rowsPointers+i)+j)
//			       		}
//			        }
//			     printArray2dByDynamicArrayOfPointers(rowsPointers,rows,cols);

//using single malloc call and then linking pointers
					int rows;
					int cols;
					scanf("%d",&rows);
					scanf("%d",&cols);

				    int lengthOfArrayOfPointersAndElements=sizeof(int *)*rows +sizeof(int)*rows*cols;

				    int **arrayOfPointersAndElements=(int **)malloc(lengthOfArrayOfPointersAndElements);

				    int *ptrToFirstElement=(int *)(arrayOfPointersAndElements+rows);
				    for(int i=0;i<rows;i++){
				    	arrayOfPointersAndElements[i]=ptrToFirstElement+i*cols;
				    }

				        for(int i=0;i<rows;i++){
				       		for(int j=0;j<cols;j++){
				       			scanf("%d",&arrayOfPointersAndElements[i][j]);//arrayOfPointersAndElements[i][j]is same as *(*(arrayOfPointersAndElements+i)+j)
				       		}
				        }
				     printArray2dByDynamicArrayOfPointers(arrayOfPointersAndElements,rows,cols);
	return EXIT_SUCCESS;
}
