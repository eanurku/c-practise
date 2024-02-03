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

#define NUMBER '0'
#define MAX_VALUE 100

double value[MAX_VALUE];
int top=0;  //value[top] is available position to insert and top is size of array i.e. top=0 means array with zero size;
void  push(double n)
{  
     if(top==MAX_VALUE)
      printf("\nstack full\n");
     else
      value[top++]=n;
     
}
double pop(void)
{   if(!top)
      printf("\nstack empty\n");
    else
    return value[--top];
     
     
}
int count=0;
char buff;
int getch1()
{ 
    
    if(count>0){
     count=0;
     return buff;
    }
    else
    {
        return getchar();
    }
}

void ungetch1(char c)
{
     if(!count)
     { buff=c;
       count++;}
     else
      printf("buffer full");
      
     
     
 }
 
 
int buff_top=0;
char buffer[100];
int getch2()
{ 
    return (buff_top>0)?buffer[--buff_top]:getchar();
    
}
void ungetch2(char c)
{
     buffer[buff_top++]=c;
     
 }
int get_op(char *s)
{  int c,i,save;
    
    
    while((c=s[0]=getch1())==' '||c=='\t');
    s[1]='\0';
    i=0;
    if(!isdigit(c))
    { if(c=='+'||c=='-'||c=='.')
       { save=c;
         if(isdigit(c=getch1()))
            ungetch1(c);
         else if(c=='.')
            s[++i]='.';
         else 
         return save;
       }
      else
        return c;
    }
       
    if(isdigit(c))
      while(isdigit(c=s[++i]=getch1()));
      
    if(c=='.')
      while(isdigit(c=s[++i]=getch1()));
    
    s[i]=0;
    
      ungetch1(c);
    return NUMBER;
}
int main(int argc,char *argv[])
{   int type;
    char op[100];
    
    
    double right_operand,left_operand;
    while((type=get_op(op))!='\n' && type !=EOF) { //op means operand or operator
     printf("%s\n",op);
       switch(type){
        case NUMBER:
          push(atof(op));break;
        case '+':
          push(pop()+pop());break;
        case '-':
          right_operand=pop();
          left_operand=pop();
          push(left_operand-right_operand);
          break;
        case '*':
          push(pop()*pop());break;
        case '/':
          right_operand=pop();
          left_operand=pop();
          push(left_operand/right_operand);
          break;
        case '%':
          right_operand=(int)pop();
          left_operand=(int)pop();
          push((int)left_operand % (int)right_operand);
          break;
        
       }
      
       
    }
    if(type==EOF||type=='\n')
     printf("value of expression=%lf\n",pop());
      
     

  getch();
  return 0;
}
