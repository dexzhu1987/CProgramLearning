#include <stdio.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

int main()
{

    int fd;
    fd = open("myfile", O_WRONLY | O_CREAT, 0644);
    if (fd < 0)
    {
        printf("error number %d\n", errno);
        perror("Something went wrong.");
        exit(1);
    }
    write(fd, "Now I can make my computer do something\n", 40);
    close(fd);
    return 0;
}