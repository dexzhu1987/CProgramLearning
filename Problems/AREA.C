#include <stdio.h>

int main()
{
    long double radius = 0.0L;
    long double area = 0.0L;
    const double pi = 3.1415926535890L;

    printf("Enter your radius\n");
    scanf("%Lf\n", &radius);
    area = pi * radius * radius;
    printf("The area of WITH RADIUS %.2LF is %.12Lf\n", radius, area);
}