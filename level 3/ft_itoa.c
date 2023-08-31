#include <stdlib.h>
#include <stdio.h>

int numlen(int num)
{
    int len = 0;

    if (num == 0)
        return (1);
    if (num < 0)
    {
        num = -num;
        len++;
    }
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    int len = numlen(nbr);
    char *res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0';

    if (nbr == 0)
        res[0] = '0';
    if (nbr < 0)
    {
        nbr = -nbr;
        res[0] = '-';
    }
    while (nbr && len)
    {
        res[len -1] = nbr % 10 + '0';
        nbr /= 10;
        len--;
    }
    return (res);
}
/*
/////QUIT THAT MAIN!!!!!!!
int main(void)
{
    //printf("%d", numlen(-12345));
    printf("%s", ft_itoa(0));
}
*/