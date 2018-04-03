#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// how to read command line
// ./Hello en (or jp, ch, kr, sp)
int main(int argc, char *argv[]) //*argv[]==**argv
{

    if (argc != 2)
    {

        // fprintf(stderr, "usage: ./Hello %s\n", argv[1]);
        printf("invalid arguemnts: use ./Hello en\n");
        exit(1);
    }

    if (strcmp(argv[1], "en") == 0)
    {
        printf("%s: Hello\n", argv[1]);
    }
    else if (strcmp(argv[1], "jp") == 0)
    {
        printf("%s: Konnichiwa\n", argv[1]);
    }
    else if (strcmp(argv[1], "es") == 0)
    {
        printf("%s: Hola\n", argv[1]);
    }
    else if (strcmp(argv[1], "ch") == 0)
    {
        printf("%s: Nihao\n", argv[1]);
    }
    else
    {
        printf("%s: Hi\n", argv[1]);
    }

    printf("%s\n", argv[0]);
    printf("%s\n", argv[1]);

    return 0;
}