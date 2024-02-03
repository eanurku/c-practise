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
void print(char *format,...)
{  
     char *p;
     int int_val;
     float float_val;
     char * string;
     
     va_list ptr;
     
     va_start(ptr,format);
     
     
     
     for(p=format;*p;p++)
     {  if(*p!='%')
         { putchar(*p);
           continue;
         }
      switch(*++p)
      { 
       case 'd':
               int_val=va_arg(ptr,int);
               printf("%d",int_val);break;
            
       case 'f':
               float_val=va_arg(ptr,double);
               printf("%f",float_val);break;
             
       case 's':
               string=va_arg(ptr,char *);
               while(*string)
               {
                     putchar(*string);  
                     string++;
               }
               break;
       default:
               putchar(*p);
      }
     
     }
     
     va_end(ptr);
 }
int main(int argc,char *argv[])
{

   char s[]="mohan";
    print("%d%f%s",12,12.45,s);
  getch();
  return 0;
}
