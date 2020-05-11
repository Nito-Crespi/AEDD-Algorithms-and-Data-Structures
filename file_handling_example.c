#include <stdio.h>
#include <fcntl.h>
#include <errno.h>

int main() {
    int fd;

    /* Open a nonexistent file */
    fd = open("nonexist.txt", O_RDONLY);
    if (fd == -1) {
        printf("errno1 = %d\n", errno);
        perror("main1");
    }

    /* Try to open a directory */
    fd = open("/", O_WRONLY);
    if (fd == -1) {
        printf("errno2 = %d\n", errno);
        perror("main2");
    }

    /* Try to open or create a file */
    fd = open("nonexist.txt", O_RDONLY | O_CREAT, 0644);
    printf("errno3 = %d\n", errno); /* Value of errno after a successful call */
    perror("main3");

    errno = 0; /* Manually reset the errno variable */
    perror("main4");

    return 0;
}
