/*
 * 04_DynamicArrayinCBookShelfProblem.c
 *
 *  Created on: Jan 19, 2022
 *      Author: anurag
 */


#include <stdio.h>
#include <stdlib.h>

/*
 * This stores the total number of books in each shelf.
 */
int* total_number_of_books;

/*
 * This stores the total number of pages in each book of each shelf.
 * The rows represent the shelves and the columns represent the books.
 */
int** total_number_of_pages;

int main()
{
    int total_number_of_shelves;
    scanf("%d", &total_number_of_shelves);

    int total_number_of_queries;
    scanf("%d", &total_number_of_queries);

    total_number_of_books=(int *)malloc(sizeof(int)*total_number_of_shelves);//array of integer


    total_number_of_pages=(int **)malloc(sizeof(int *)*total_number_of_shelves);//array of integer pointers

    //initializes total_number_of_books elements to zero
    for(int i=0;i<total_number_of_shelves;i++){
    	total_number_of_books[i]=0;
    }
    //memset(total_number_of_books,0,sizeof(int)*total_number_of_shelves);

    while (total_number_of_queries--) {
        int type_of_query;

        scanf("%d", &type_of_query);

        if (type_of_query == 1) {
            int x, y;
            scanf("%d %d", &x, &y);//x is shelf number,y is pages in book
            if(total_number_of_books[x]==0){
                total_number_of_pages[x]=(int *)malloc(sizeof(int));
                total_number_of_pages[x][total_number_of_books[x]]=y;
                total_number_of_books[x]++;
            }else{
            	total_number_of_pages[x]=realloc(total_number_of_pages[x],sizeof(int)+sizeof(int)* total_number_of_books[x]);
            	total_number_of_pages[x][total_number_of_books[x]]=y;
                total_number_of_books[x]++;
            }



        } else if (type_of_query == 2) {
            int x, y;
            scanf("%d %d", &x, &y);
            printf("%d\n", *(*(total_number_of_pages + x) + y));
        } else {
            int x;
            scanf("%d", &x);
            printf("%d\n", *(total_number_of_books + x));
        }
    }

//    if (total_number_of_books) {
//        free(total_number_of_books);
//    }
//
//    for (int i = 0; i < total_number_of_shelves; i++) {
//        if (*(total_number_of_pages + i)) {
//            free(*(total_number_of_pages + i));
//        }
//    }
//
//    if (total_number_of_pages) {
//        free(total_number_of_pages);
//    }

    return 0;
}


/*
 Sample Input 0

5
5
1 0 15
1 0 20
1 2 78
2 2 0
3 0

Sample Output 0

78
2


 */
