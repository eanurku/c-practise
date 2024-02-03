
int showbits(int n)
{ int i;
    for(i=32;i>0;i--)
      printf("%d",(n & (1<<(i-1)) )?1:0);

}
