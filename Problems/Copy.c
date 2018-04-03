#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>

int main(int argc, char *argv[])
{

    int fin, fout;
    char buffer[16384];
    int count;

    if (argc != 3)
    {
        printf("invalid arguemnts: use ./Copy source_file destination_file\n");
        exit(1);
    }

    if ((fin = open(argv[1], O_RDONLY)) < 0)
    {
        perror(argv[1]);
        exit(1);
    }
    if ((fout = open(argv[2], O_WRONLY | O_CREAT, 0644)) < 0)
    {
        perror(argv[2]);
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
