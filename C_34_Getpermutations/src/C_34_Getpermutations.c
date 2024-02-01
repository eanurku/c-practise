/*
 ============================================================================
 Name        : C_34_Getpermutations.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void swap(char *array,int i,int j){
	int tmp=array[i];
	array[i]=array[j];
	array[j]=tmp;
}
void swapfromEnd(char *array,int start,int end){

	for(int i=end;i>start;i--){
		swap(array,i,i-1);
	}
}
void getpermutation(char *array,int start,int end){

	if(start==end){
		printf("%s\n",array);
		return;
	}

	for(int i=start;i<=end;i++){
		swapfromEnd(array,start,i);
		getpermutation(array, start+1, end);
		swapfromEnd(array,start,i);
	}
}
int main(void) {
	char array[]={'a','b','c','\0'};
	int n=3;
	getpermutation(array,0,n-1);
	return EXIT_SUCCESS;
}
