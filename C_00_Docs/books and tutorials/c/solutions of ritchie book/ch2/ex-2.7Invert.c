#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

#include"../library/showbits.c"
#include"..\library\setbits.c"

int invert(int x,int p,int n)
{   int i,y;
    for(i=0;i<n;i++) {
      y=(x>>(p-i-1))&1;
      if(y==1)
        x=x & ~(1<<(p-i-1));
      else
      x=x | (1<<(p-i-1));
      }
   return x;
}

int invert_new(x,p,n)
{  int y;
    y=~x>>p-n;
    return setbits(x,p,n,y);
}
int main() {
    
int x,p,n;
scanf("%d%d%d",&x,&p,&n);
printf("\n");
showbits(x);
printf("\n");
showbits(invert(x,p,n));
getch();
return 0;
}
