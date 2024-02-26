/*
 ============================================================================
 Name        : XorSwap.c
 Author      : kanurag@
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void myswap(int *x, int *y)
{
   if (x != y)
   {
      *x^=*y^=*x^=*y;
   }
}
int main(void) {

    int a=1,b=2;
    printf("%d,%d\n",a,b);
    myswap(&a,&b);
    printf("%d,%d",a,b);
	return EXIT_SUCCESS;
}
