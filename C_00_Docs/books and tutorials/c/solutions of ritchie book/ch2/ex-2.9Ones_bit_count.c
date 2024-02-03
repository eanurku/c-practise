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

unsigned int fast_ones_bit_count(unsigned int number)
{   
    int count=0;
     while(number)
         number &= (number-1);
         count++;
    return count;
}

 unsigned int ones_bit_count(unsigned int number)
{ 
  int count=0;    
    while(number){        
     if(number & 1)
     count++;
     number>>=1;
    }
    return count;
}

int main() {

unsigned int n1;
scanf("%d",&n1);
showbits(n1);
printf("\n");

printf("\n%d\n",ones_bit_count(n1));
printf("\n%d\n",fast_ones_bit_count(n1));




getch();
return 0;
}

