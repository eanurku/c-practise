/*
 * 03_PrintingTokens.c
 *
 *  Created on: Jan 18, 2022
 *      Author: anura
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

     char *token=strtok(s," ");
     while(token!=NULL){
      	 printf("%s\n",token);
    	 token=strtok(NULL," ");

     }

}

/*
 Sample Input:

  This is C

Sample Output :

This
is
C

 */
