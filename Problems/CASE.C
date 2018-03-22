#include <stdio.h>

int lower(int c)
{
    if (c >= 'A' && c <= 'Z')
        return c + 'a' - 'A';
    else
        return c;
};

int main()
{
    char ch;
    int lowercase;
    printf("Enter your character\n");
    scanf("%c\n", &ch);
    lowercase = lower(ch);
    printf("The lowercase of %c is %c\n", ch, lowercase);
}
