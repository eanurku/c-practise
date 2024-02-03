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
void swap(char *s,int i,int j)
{  int tmp;
   tmp=s[i];
   s[i]=s[j];
   s[j]=tmp;
     
}
void reverse(char *s,int i,int j)
{   
    if(i<j)
    { swap(s,i,j);
     reverse(s,i+1,j-1); 
    }
     
}

int main(int argc,char *argv[])
{
  char s[100];
  int start,end;
  gets(s);
  
 reverse(s,start=0,end=strlen(s)-1);
 puts(s);
  getch();
  return 0;
}
