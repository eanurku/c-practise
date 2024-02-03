#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

void swap(char *s,int i,int j)
{ 
  int tmp;
  tmp=s[i];s[i]=s[j];s[j]=tmp; 
}

void reverse(char *s)
{   int i,j=strlen(s)-1;
    for(i=0;i<j;i++,j--)
       swap(s,i,j);


}
int main() {
    
char s[100];
gets(s);
reverse(s);
printf("reverse=%s\n",s);
getchar();
return 0;
}
