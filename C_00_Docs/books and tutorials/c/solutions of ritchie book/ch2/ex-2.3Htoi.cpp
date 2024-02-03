#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>


int htoi(char *s)// convert string of hexadecimal no   to integers data type i.e.  "oxA5f" to 4334.
{
    int i=2,n=0;

    while(*(s+i)!='\0')
    {
        if((*(s+i)>='0') && (*(s+i)<='9'))
          n=16*n+(*(s+i)-'0');

        if((*(s+i)>='a') && (*(s+i)<='f'))
          n=16*n+(*(s+i)-'a'+10);

        if((*(s+i)>='A') && (*(s+i)<='F'))
          n=16*n+(*(s+i)-'A'+10);

       i++;
    }
    return n;
}

int main() {

 char s[100];
 gets(s);
 printf("%d",htoi(s));
 getchar();
 return 0;
}

