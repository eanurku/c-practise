#include<stdio.h>
int main()
{
    int a=9;
    char *p;
    void *ptr = &a;
                          // void type size is 1

    printf("--%d---",*(int *)ptr);
    printf("\n%d",sizeof(p));
    return 0;
}
