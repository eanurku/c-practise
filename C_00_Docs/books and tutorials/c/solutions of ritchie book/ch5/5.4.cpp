#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//


/*
#include "../library/algorithms.c"
*/
int strend(char *s,char *t)
{  
    char *tmp=t;
    while(*s)
      s++;
    while(*t)
      t++;
    s--;t--;
    
    while(*s==*t)
    { if(t-tmp==0)
      return 1;
      s--;t--;}
      
    return 0;
    
    
}
int main(int argc,char *argv[])
{


    char s[100],t[50];
    gets(s);
    gets(t);
    printf("%d",strend(s,t));
  



  getch();
  return 0;
}
