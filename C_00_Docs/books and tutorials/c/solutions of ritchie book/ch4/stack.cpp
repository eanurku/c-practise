#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//


#include "calc.h"
double value[MAX_VALUE];
int top=0;  //value[top] is available position to insert and top is size of array i.e. top=0 means array with zero size;
void  push(double n)
{  
     if(top==MAX_VALUE)
      printf("\nstack full\n");
     else
      value[top++]=n;
     
}
double pop(void)
{   if(!top)
      printf("\nstack empty\n");
    else
    return value[--top];
     
     
}
