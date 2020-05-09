#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[], char *envp[])
{
    execve("/bin/cat", argv, envp);
    
    // If execve fails, the following code will be reached
    perror("execve failed");
    
    return 1;  // Indicate an error
}
