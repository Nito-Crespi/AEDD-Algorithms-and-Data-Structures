#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h> // Added for exit

int main(void)
{
    pid_t pid;
    int status; // Changed from int *i to int status

    pid = fork();

    if (pid == -1)
    {
        perror("Fork failed");
        return 1; // Indicate an error
    }

    if (pid == 0)
    {
        printf("I am the child\n");
        // Child process exits with a status code
        exit(0);
    }
    else
    {
        wait(&status);
        printf("I am the parent\n");
    }

    return 0;
}
