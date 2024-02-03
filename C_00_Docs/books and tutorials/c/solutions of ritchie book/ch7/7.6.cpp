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
int main(int argc,char *argv[])
{

   FILE *f1,*f2;
   char line1[100],line2[100];
   f1=fopen(argv[1],"r");
    if(f1==NULL)
    { fprintf(stderr,"unable to open file:%s",argv[1]);
      exit(1);
    }
    
   f2=fopen(argv[2],"r");
    if(f2==NULL)
    { fprintf(stderr,"unable to open file:%s",argv[2]);
      exit(2);
    }
    
   while(!strcmp(fgets(line1,SIZE,f1),fgets(line2,SIZE,f2)))
           ;
           
   fprintf(stdout,"%s",line1);
   fprintf(stdout,"%s",line2);
   
   
  getchar();
  return 0;
}
