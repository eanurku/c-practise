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
int count;
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
int getint(int *val)
{  int n=0,i,c;
   char sign;
   
   while(isspace(c=getch1())) ;
   
   while(!isdigit(c)&&c!='+'&&c!='-'&&c!=EOF)
        c=getch1();
    
   if(c=='+'||c=='-')
   {   sign=c;
       c=getch1();
       if(!isdigit(c))
        { ungetch1(c);
          *val=0;
          return 1;
        }
   }
   if(c==EOF)
    { return EOF;
    }
   while(isdigit(c))
   {  
     n=n*10+c-'0';
     c=getch1();
   }

   if(sign=='-')
   *val=-n;
   else 
   *val=n;
   
   ungetch1(c);

   return (n>=0?1:EOF);
}
int main(int argc,char *argv[])
{   int value;
    
     while(getint(&value)!=EOF)
     {
       printf("%d\n",value);
     }
  


  getch();
  return 0;
}
