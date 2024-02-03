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
#define swap(t,x,y) t=x;x=y;y=t;
int main(int argc,char *argv[])
{
  int t,x,y;
  t=0;
  x=9;y=10;
  swap(t,x,y)
  printf("x=%d y=%d",x,y);
  getch();
  return 0;
}
