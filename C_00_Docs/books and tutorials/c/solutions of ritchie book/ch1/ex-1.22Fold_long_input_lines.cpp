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
#define MAX_LINE_SIZE  8

char *line=(char *)malloc(MAX_LINE_SIZE+1);

char *getline(void)
{  int c,len=0;
     *line='\0';
     while( len < MAX_LINE_SIZE && ((c=getchar())!=EOF)&& c!='\n'){
           *(line+len++)=c;
     
     }
     if(c=='\n')   
           *(line+len++)=c;
     
           
     *(line+len++)='\0';
      return line;
 }
 
int main(int argc,char *argv[])
{  int len,tmp;
   char *line;
    
    
    while( len=strlen(line=getline())){
     
    tmp=len-1;
    while(tmp>=0 && *(line+tmp)==' '||*(line+tmp)=='\t'||*(line+tmp)=='\n')
            tmp--;
    
    *(line+tmp+1)=='\0';
    
    printf("%s\n",line);
   }
  
  getch();
  return 0;
}
