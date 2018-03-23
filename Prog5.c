#include <stdio.h>
int addTwo(int a, int b);                             //option 1
int (*callback)(int, int);                            //create funciton pointer;
int response(int (*callback)(int, int), int x, int y) //taking a function pointer/function as a parameter, so it get the content of this function
{
    return callback(x, y);
};

int strrindex(char s[], char t[])
{
    int i, q;
    i = q = 0;
    while (s[++i] != '\0')
        ;
    while (t[++q] != '\0')
        ;
    i--;
    q--;
    while (i >= 0 && q >= 0)
    {
        if (s[i] == t[q])
        {
            q--;
        }
        i--;
    }

    if (q < 0)
    {
        return i + 1;
    }
    else
    {
        return -1;
    }
}

int strrindex2(char s[], char t)
{
    int i, pos = -1;
    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == t)
        {
            pos = i;
        }
    }
    return pos;
}

int main()
{
    int a = 20, b = 10;
    int (*fptr)(int, int);
    //option 2:
    //function pointer
    fptr = addTwo;
    printf("%d + %d = %d\n", a, b, fptr(a, b));   //option 2
    printf("%d + %d = %d\n", a, b, addTwo(a, b)); //option 1

    int res = response(addTwo, 10, 20);
    printf("response: %d\n", res);

    char s[] = "Hello World";
    char t[] = "e";
    printf("%d\n", strrindex(s, t));

    return 0;
}

int addTwo(int a, int b)
{
    return a + b;
}
