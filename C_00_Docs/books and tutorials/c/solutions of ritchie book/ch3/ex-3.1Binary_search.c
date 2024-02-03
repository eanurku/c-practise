#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#include<stdarg.h>
#include<time.h>
#include<math.h>
#include<float.h>
#include<limits.h>

int binary_search(int *list,int value,int start,int end)
{  static int mid;
     mid=(start+end)/2;
     if(start<=end){      
      return(value==list[mid]? (mid+1):(value<list[mid]?binary_search(list,value,start,mid-1): binary_search(list,value,mid+1,end))); 
    } 
       return -1;
}  



int binary_search_2_recursive_algorithm(int element,int element_list[],int start,int end)
{   int middle;
    if(start<=end)
     {
         middle=(start+end)/2;
         if(element < element_list[middle])
                 return binary_search_2_recursive_algorithm(element,element_list,start,middle-1);
         else if(element > element_list[middle])
                 return binary_search_2_recursive_algorithm(element,element_list,middle+1,end);
         else
                 return middle +1;
     }

            return -1;

}

int binary_search_1_algorithm(int element,int element_list[],int size)
{
    int start=0,end=size-1,middle;
    while(start<=end) {

       middle=(start+end)/2;

       if(element < element_list[middle])
                    end=middle-1;
       else if(element > element_list[middle])
                    start=middle+1;
       else
                    return middle+1; // position of match returned

    }
    return -1;   // no match found
}
int main() {

int a[]={1,3,4,12,13,56,64};

printf("\n pos=%d",binary_search_1_algorithm(13,a,7));

printf("\n pos=%d",binary_search_2_recursive_algorithm(13,a,0,6));
printf("\n pos=%d",binary_search(a,13,0,6));
getchar();
return 0;
}

