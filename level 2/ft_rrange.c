#include <stdio.h>
#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int len = 0;
    if (end >= start)
        len = end - start;
    else 
        len = start - end;
    int *arr = malloc(sizeof(int) * len);
    int i = 0;

if (end >= start)
{
    while (end >= start)
    {
        arr[i] = end;
        i++;
        end--;
    }
    return (arr);
}
else 
    while (start >= end)
    {
        arr[i] = end;
        i++;
        end++;
    }
    return (arr);

}
/*
////QUIT MAIN!!!!!!!!
int main(void)
{
    int *arr = ft_rrange(0, 0);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
    printf("%d\n", arr[2]);
    printf("%d\n", arr[3]);
}
*/