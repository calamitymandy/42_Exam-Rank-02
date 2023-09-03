#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len;
    int *arr = malloc(sizeof(int) * len);

    if (end >= start)
    {
        len = end - start;
        while (end >= start)
        {
            arr[i] = start;
            start++;
            i++;
        }
    }
    else
    {
        len = start - end;
        while (start >= end)
        {
            arr[i] = start;
            start--;
            i++;
        }
    }
    return (arr);
}

/*
/// QUIT MAIN!!!!!!!
int main(void)
{
    int *arr = ft_range(0, -3);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
    printf("%d\n", arr[4]);
}
*/