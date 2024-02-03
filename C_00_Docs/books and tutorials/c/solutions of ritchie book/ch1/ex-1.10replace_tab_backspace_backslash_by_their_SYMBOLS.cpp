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
 int c;


while((c=getchar())!=EOF){

    if(c=='\t') {
      putchar('\\');
      putchar('t');

    }
    else if(c=='\\') {
        putchar('\\');
        putchar('\\');
    }
    else if(c=='\b') {
        putchar('\\');
        putchar('b');
    }
    else
    putchar(c);

}

return 0;
}
