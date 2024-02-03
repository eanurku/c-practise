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
#define MAX_CHAR_VALUE 300
#define MAX_VERTICAl_HEIGHT 50

int main(int argc,char *argv[])
{  int c,i,j;
  int char_arr[MAX_CHAR_VALUE]={0};
   while((c=getchar())!=EOF)
      char_arr[c]++;
      
   for(j=1;j<=MAX_VERTICAl_HEIGHT;j++){
     for(i=0;i<MAX_CHAR_VALUE;i++)
        if(char_arr[i]){
          if(j<=MAX_VERTICAl_HEIGHT-char_arr[i])
              printf("  ");
          else
              printf("* ");
          }
     printf("\n");
   }
   
  for(i=0;i<MAX_CHAR_VALUE;i++)
        if(char_arr[i])
        switch(i){
         case '\t': printf("\\t");break;
         case '\n': printf("\\n");break;
         default:
         printf("%c ",i);
        }
  getch();
  return 0;
}
