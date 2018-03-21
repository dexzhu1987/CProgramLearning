#include <stdio.h>

void squeeze(char s1[], char s2[])
{
    int i, j, k;

    k = 0;

    while (s2[k] != '\0')
    {
        for (i = j = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] != s2[k])
                s1[j++] = s1[i];
        }
        k++;
        s1[j] = '\0';
    }
}

int firstLocation(char s1[], char s2[])
{
    int i, k;

    k = 0;

    while (s2[k] != '\0')
    {
        for (i = 0; s1[i] != '\0'; i++)
        {
            if (s1[i] == s2[k])
            {
                return i;
            }
        }
        k++;
    }

    return -1;
}

int main()
{
    char s1[] = "abbbcbceg";
    char s2[] = "cdeaert";
    printf("%d\n", firstLocation(s1, s2));
    squeeze(s1, s2);
    printf("%s\n", s1);

    return 0;
}