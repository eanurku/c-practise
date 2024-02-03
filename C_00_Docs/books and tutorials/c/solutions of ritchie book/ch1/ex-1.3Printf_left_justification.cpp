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
    printf("123456781234567812345678123456781234567812345678\n");
    
    for(f=lower;f<=upper;f+=step){
    
        c=((f-32)*5)/9;
        printf("\t\t%f\t%0f\n",f,c);



    }
getchar();

return 0;
}
