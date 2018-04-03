#include <stdio.h>
#include <stdlib.h> //exit()
#include <fcntl.h>  // open(), write()
#include <errno.h>

//a program that read and write files, copy content from one file and paste into other

int main(int argc, char *agrv[])
{
    // file handlers : read from foo, write to bar
    int fin, fout; /* input and output handlers */
    char buffer[16384];
    int count;

    if ((fin = open("foo", O_RDONLY)) < 0)
    {
        perror("foo");
        exit(1);
    }
    if ((fout = open("bar", O_WRONLY | O_CREAT, 0644)) < 0)
    {
        perror("bar");
        exit(1);
    }

    while ((count = read(fin, buffer, 16384)) > 0)
    {
        write(fout, buffer, count);
    }
    close(fin);
    close(fout);

    return 0;
}
