#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int len;
    int *res;
    int i = 0;

    if (start <= end)
        len = end - start;
    else
        len = start - end;

    res = malloc(sizeof(int) * len);

    if (start <= end)
    {
        while (start <= end)
        {
            res[i++] = start;
            start++;
        }
    }
    else
    {
        while (start >= end)
        {
            res[i++] = start;
            start--;
        }
    }
    return (res);
}
/*
int main(void)
{
    int i = 0;
    while (i <= 2041)
    {
        int *arr = ft_range(0, 2039);
        printf("%d\n", arr[i]);
        i++;
    }
}
*/