
int setbits(x,pos,n,y)
{  int p=1,i;
   for(i=1;i<=n;i++)//pow(2,n) 3 times less than above
      p<<=1;
    x=(x&~(p-1<<pos-n))|((y&p-1)<<pos-n);
 return x;
}
