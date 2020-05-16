#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    pid_t pid;
    int status;

    pid = fork();

    if (pid == -1)
    {
        perror("Fork failed");
        return 1; // Indicate an error
    }

    if (pid == 0)
    {
        printf("I am the child of: %d\n", getppid());
    }
    else
    {
        wait(&status);
        printf("I am the parent of: %d\n", pid);
    }

    return 0;
}
