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
int i=3;
char *ptr;
char *s="anurag";
float val=3987938.0000;
   
   printf(":%-*.*s:\n",10,3,"anurag");  // width and precision can be enterd by using variable 
   
   printf("x%\n");// printf dont print single % 
   
   printf("%s\n",s);// s with anything get printed
   
   printf(s);//if s will have % then that wont get printed.
   
   printf("\n----%%----\n");// to print % use %% 
   
   printf("%d\n",'\n');
   
   printf("%p\n",ptr);
   printf("%.12g",val);
   
  getch();
  return 0;
}
