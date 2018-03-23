#include <stdio.h>
#define NELEMS(x) (sizeof(x) / sizeof(x[0]))

/* 
    Exercise 4-1
    Write the function strrindex(s, t), which returns 
    the position of the rightmost occurrence of t in s,
    or -1 if there is none.
*/
int strrindex(char s[], char t)
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

/*
    Binary Search
    precondition: sorted
*/

int binsearch(int target, int arr[], int num)
{
    int lower = 0;
    int upper = num - 1;
    printf("upperbound: %d\n", upper);
    while (lower <= upper)
    {
        int mid = (lower + upper) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] < target)
        {
            lower = mid + 1;
        }
        else if (arr[mid] > target)
        {
            upper = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("sizeof(arr): %lu\n", sizeof(arr));
    printf("sizeof(int): %lu\n", sizeof(int));
    printf("length of the arr: %lu\n", sizeof(arr) / sizeof(int));
    printf("7 is at index %d in arr\n", binsearch(7, arr, 10));

    return 0;
}