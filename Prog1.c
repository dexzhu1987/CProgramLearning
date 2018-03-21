#include <stdio.h>

#define MAX 1000

int getLine(char s[], int lim)
{
    int c, i;
    for (i = 0; i < lim - 1; ++i)
    {
        c = getchar(); // <-> putchar('a');
        if (c == EOF)  // ctrl D or C
        {
            break;
        }
        if (c == '\n')
        {
            break;
        }
        s[i] = c;
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

int atoi(char s[])
{
    int i, n;
    n = 0;
    for (i = 0; s[i] >= '0' && s[i] <= '9'; i++)
    {
        n = 10 * n + (s[i] - '0');
    }
    return n;
}

// Convert an uppercase character to a lowercase character
int lowercase(char ch)
{
    if (ch >= 'A' && ch <= 'Z')
    {
        return ch + 'a' - 'A';
    }
    else
    {
        return ch;
    }
}

// Convert Hexadecimal to Decimal integer
int htoi(char s[])
{
    int result = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        result = result * 16;
        if (s[i] >= '0' && s[i] <= '9')
        {
            result += s[i] - '0';
        }
        if (s[i] >= 'A' && s[i] <= 'F')
        {
            result += (s[i] - 'A') + 10;
        }
    }
    return result;
}

// Squeeze
void squeeze(char s[], int ch)
{
    int i, j;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        if (s[i] != ch)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

void squeeze2(char s[], char t[])
{
    int i, j, k;
    int flag = 0;
    for (i = j = 0; s[i] != '\0'; i++)
    {
        flag = 0;
        for (k = 0; t[k] != '\0' && !flag; k++)
        {
            if (t[k] == s[i])
            {
                flag = 1; // matching char exists
            }
        }
        if (!flag) // if it doesn't exist(match)
        {
            s[j++] = s[i];
        }
    }
    s[j] = '\0';
}

// Returns the first location in the string s where any char from the
// string t occurs. Otherwise, -1
int any(char s[], char t[])
{
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; t[j] != '\0'; j++)
        {
            if (t[j] == s[i])
            {
                return i;
            }
        }
    }
    return -1;
}

void strCat(char s[], char t[])
{
    int i = 0, j = 0;

    while (s[i] != '\0')
    {
        i++;
    }
    while ((s[i++] = t[j++]) != '\0')
        ;
}

int main()
{
    // char myStr[MAX];
    // int numOfChars = getLine(myStr, MAX);
    // printf("Number Characters: %d\n", numOfChars);
    // int a = atoi("12345");
    // printf("%d\n", a + 10);

    printf("%d\n", htoi("11"));
    char s[] = "Apple";
    char t[] = "iPhone";
    // squeeze(s, 'p');
    // printf("%s\n", s);
    strCat(s, t);
    printf("%s\n", s);
    return 0;
}
