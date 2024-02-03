#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

void trim(char s[])
{  int i;

    i=strlen(s)-1;
    while( i>=0 && (s[i]==' '|| s[i]=='\t'|| s[i]=='\n'))
         i--;
    s[i+1]='\0';
}
int main() {
char s[]=" ";
trim(s);
printf("%saks",s);



getchar();
return 0;
}

