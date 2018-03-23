#include <stdio.h>

int main()
{
    // int i = 5, j = 4, k;
    // double f = 5.0, g = 4.0, h;

    // k = i / j;
    // printf("%i\n", k); // 1
    // h = f / g;
    // printf("%.2f\n", h); // 1.25
    // h = i / j;
    // printf("%.2f\n", h); // 1.00

    int i = 5, j = 4;
    double f;

    f = (double)i / j;
    printf("%.2f\n", f); // 1.25
    f = i / (double)j;
    printf("%.2f\n", f); // 1.25
    f = (double)i / (double)j;
    printf("%.2f\n", f); // 1.25
    f = (double)(i / j);
    printf("%.2f\n", f); // 1.00

    // Bool - there is no boolean data type in C, use integer!
    // The value of 0 (or 0.0) is false.
    // Any other value, 1, -1, 0.3, -12.5 is true.
    char x;
    if (10)
    {
        printf("Hello\n");
    }
    if (0)
    {
        printf("Bye\n");
    }
    int k = 5;
    int m;
    m = 10 > k;
    printf("%d\n", m); // 1

    return 0;
}