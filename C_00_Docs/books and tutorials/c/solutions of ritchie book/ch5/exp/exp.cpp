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

int datatype(char *str)
{ 
    if(isdigit(str[0]))
       return NUMBER;
    else
         return str[0];         
    
    
    
}
int main(int argc,char *argv[])
{   int type;
    char op[100];
    
    
    double right_operand,left_operand;
    
    while(--argc ) {  //op means operand or operator 
     
     strcpy(op, (*++argv)) ;
     printf("%d\n",argc);
     
     type=datatype(op);
     
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
                  
       }
      
       
    }
    
     printf("value of expression=%lf\n",pop());
      
     

  getch();
  return 0;
}
