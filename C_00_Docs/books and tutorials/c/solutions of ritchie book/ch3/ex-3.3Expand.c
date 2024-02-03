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
int found_format(char *s,int i)
{ 
  if(isalnum(s[i])&& isalnum(s[i+2])&&(s[i+1]=='-'))  
     return 1;
  
  return 0;
}
int notcompatable(char *s,int i)
{  
    if((isdigit(s[i]) && isalpha(s[i+2]))||(isdigit(s[i+2]) && isalpha(s[i])))
     return 1;
     
     return 0;

}
void expand(char *s,char *t)
{ int j,c,i;

   for(i=0,j=0;i<strlen(s);i++)            
     if(found_format(s,i))
       {  if(notcompatable(s,i)||s[i]>s[i+2])
            t[j++]=s[i];
          else {
           t[j++]=s[i];
           c=s[i]+1;
           while(c<s[i+2])
             t[j++]=c++;
           i+=1;
          }
       }
     else
      t[j++]=s[i];
   
            
}      
int main(int argc,char *argv[])
{ char s1[100];
  char s2[1000]={0};
    
    
   gets(s1);
   expand(s1,s2);
   printf("%s",s2);

  getch();
  return 0;
}
