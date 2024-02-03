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

int count=0;
char buff;
int getch1()
{ 
    
    if(count>0){
     count=0;
     return buff;
    }
    else
    {
        return getchar();
    }
}

void ungetch1(char c)
{
     if(!count)
     { buff=c;
       count++;}
     else
      printf("buffer full");
      
     
     
 }
int main(int argc,char *argv[])
{  int c;
   while((c=getch1())!=EOF)
       if(c=='+')
         ungetch1('-');
       else 
       printf("%c",c);
   
  getch();
  return 0;
}
