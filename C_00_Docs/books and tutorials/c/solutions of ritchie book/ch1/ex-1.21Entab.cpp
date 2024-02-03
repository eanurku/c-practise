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
void insert_min_tabs_and_space(int pos,int spaces)
{   int tabs;
    tabs=pos/TAB_LENGTH - (pos-spaces)/TAB_LENGTH;
    if(tabs)
    spaces=pos-(pos/TAB_LENGTH)*TAB_LENGTH;
    while(tabs--)
    putchar('\t');
    while(spaces--)
    putchar(' ');
    
     
}
int main(int argc,char *argv[])
{ 
    int c,pos=0,spaces=0;
   /* printf("12345678123456781234567812345678123456781234567812345678123456781234567812345678");*/
   while((c=getchar())!=EOF){
     
     if(c==' '){
      pos++;
      spaces++;
      }
     else if(c=='\n'){
     if(spaces){
     insert_min_tabs_and_space(pos,spaces);
     spaces=0;
     }
     pos=0;
     putchar(c);
     }
     else if(c=='\t'){
      if(spaces){
      insert_min_tabs_and_space(pos,spaces);
      spaces=0;
      }
      pos+=TAB_LENGTH- pos%TAB_LENGTH;
      putchar(c);
     }
     else {
      if(spaces){
      insert_min_tabs_and_space(pos,spaces);
      spaces=0;
      }
      putchar(c);
      pos++;
     }
     
   }  

  getch();
  return 0;
}
