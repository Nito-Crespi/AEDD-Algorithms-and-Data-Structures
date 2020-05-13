#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main() {
    int d;

    // Open or create the file for writing only
    d = open("test.txt", O_CREAT | O_WRONLY, 0644);
    if (d == -1) {
        perror("Error opening the file");
        return 1;
    }

    // Close the standard output (stdout) and duplicate the file descriptor
    close(1);
    if (dup(d) == -1) {
        perror("Error duplicating file descriptor");
        return 1;
    }

    // Now, printf will write to the file
    printf("This will be written to the file!!!\n");

    // Close the file descriptor
    close(d);

    return 0;
}
