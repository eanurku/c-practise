/*
 ============================================================================
 Name        : example8.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int compareNumbers( int *p, int  *q ){

	int x=*( int *)p;
	int y=*( int *)q;
	if(x<y){
		return -1;
	}
	else if(x>y){
		return 1;
	}
	else {
		return 0;
	}
}
int main(void) {

int i;
int array[]={3,33,12,31,32,45,66};

qsort(array,7,sizeof(int),compareNumbers);

for(i=0;i<=6;i++){
	printf("%d\n",array[i]);
}

	return EXIT_SUCCESS;
}
