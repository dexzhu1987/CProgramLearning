#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void go_help()
{
    printf("go go name   : go to name dir\n");
    printf("go ls        : list all directories registered.\n");
    printf("go add name  : add current dir as name to the list\n");
    printf("go rm name   : remove name dir from the list.\n");
}

void go_ls()
{
    char line[256];
    char name[16], path[128];
    FILE *fp;
    fp = fopen("/Users/dexunzhu/.g.conf", "r");
    if (!fp)
    {
        exit(0);
    }
    while (fgets(line, 256, fp) != NULL)
    {
        sscanf(line, "%s %s", name, path);
        printf("%s -> %s\n", name, path);
    }

    fclose(fp);
}

int main(int argc, char *argv[])
{

    if (argc < 2 || argc > 3)
    {
        fprintf(stderr, "usage: %s help\n", argv[0]);
        exit(1);
    }

    if (strcmp(argv[1], "help") == 0)
    {
        go_help();
    }

    if (strcmp(argv[1], "ls") == 0)
    {
        go_ls();
    }

    if (strcmp(argv[1], "go") == 0)
    {
        const char *target = argv[1];
        char directory[1024];

        getcwd(directory, sizeof(directory));
        printf("In %s\n", directory);

        if (chdir(target) == 0)
        {
            getcwd(directory, sizeof(directory));
            printf("In %s\n", directory);
        }
        return 0;
    }
}