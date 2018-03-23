#include <stdio.h>
int addTwo(int a, int b);
int (*callback)(int, int);
int response(int (*callback)(int, int), int x, int y)
{
    return callback(x, y);
}

int main()
{
    int a = 20, b = 10;
    int (*fptr)(int, int);
    fptr = addTwo;
    int res = response(addTwo, 10, 20);
    printf("response: %d\n", res);

    printf("%d + %d = %d\n", a, b, fptr(a, b));
    return 0;
}

int addTwo(int a, int b)
{
    return a + b;
}
