#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//


/*s
#include "../library/algorithms.c"
*/
#define MAXLINE 100
char *fgets1(char *line ,int maxsize,FILE *fptr)
{   
   int c;
   char *l=line;
   
   while(--maxsize && (c=getc(fptr))!=EOF && (*line++=c)!='\n') 
                ;
   *line='\0';
   
   return ((c==EOF && l==line)?NULL:l);
}

int fputs1(char *line,FILE *fptr)
{  

   while(*line)
  {  putc(*line,fptr);
     line++;  
  }
    
    return ferror(fptr)?EOF:0 ;
}

char *getline()
{    char *line=(char *)malloc(MAXLINE);
     
    if( fgets1(line,MAXLINE,stdin))
     return line;
    else 
    return "";
}
int main(int argc,char *argv[])
{ 
   char *line;

  while(strlen(line=getline()))
   fputs1(line,stdout);
  getch();
  return 0;
}
