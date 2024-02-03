#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//




double _atof(char s[])
{  
   int i,sign,p;
   double n;
       for(i=0;isspace(s[i]);i++) ;       
       
       sign=(s[i]=='-')?-1:1;
   
       
       if(s[i]=='-'||s[i]=='+')
          i++;
       for( n=0;isdigit(s[i]);i++)
         n=10*n+s[i]-'0'; 
       
       if(s[i]=='.')
       {  i++;
          for(p=1;isdigit(s[i]);i++,p*=10)
           n=10*n+s[i]-'0'; 
       }  
         
        n=n/p;
    return sign*n;
}

int main(int argc,char *argv[])
{
      printf("%lf\n",atof(".7"));
  

  getch();
  return 0;
}
