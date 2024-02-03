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
int status,c;
status=0;

while((c=getchar())!=EOF)
{
    if(c==' ')
     {   if(status==0)
          { putchar(c);
            status=1;
          }
     }
    else
   { putchar(c);
     status=0;
   }
}
return 0;
}

