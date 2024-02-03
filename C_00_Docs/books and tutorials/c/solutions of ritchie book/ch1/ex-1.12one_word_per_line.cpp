#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>
int main() {
int c,status=0;
while((c=getchar())!=EOF)
    {             
        if(c==' '||c=='\t'||c=='\n')
         {  if(status==1)//check for whether moving from a word to whitespaces or not
             { putchar('\n');
                status=0;}
         }
        else 
          { 
            status=1;
            putchar(c);                         
            }              
                          
     }








getchar();
return 0;
}

