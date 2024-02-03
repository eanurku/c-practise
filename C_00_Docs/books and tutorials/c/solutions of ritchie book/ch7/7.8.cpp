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
#define SIZE 100
#define PAGE_SIZE 20
int main(int argc,char *argv[])
{ 
   FILE *f1;
   int lineno,page;
  char line[100];
  if(argc>1)
  {   
      while(--argc>0)
      {  
          f1=fopen(*++argv,"r");
          
           if(f1==NULL)
          { fprintf(stdout,"unable to open file:%s",*argv);
              exit(1);
          }
          page=1;
          lineno=0;
          fprintf(stdout,"\nfile name:%s page number:%d ",*argv,page); 
          fprintf(stderr,"\n");
          while((fgets(line,SIZE,f1))!=NULL)
          { 
            
             fprintf(stdout,"%s",line); 
             lineno++;
             if(lineno%PAGE_SIZE==0)
             { page++;
               fprintf(stdout,"\nfile name:%s page number:%d ",*argv,page); 
                 fprintf(stderr,"\n");
             }
          }
         
          fclose(f1);   
      }
            
  }
  else 
  { 
       fprintf(stderr,"less number of argument");
       exit(1);
  }
  getch();
  return 0;
}
