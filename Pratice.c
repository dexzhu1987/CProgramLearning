#include <stdio.h>

void reverse(int arr[]);

void sum(int arr[]);

int main()
{
    int arrf[10], arrs[10];
    int i, x, j, k, p;
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

    for (p = 0; p < 10; p++)
    {
        arrs[p] = arrf[p];
    }

    printf("The elements stored in the SECOND array are:\n");
    printf("[");
    for (k = 0; k < 9; k++)
    {
        printf("%d,", arrs[k]);
    }
    printf("%d]\n\n", arrs[9]);

    reverse(arrs);

    sum(arrs);

    return 0;
}

void reverse(int arr[])
{
    int z;
    printf("The elements stored in the REVERSE order are:\n");
    printf("[");
    for (int z = 9; z > 0; z--)
    {
        printf("%d,", arr[z]);
    }
    printf("%d]\n\n", arr[0]);
}

void sum(int arr[])
{
    int m = 0, z;
    int *first = &arr[0];
    for (int z = 0; z < 10; z++)
    {
        m += *first;
        printf("%d\n", *first);
        first++;
    }
    printf("The sum of array is %d\n", m);
}