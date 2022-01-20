/*
 * 07_SortingArrayOfStrings.c
 *
 *  Created on: Jan 20, 2022
 *      Author: anura
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
   int lexicographic_sort(const char* a, const char* b) {

return strcmp(a, b);
}

int lexicographic_sort_reverse(const char* a, const char* b) {
    return strcmp(b,a);
}
int getDistinctChars( const char* a){
    int map[500]={0};
    char *ptr=a;
    while(*ptr){
        map[(int)*ptr]++;
        ptr++;
    }
    int count=0;
    for(int i=0;i<500;i++){
        if(map[i]>0){
            count++;
        }
    }
    return count;


}
int sort_by_number_of_distinct_characters(const char* a, const char* b) {
    int a_distinct=getDistinctChars(a);
    int b_distinct=getDistinctChars(b);
    if(a_distinct<b_distinct){
        return -1;
    }else if (a_distinct==b_distinct) {
        return strcmp(a,b);
    }else{
        return 1;
    }
}

int sort_by_length(const char* a, const char* b) {
    int a_len= strlen(a);
    int b_len=strlen(b);
    if(a_len<b_len){
        return -1;
    }else if (a_len==b_len) {
        return strcmp(a, b);
    }else {
        return 1;
    }
}
void swap(char** arr,int i,int j){
    char* tmp=arr[i];
    arr[i]=arr[j];
    arr[j]=tmp;

}
void string_sort(char** arr,const int len,int (*cmp_func)(const char* a, const char* b)){

    int i,j;
        for(i=1;i<=len-1;i++){
            for(j=0;j<=len-1-i;j++){
                if(cmp_func(arr[j],arr[j+1])>0){
                        swap(arr,j,j+1);
                }
            }
        }

}


int main()
{
    int n;
    scanf("%d", &n);

    char** arr;
	arr = (char**)malloc(n * sizeof(char*));

    for(int i = 0; i < n; i++){
        *(arr + i) = malloc(1024 * sizeof(char));
        scanf("%s", *(arr + i));
        *(arr + i) = realloc(*(arr + i), strlen(*(arr + i)) + 1);
    }

    string_sort(arr, n, lexicographic_sort);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, lexicographic_sort_reverse);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_length);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");

    string_sort(arr, n, sort_by_number_of_distinct_characters);
    for(int i = 0; i < n; i++)
        printf("%s\n", arr[i]);
    printf("\n");
}

