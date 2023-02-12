#include <unistd.h>
#include <stdio.h>

int ft_atoi(const char *str)
{
    int i;
    int num;
    int neg;

    i = 0;
    num = 0;
    neg = 1;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] != '\0' && (str[i] >= '0' && str[i] <= '9'))
    {
        num = (num * 10) + (str[i] - '0');
        i++;
    }
    return (num * neg);
}

/*int main(void)
{
    printf("%d", ft_atoi("-79075"));
}*/