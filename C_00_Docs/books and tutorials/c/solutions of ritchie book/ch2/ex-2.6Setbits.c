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


int setbits_slow(n1,position,n,n2)
{   int i,temp_bit;

    for(i=1;i<=n;i++)
     { temp_bit=n2 & (1<<(n-i));
        if(temp_bit)
          n1 |=(1<<(position-i));
        else
           n1 &=~(1<<(position-i));

     }

  return n1;
}
int setbits_fast(x,pos,n,y)
{  int p=1,i;
   for(i=1;i<=n;i++)//pow(2,n) 3 times less than above
      p<<=1;//p-1 sets n 1 bits 
    x=(x&~(p-1<<pos-n))|((y&p-1)<<pos-n);//x&~(p-1<<pos-n) it will mke bits off at pos to nnumber of bits then set as per bits of y
 return x;
}
int main() {
clock_t t1,t2;
  t1=clock();
  double run_time;
  //write your code now

int i;
int n1=1233,pos=12,n=8,n2=876;
//printf("n1,pos,n,n2\n");
//scanf("%d%d%d%d",&n1,&pos,&n,&n2);
showbits(n1);
printf("\n");
showbits(n2);
printf("\n");
for( i=0;i<10000000;i++)
(setbits_fast(n1,pos,n,n2));

t2=clock();
run_time=(t2-t1)/(double)CLOCKS_PER_SEC;
printf("\ntime=%f",run_time);
getch();
return 0;
}

