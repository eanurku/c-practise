#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//


#include "calc.h"
int get_op(char *s)
{  int c,i;
    
    
    while((c=s[0]=getch1())==' '||c=='\t');
    s[1]='\0';
    if(!isdigit(c) && c!='.')
      return c;
     
       i=0;
    if(isdigit(c))
      while(isdigit(c=s[++i]=getch1()));
      
    if(c=='.')
      while(isdigit(c=s[++i]=getch1()));
    
    s[i]=0;
    
      ungetch1(c);
    return NUMBER;
}
