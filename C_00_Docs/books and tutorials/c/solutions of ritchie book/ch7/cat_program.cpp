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
int filecopy(FILE *fin,FILE *fout)
{  int c;
    while((c=getc(fin))!=EOF)
        putc(c,fout);
}

int main(int argc,char *argv[])
{  
    FILE *fptr;

    if(argc==1)
    {  
               filecopy(stdin,stdout);
              
    }
    else 
    {   
        while(--argc)
        { 
          if((fptr=fopen(*++argv,"r"))) 
          { filecopy(fptr,stdout);
            fclose(fptr); 
          }
          else 
          {
            fprintf(stderr,"Error in opening of file:%s\n",*argv);      
            exit(1); 
          }    
        }
    }
  getch();
  return 0;
}
