#include <stdio.h>
// 0 : false
// everything else: true
typedef char *string;
int main()
{
    char s[] = "Hello";
    char *str = s;
    string h = "Hello";
    while (*str != '\0')
    {
        // (*str)++;  vs  *(str++);
        printf("%c\n", *(str++));
    }

    printf("%s\n", s);
    printf("%s\n", str);
    printf("%s\n", h);
    int x;

    // (x = 10) returns 10 (assignment operator returns right hand side value)
    int z = (x = -10) ? 100 : 10;
    printf("%d\n", z);

    int d = 100;         // int * : pointer to an int
    int *p = &d;         // & : address of
    printf("%d\n", *p);  // *p : dereference (content of)
    printf("%p\n", ++p); // %p : formatter for pointer
    p++;
    p++; // incrementing an int pointer moves 4 bytes
    printf("%d\n", *p);
}