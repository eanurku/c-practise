#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

int found(char *s2,char c)
{  int i;
    for(i=0;*(s2+i);i++)
       if( *(s2+i)== c)
         return 1;
    
    return 0;
}
void squeeze(char *s1,char *s2)
{  int i,j=0;
     for(i=0;*(s1+i);i++)
         if(!found(s2,*(s1+i)))
            *(s1+j++)=*(s1+i);
     *(s1+j)=0;
     
}

int main() {

char s1[100];
char s2[100];

gets(s1);
gets(s2);

 printf("s1=%s s2=%s\n",s1,s2);
  squeeze(s1,s2);
  printf("s1=%s s2=%s",s1,s2);





getchar();
return 0;
}
