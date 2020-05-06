#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>

int main(void)
{
    int fd, newfd;
    char cadena[5] = "Hiii\n";  // Updated the string to "Hiii" and added newline
    char cadena1[5] = "Byee\n"; // Updated the string to "Byee" and added newline

    fd = open("test.txt", O_CREAT | O_WRONLY, 0644);
    if (fd == -1) {
        perror("Error opening the file");
        return 1;
    }

    newfd = dup(fd);
    if (newfd == -1) {
        perror("Error duplicating file descriptor");
        close(fd);
        return 1;
    }

    write(newfd, cadena, sizeof(cadena) - 1); // sizeof(cadena) includes '\0', so subtract 1
    write(fd, cadena1, sizeof(cadena1) - 1);
    
    close(fd);

    return 0;
}
