#include <stdio.h>

void sumtwo(int a, int b, int c, int d)
{
    printf("the anding of %d and %d is %d\n", a, b, a & b);
    printf("the oring of %d and %d is %d\n", a, b, a | b);
    printf("the exclusive oring of %d and %d is %d\n", a, b, a ^ b);
    printf("the right shift of %d of %d is %d\n", a, b, a << b);
    printf("the left shift of %d of %d is %d\n", a, b, a >> b);
    printf("left shit zero  of %d is %d\n", c, c << 0);
    // printf("left shifted -1 is %d\n", d >> -1);
}

int main()
{
    int a, b, c, d;
    printf("Please enter 4 integer numbers\n");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    sumtwo(a, b, c, d);

    return 0;
}