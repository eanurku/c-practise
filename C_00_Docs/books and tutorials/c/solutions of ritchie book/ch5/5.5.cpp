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




void strncpy(char *s,char *t,int n)
{
     
     for(;n>0 && *t;n--)
        *s++=*t++;
     
     *s=0;
}
void strncat(char *s,char *t,int n)
{ 
     while(*s)
     s++;
     for(;n>0 && *t;n--)
        *s++=*t++;
      *s=0;
}
   
int strncmp(char *s,char *t,int n)
{   
    for(;n>0 ;n--)
    {   if(*s!=*t)
          return *s-*t ;
        s++;t++;
    } 
     
    return 0;
}
int main(int argc,char *argv[])
{
    char s[100],t[50];
    int n;
    
    
  
    gets(s);
    gets(t);
    scanf("%d",&n);
    printf("%d",strncmp(s,t,n));
    
    

   
  getch();
  return 0;
}
