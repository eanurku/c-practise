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
char * day_of_month(int year,int day,char *str)
{
    int leap,i,month=0;
    int yeartype[][12]={ 
        {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
        {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
        };
    leap =(!(year%400) || ((year%100) && !(year%4)));
    
     for(i=0;day>yeartype[leap][i];i++)
     {    month++;
          day-=yeartype[leap][i];
     }
     
     
     sprintf(str,"%d/%d",day,month);
     return str;
}
int main(int argc,char *argv[])
{

   //input year and dayno
   int year,day;
   char str[100]={0};
   scanf("%d%d",&year,&day);
   printf("%s\n",day_of_month(year,day,str));

  getch();
  return 0;
}
