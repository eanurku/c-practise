#include<stdio.h>
int main()
{
    int a=9;
    char *p;
    void *ptr = &a;
                          // void type pointer size is 8

    printf("--%d---",*(int *)ptr);
    printf("\n%d",sizeof(ptr));
    return 0;
}
