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
int buff_top=0;
char buffer[100];
int getch1()
{ 
    return (buff_top>0)?buffer[--buff_top]:getchar();
    
}
void ungetch1(char c)
{
     buffer[buff_top++]=c;
     
 }


void ungets(char *s)
{  int i;
   for(i=strlen(s);i>=0;i--)
      ungetch1(s[i]);  
     
}
int main(int argc,char *argv[])
{  int c;
   char s[]="anurag";
  ungets(s);
   while((c=getch1()))
       printf("%c",c);
   
  getch();
  return 0;
}
