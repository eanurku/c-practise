#include<stdio.h>// Formatted console and file input/output operations
#include<conio.h>// Unformatted console i/o operations
#include<stdlib.h>//for Utility functions like malloc,random,arc & argv as  command line arguments etc.
#include<string.h>//for String functions like strlen,strcmp etc.
#include<ctype.h>// character class test/conversion functions like isalnum,tolower etc.
#include<stdarg.h>//for Variable arguments uses in function by va_list,va_start,va_arg etc.
#include<time.h>//
#include<math.h>//



#include "calc.h"
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
        
       }
      
       
    }
    if(type==EOF||type=='\n')
     printf("value of expression=%lf\n",pop());
      
     

  getch();
  return 0;
}
