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
#include"../library/getbits.c"

unsigned int right_rotation(unsigned int number,int no_of_times)
{
       int first_bit;
      if((no_of_times%=32)==0)
          return number;
      else
      {
       while(no_of_times){

        first_bit=number & 1;
        number >>=1;
        if(first_bit)
           number|= (1<<31);
        

        no_of_times--;
        }

      }
       return number;


}



int main() {

unsigned int x,n;
scanf("%d%d",&x,&n);
showbits(x);
printf("\n");
showbits(right_rotation(x,n));
printf("\n");
 getch();
return 0;
}
