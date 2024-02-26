#include  <stdio.h>
#include  <sys/types.h>
int  main()
{   int pid;
   // pid_t pid = fork();
    if (pid == 0)
        printf("Child process created\n");
    else
        printf("Parent process created\n");
    return 0;
}
