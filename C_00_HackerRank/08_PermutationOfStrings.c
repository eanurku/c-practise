/*
 * 08_PermutationOfStrings.c
 *
 *  Created on: Jan 20, 2022
 *      Author: anura
 */


 #include <stdio.h>
#include <stdlib.h>
#include <string.h>

void swap(char** s,int i,int j){

    char* tmp=s[i];
    s[i]=s[j];
    s[j]=tmp;
}
void reverse(char** s,int start,int end){

    int i,j;
    for(i=start,j=end;i<j;i++,j--){
        swap(s,  i,  j);
    }
}
int next_permutation(int n, char **s)
{
	/**
	* Complete this method
	* Return 0 when there is no next permutation and 1 otherwise
	* Modify array s to its next permutation
	*/


    if(n==1) return 0;
    int i,k=-1,l;

    for(i=n-2;i>=0;i--){
        if(strcmp(s[i],s[i+1])<0){
            k=i;
            break;
        }
    }

    if(k==-1)return 0;

    for(i=n-1;i>k;i--){
        if(strcmp(s[i],s[k])>0){
            l=i;
            break;
        }
    }
    swap(s,k,l);
    reverse(s,k+1,n-1);

    return 1;
}

int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}
/*
 Sample Input

3
a
bc
bc

Sample Output

a bc bc
bc a bc
bc bc a

Sample Input

2
ab
cd
Sample Output

ab cd
cd ab
 */
