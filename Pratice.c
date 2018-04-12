#include <stdio.h>

int main()
{
    int arrf[10], arrs[10];
    int i, x, j, k;
    printf("Input 10 elenments in the array\n");
    for (i = 0; i < 10; i++)
    {
        printf("Position %d:", i);
        scanf("%d", &arrf[i]);
    }

    printf("The elements stored in the FIRST array are:\n");
    printf("[");
    for (j = 0; j < 9; j++)
    {
        printf("%d,", arrf[j]);
    }
    printf("%d]\n\n", arrf[9]);

    for (j = 0; j < 10; j++)
    {
        arrs[i] = arrf[i];
    }

    printf("The elements stored in the SECOND array are:\n");
    printf("[");
    for (k = 0; k < 9; k++)
    {
        printf("%d,", arrf[k]);
    }
    printf("%d]\n", arrf[9]);

    return 0;
}