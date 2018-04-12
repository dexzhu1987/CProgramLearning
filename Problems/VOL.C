#include <stdio.h>

int main()
{
    long double radius = 0.0L;
    long double volume = 0.0L;
    const double pi = 3.1415926535890L;
    long double height = 0.0L;

    printf("Enter your radius\n");
    scanf(" %Lf\n", &radius);

    printf("Enter your height\n");
    scanf(" %Lf\n", &height);
    volume = pi * radius * radius * height;
    printf("The volum of WITH RADIUS %.2LF with height %.2LF is %.12Lf\n", radius, height, volume);
}