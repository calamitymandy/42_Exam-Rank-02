#include <stdlib.h>
#include <stdio.h>

int numlen(int nbr)
{
    int len;

    len = 0;
    if (nbr == 0)
        return (1);
    if (nbr < 0)
    {
        nbr = -nbr;
        len++;
    }
    while (nbr != 0)
    {
        nbr /= 10;
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
    {
        res[0] = '0';
    }
    if (nbr < 0)
    {
        res[0] = '-';
        nbr = -nbr;
    }
    while (nbr != 0)
    {
        res[len - 1] = (nbr % 10) + '0';
        nbr /= 10;
        len--;
    }
    return (res);
}

/*
int main(void)
{
    printf("%s", ft_itoa(-783920));
}
*/