#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){


//	int n1,n2;
//
//	scanf("%d %d",&n1,&n2);
//	printf("%d %d",n1,n2);

    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    //s = realloc(s, strlen(s) + 1);


     char *token=strtok(s," ");

     while(token!=NULL){
      	 printf("%s\n",token);
    	 token=strtok(NULL," ");

     }

}
