#include <stdlib.h>
#include <stdio.h>

int numlen(int nbr)
{
    int len = 0;
    if (nbr == 0)
        len = 1;
    if (nbr < 0)
    {
        nbr = -nbr;
        len++;
    }
    while (nbr > 0)
    {
        nbr /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    int len = numlen(nbr);
    int num = nbr;
    char *res = malloc(sizeof(char) * (len + 1));
    res[len] = '\0';
    if (nbr == 0)
        res[0] = '0';
    if (nbr < 0)
    {
        num = -nbr;
        res[0] = '-';
    }
    while (num != 0)
    {
        res[len - 1] = (num % 10) + '0';
        num /= 10;
        len--;
    }
    return (res);
}

/*
int main(void)
{
    // printf("%d\n", numlen(-125));
    printf("%s\n", ft_itoa(23647));
}
*/