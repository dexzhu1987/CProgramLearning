#include <stdio.h>

void sumtwo(int a, int b)
{
    printf("the sum is %d\n", a + b);
    printf("the differenc is %d\n", a - b);
    printf("the product is %d\n", a * b);

    double c = (double)a / b;
    int d = a % b;

    printf("the divided answers is %.2f\n", c);
    printf("the remainder is %d\n", d);
}

int main()
{
    sumtwo(19, 6);

    return 0;
}