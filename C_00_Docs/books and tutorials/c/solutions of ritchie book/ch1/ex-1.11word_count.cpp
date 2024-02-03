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

    int c,status=0,nw=0;



  while((c=getchar())!=EOF) {                             
      if(c==' '||c=='\t'||c=='\n')
                           status=0;
      else if(status==0){
           status=1;
                            nw++;
      }
        
        

}
  printf("\n%d",nw);
  getchar();
return 0;
}

