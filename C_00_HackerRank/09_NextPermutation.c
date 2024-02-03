/*
 ============================================================================
 Name        : C_35_NextPermutation.c
 Author      : anurag
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdlib.h>
#include <string.h>

void swap(char **s,int i,int j){
    char *tmp=s[i];
    s[i]=s[j];
    s[j]=tmp;
}
void reverse(char **s,int start,int end){
    for(int i=start,j=end;i<j;i++,j--){
        swap(s,i,j);
    }
}
int next_permutation(int n, char **s)
{


    int i,pivotIndex=-1,succesor;
    //get pivot
    for(i=n-2;i>=0;i--){
        if(strcmp(s[i],s[i+1])<0){
            pivotIndex=i;
            break;
        }
    }
    //No Next Permuation
    if(pivotIndex==-1){
        return 0;
    }

    //find successor

    for(i=n-1;i>pivotIndex;i--){
        if(strcmp(s[i], s[pivotIndex])>0){
            succesor=i;
            break;
        }
    }

    swap(s,pivotIndex,succesor);
    reverse(s, pivotIndex+1, n-1);

    return 1;

}
int main(void) {

	char **s;
		int n;
		scanf("%d", &n);
		s = calloc(n, sizeof(char*));
		for (int i = 0; i < n; i++)
		{
			s[i] = calloc(11, sizeof(char));
			scanf("%s", s[i]);
		}


		(next_permutation(n, s));

		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');

		for (int i = 0; i < n; i++)
			free(s[i]);
		free(s);



	return EXIT_SUCCESS;
}
