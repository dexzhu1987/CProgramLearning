#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <errno.h>
#include <stdlib.h>
#include <string.h>

void go_help()
{
    printf("g name    　: go gto name dir.\n");
    printf("g ls      　: list all directions registered.\n");
    printf("g add name　: add current dir as name to the list.\n");
    printf("g rm name 　: remove name dir from the list.\n");
}

void go_ls()
{
    char line0[256];
    char name0[16], path0[128];
    FILE *fp;
    fp = fopen("/Users/dexunzhu/.g.conf", "r");
    if (!fp)
    {
        exit(0);
    }
    while (fgets(line0, 256, fp) != NULL)
    {
        sscanf(line0, "%s %s", name0, path0);
        printf("%s -> %s\n", name0, path0);
    }

    fclose(fp);
}

void go_add(char argv[])
{

    char cwd[1024];
    getcwd(cwd, sizeof(cwd));

    char line[256];
    char name[16], path[128];
    FILE *fp;
    fp = fopen("/Users/dexunzhu/.g.conf", "a");
    if (!fp)
    {
        exit(0);
    }

    char str[16384];
    strcpy(str, "");

    char line1[256];
    while (fgets(line1, 256, fp) != NULL)
    {
        strcpy(str, line1);
    }

    char *blank = " ";
    char *newline = "\n";
    strcat(str, newline);
    strcat(str, argv);
    strcat(str, blank);
    strcat(str, cwd);
    fprintf(fp, "%s", str);

    fclose(fp);
}

void go_remove(char argv[])
{

    FILE *fp;
    FILE *fp2;
    fp = fopen("/Users/dexunzhu/.g.conf", "r");
    fp2 = fopen("/Users/dexunzhu/replica.c", "w");
    if (!fp)
    {
        exit(0);
    }

    char str2[16384];
    char line2[256];
    char name2[16], path2[128];
    while (fgets(line2, 256, fp) != NULL)
    {
        sscanf(line2, "%s %s", name2, path2);
        if (strcmp(argv, name2) != 0)
        {
            strcat(str2, line2);
        }
    }

    char temp[16384];
    int i = 0;
    if (str2[strlen(str2) - 1] == '\n')
    {
        while (str2[i + 2] != '\0')
        {
            temp[i] = str2[i];
            i++;
        }
        temp[i] = '\0';
    }
    else
    {
        strcpy(temp, str2);
    }

    fputs(temp, fp2);

    fclose(fp);
    fclose(fp2);

    remove("/Users/dexunzhu/.g.conf");
    rename("/Users/dexunzhu/replica.c", "/Users/dexunzhu/.g.conf");
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

    if (strcmp(argv[1], "rm") == 0)
    {
        go_remove(argv[2]);
    }

    if (strcmp(argv[1], "add") == 0)
    {
        go_add(argv[2]);
    }
    return 0;
}