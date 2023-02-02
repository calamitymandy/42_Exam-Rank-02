#include <stdio.h>
#include <stdlib.h>

int ft_numlen(int num)
{
    int len;

    len = 0;
    if (num == 0)
        return (1);
    if (num < 0)
        len++;
    while (num != 0)
    {
        num /= 10;
        len++;
    }
    return (len);
}

char	*ft_itoa(int nbr)
{
    char *str;
    int num;
    int len;

    len = ft_numlen(nbr);
    str = malloc(sizeof(char) * (len +1));
    str[len] = '\0';
    if (nbr < 0)
    {
        str[0] = '-';
        num = -nbr;
    }
    else
        num = nbr;
    if (num == 0)
        str[0] = '0';
    while (num != 0)
    {
        str[len -1] = (num % 10) + '0';
        num = num / 10;
        len--;
    }
    return (str);
}

/*int main(void)
{
    int nbr = 456;

    printf("%s", ft_itoa(nbr));
    return (0);
}*/