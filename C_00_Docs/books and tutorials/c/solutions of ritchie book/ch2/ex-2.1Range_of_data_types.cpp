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

printf("char range = %d to %d\n",CHAR_MIN,CHAR_MAX);
printf("singed range = %d to %d\n",SCHAR_MIN,SCHAR_MAX);
printf("unsinged char  range = %u to %u\n\n",0,UCHAR_MAX);

printf("short range = %d to %d\n",SHRT_MIN,SHRT_MAX);
printf("int range = %d to %d\n",INT_MIN,INT_MAX);
printf("long range = %ld to %ld\n",LONG_MIN,LLONG_MAX);


printf("\nnewline =%d",'\n');



getchar();
return 0;
}

