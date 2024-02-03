#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>



int main() {

    int lower,step,upper,i;
    float c,f;
    lower=0;
    upper=300;
    step=20;

    printf("12345678123456781234567812345678123456781234567812345678123456781234567812345678\n");
     printf("%4.5s\n","anurag");
    for(i=lower;i<=upper;i+=step){
        f=i;
        c=((f-32)*5)/9;
        printf("%8d%8.2f\n",i,c);

    }
getchar();
return 0;
}
