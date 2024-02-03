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
#define OUT 0
#define IN 1
 char stack_par[100]={0};
   int top_par=-1;
   char stack_brac[100]={0};
   int top_brac=-1;
   
   char stack_brack[100]={0};
   int top_brack=-1;
   
void push_par()
{stack_par[++top_par]='(';
}
      
void pop_par() 
{
 if(top_par>-1)
 stack_par[top_par--]='\0';
}    
   
void push_brac()
{stack_brac[++top_brac]='{';
}
      
void pop_brac() 
{
 if(top_brac>-1)
 stack_brac[top_brac--]='\0';
}    
void push_brack()
{stack_brack[++top_brack]='[';
}
      
void pop_brack() 
{
 if(top_brack>-1)
 stack_brack[top_brack--]='\0';
}        
int main(int argc,char *argv[])
{ int i,c;
   int count_open_par=0;
   int count_close_par=0;
   
   int count_open_brac=0;
   int count_close_brac=0;
   
   int count_open_brack=0;
   int count_close_brack=0;
  
   
   
    while((c=getchar())!=EOF){
      
        
        if(c=='(')
        { 
          push_par();
        }
        else if(c==')' ){
         pop_par();
          
        }
        
        if(c=='{'){
          
          push_brac();     
        }
        else if(c=='}'){
          
          pop_brac();
        }
        
        if(c=='['){
         
          push_brack();
        }
        else if(c==']'){
         
          pop_brack();
        }                     
    }
    if(top_par!=-1)
          printf("unmatched parentheses\n");
   
    
    if(top_brac!=-1)
          printf("unmatched braces\n");
    
    if(top_brack!=-1)
          printf("unmatched brackets\n");
    
    
  getch();
  return 0;
}
