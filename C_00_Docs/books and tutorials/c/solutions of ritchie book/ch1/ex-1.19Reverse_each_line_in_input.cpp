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
char *line=(char *)malloc(MAX_LINE_SIZE+1);

char *getline(void)
{  int c,len=0;
     *line='\0';
     while( len < MAX_LINE_SIZE && ((c=getchar())!=EOF)&& c!='\n'){// a line of size MAX_LINE_SIZE will be read from the input
           *(line+len++)=c;
     
     }
     if(c=='\n')   
           *(line+len++)=c;
     
           
     *(line+len++)='\0';
      return line;
 }
 void swap(char *str,int i,int j)
{ int tmp;
      tmp=*(str+i);
      *(str+i)=*(str+j);
      *(str+j)=tmp;
}
void reverse(char *str)
{ int i;
     for(i=0;i<strlen(str)/2;i++)
           swap(str,i,strlen(str)-1-i);
     
     
     
     
}
int main(int argc,char *argv[])
{  int len;
   char *line;
   char save_char;
    
    while( len=strlen(line=getline())){
           
      save_char='\0';
      if(*(line+len-1)=='\n'){
        save_char=*(line+len-1);
        *(line+len-1)='\0';    
      }
      reverse(line);
        
      if(save_char=='\n'){
         *(line+len-1)='\n';
         *(line+len)='\0';
      }
      printf("%s",line);
    }
  free(line);
  getch();
  return 0;
}
