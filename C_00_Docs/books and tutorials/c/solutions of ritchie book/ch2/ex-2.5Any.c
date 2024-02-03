#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>
int found(char *s, char c)
{  int i;
    for(i=0;*(s+i);i++)
       if(*(s+i)==c)
       return i+1;
    return 0;
}
int  any(char *s1,char *s2)
{  int i,pos;

    for(i=0;s2[i];i++)
       if(pos=found(s1,*(s2+i)))
          return pos;
     return -1;
}

int main() 
{
    char s1[100];
    char s2[100];

 gets(s1);
 gets(s2);
 printf("pos=%d",any(s1,s2));




getch();
return 0;
}

