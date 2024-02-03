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
#define MAX_LINE_SIZE  10000
char *line=(char *)malloc(MAX_LINE_SIZE);

char *getline(void)
{  int c,len=0;
     *line='\0';
     while( len < MAX_LINE_SIZE-1 && ((c=getchar())!=EOF)&& c!='\n'){
           *(line+len++)=c;
     
     }
     if(c=='\n')   
           *(line+len++)=c;
     
           
     *(line+len++)='\0';
      return line;
 }
 
int main(int argc,char *argv[])
{  int len,i;
   char *line;
   char save_char;
    
    
    while( len=strlen(line=getline())){
    
      
       i=strlen(line)-2;
       save_char = *(line+i+1);
       while(*(line+i)==' '|| *(line+i)=='\t')
         i--;
    
       if(i==-1)
           ;
       else if(save_char == '\n')
        {  *(line+i+1)='\n';
           *(line+i+2)='\0';
           printf("%s",line);
        }
       else  //line is last line of file
       { 
           *(line+i+1)='\0';
           printf("%s",line);
        }
        
        
    }
  free(line);
  getch();
  return 0;
}
