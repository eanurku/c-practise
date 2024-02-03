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

int day_of_year(int year,int month,int day)
{  int leap,i;
    int yeartype[][12]={ 
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
        };
    leap =(!(year%400) || ((year%100) && !(year%4)));
    for(i=0;i<month-1;i++)
      day=day+yeartype[leap][month];
      
      return day;
    
}
int main(int argc,char *argv[])
{
   //input yyyy/mm/dd
    int year,month,day;
    
   scanf("%d%d%d",&year,&month,&day);
   printf("day number=%d\n",day_of_year(year,month,day));


  getch();
  return 0;
}
