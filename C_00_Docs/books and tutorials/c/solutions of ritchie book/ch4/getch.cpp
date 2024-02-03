#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//


#include "calc.h"
int buff_top=0;
char buffer[BUFFER_SIZE];
int getch1()
{ 
    return (buff_top>0)?buffer[--buff_top]:getchar();
    
}
void ungetch1(char c)
{
     buffer[buff_top++]=c;
     
 }
