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

int main(int argc,char *argv[])
{
  int c,linec=0,tabc=0,blankc=0;
  
   while((c=getchar())!=EOF){
     switch(c){
     case '\n' :linec++;
     case '\t' :tabc++;
     case ' ' : blankc++;
     }
   }
printf("line count=%d \ntab count=%d\n blanks count=%d",linec,tabc,blankc);
  getch();
  return 0;
}
