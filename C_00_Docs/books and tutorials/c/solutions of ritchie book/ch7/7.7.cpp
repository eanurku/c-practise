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
   FILE *f1;

  char pattern[100],line[100];
  if(argc>2)
  {   strcpy(pattern,*++argv);
      while(--argc>1)
      {  
          f1=fopen(*++argv,"r");
          
           if(f1==NULL)
          { fprintf(stdout,"unable to open file:%s",*argv);
              exit(1);
          }
  
          while((fgets(line,SIZE,f1))!=NULL)
          { 
            if(strstr(line,pattern))
            { fprintf(stdout,"file:%s :pattern found:%s",*argv,line); 
             
            }
          }
         
          fclose(f1);   
      }
            
  }
  else if(argc==2)
   { strcpy(pattern,argv[1]);
     while((fgets(line,SIZE,stdin))!=NULL)
       if(strstr(line,pattern))
        fprintf(stdout,"pattern found:%s",line); 
   }
  else 
  { 
       fprintf(stderr,"less number of argument");
       exit(1);
  }
  getch();
  return 0;
}
