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
#define TAB_LENGTH 8
int main(int argc,char *argv[]){
  int pos=0,spaces,c;
  /*printf("12345678123456781234567812345678123456781234567812345678123456781234567812345678");*/
   while((c=getchar())!=EOF)
         if(c=='\t'){
           spaces=TAB_LENGTH- pos%TAB_LENGTH;
           while(spaces--){
            putchar(' ');
            pos++;
           }
         }
         else if(c=='\n'){
              pos=0;
              putchar(c);
         }
         else{
          putchar(c);
          pos++;
         }


  getch();
  return 0;
}
