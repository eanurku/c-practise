/*
 ============================================================================
 Name        : Bits_invertNbitsfromposPofX.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int invert1(int x,int p,int n){

	int shift,i;
	for(i=1;i<=n;i++){
       shift=p-1+i-1;
       if(x&(1<<shift)){
    	   x=x & ~(1<<shift);
       }else{
    	   x=x|(1<<shift);
       }
	}
	return x;
}
int main(void) {
	int x=56,p=3,n=4;
	printf("%d",invert1(x,p,n));
	return EXIT_SUCCESS;
}
