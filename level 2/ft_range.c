#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
    int i = 0;
    int len = end - start;
    if (len < 0)
        len = -len;

    int *arr = malloc(sizeof(int) * len);

    if (start <= end)
    {
        while (i <= len)
        {
            arr[i] = start;
            start++;
            i++;
        }
    }
    else if (end < start)
    {
        while (i <= len)
        {
            arr[i] = start;
            start--;
            i++;
        }
    }
    return (arr);
}

/*
int main(void)
{
    int i = 0;
    int len = 17;
    int *res = ft_range(2, -15);
    while (i <= len)
    {
        printf("%d\n", res[i]);
        i++;
    }
}
*/