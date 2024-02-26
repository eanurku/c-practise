/*
 ============================================================================
 Name        : example2.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>


binarySerach(int *array, int start, int end, int element) {

	int mid;
	if (start > end) {
		return -1;
	}
	mid = (start + end) / 2;
	if (element < array[mid]) {
	return binarySerach(array,start,mid-1,element);
    }
	else if (element > array[mid]) {
    return binarySerach(array,mid+1,end,element);
    }
	else {
    return mid;
    }

}
int main(void) {

	int array[100]={12,33,44,55,67,98},pos;

	int element=44;

	 pos=binarySerach(array,0,8,element);

	 if(pos>0){
		 printf("elemt found at pos=%d",pos+1);
	 }
	 else{
		 printf("element not found");
	 }
	return EXIT_SUCCESS;
}
