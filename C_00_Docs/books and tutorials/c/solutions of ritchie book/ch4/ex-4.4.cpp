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

int buff_top=0;
char buffer[100];
int getch1()
{ 
    return (buff_top>0)?buffer[--buff_top]:getchar();
    
}
void ungetch1(char c)
{
     buffer[buff_top++]=c;
     
 }
int get_op(char *s)
{  int c,i;
    
    
    while((c=s[0]=getch1())==' '||c=='\t');
    s[1]='\0';
    if(!isdigit(c) && c!='.')
      return c;
     
       i=0;
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
    double tmp,x,y;
    
    
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
        case '?'://top element
             printf("top element=%lf\n",value[top-1]);
             break;
        case '#'://duplicate
             tmp=pop();
             push(tmp);
             push(tmp);
             printf("last=%lf\n",value[top-1]);
             printf("second last=%lf\n",value[top-2]);
             break;
        case '@'://swap  
             x=pop();
             y=pop();
             printf("last=%lf\n",x);
             printf("second last=%lf\n",y);
             push(x);
             push(y);
             printf("last=%lf\n",pop());
             printf("second last=%lf\n",pop());
             break;
        case '!':
             top=0;
             break;
                     
       }
      
       
    }
    if(type==EOF||type=='\n')
     printf("value of expression=%lf\n",pop());
      
     

  getch();
  return 0;
}
