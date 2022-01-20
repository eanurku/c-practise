/*
 * 06_PrintingPatternUsingLoops.c
 *
 *  Created on: Jan 20, 2022
 *      Author: anura
 */
/*
 * solution 1
 */
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#define MAX 2100

void populateBoundaryOfMatrix(int *array, int rows, int cols, int element,
		int n) {

	int i, j;
	for (i = n - 1 - (element - 1); i <= n - 1 + element - 1; i++) {
		for (j = n - 1 - (element - 1); j <= n - 1 + element - 1; j++) {
			if (i == (n - 1 - (element - 1)) || i == (n - 1 + element - 1))
				*(array + (2 * n - 1) * i + j) = element;
			if (j == (n - 1 - (element - 1)) || j == (n - 1 + element - 1))
				*(array + (2 * n - 1) * i + j) = element;
		}
	}
}
int main() {

	int n, i, j;
	scanf("%d", &n);
	int *array2d = (int*) malloc(sizeof(int) * (2 * n - 1) * (2 * n - 1));

	// Complete the code to print the pattern.
	for (i = 1; i <= n; i++) {
		populateBoundaryOfMatrix(array2d, 2 * i - 1, 2 * i - 1, i, n);
	}
	//print matrix
	for (i = 0; i < 2 * n - 1; i++) {
		for (j = 0; j < 2 * n - 1; j++) {
			printf("%d%s", *(array2d + (2 * n - 1) * i + j),
					j < 2 * n - 2 ? " " : "");
		}
		printf("\n");
	}
	return 0;
}

/*
 *solution 2

 #include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n;
    scanf("%d",&n);

    int row,i,j;

    for(row=1;row<=n-1;row++){
        for(i=0;i<=row-1;i++)
            printf("%d ",n-i);
        for(i=0;i<(2*n-1-2*row);i++)
            printf("%d ",n-row+1);
        for(i=0;i<=row-1;i++)
            printf("%d ",n-row+1+i);
        printf("\n");
    }

    for(i=0;i<=n-2;i++)
        printf("%d ",n-i);

    printf("%d ",1);

    for(i=n-2;i>=0;i--)
        printf("%d ",n-i);

    printf("\n");
    for(row=n-1;row>=1;row--){
        for(i=0;i<=row-1;i++)
            printf("%d ",n-i);
        for(i=0;i<(2*n-1-2*row);i++)
            printf("%d ",n-row+1);
        for(i=0;i<=row-1;i++)
            printf("%d ",n-row+1+i);
        printf("\n");
    }
    return 0;
}

 */
