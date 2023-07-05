#include <stdio.h>
#include <unistd.h>

int ft_atoi(char *str)
{
    int num;
    int neg;

    num = 0;
    neg = 1;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            neg *= -1;
        str++;
    }
    while (*str && (*str >= '0' && *str <= '9'))
    {
        num = (num * 10) + (*str - 48);
        str++;
    }
    return (num * neg);
}

void    ft_putnbr(int num)
{
    char c;

    if (num >= 10)
        ft_putnbr(num / 10);
    c = (num % 10) + 48;
    write (1, &c, 1);
}

int is_prime(int num)
{
    int i;

    i = 2;
    if (num <= 1)
        return (0);
    while (i < num)
    {
        if (num % i == 0)
            return (0);
        i++;
    }
    return (1);
}

int main(int argc, char **argv)
{
    int sum = 0;

    if (argc == 2)
    {
        int num = ft_atoi(argv[1]);
        while (num > 0)
        {
            if (is_prime(num) == 1)
                sum += num;
            num--;
        }
        ft_putnbr(sum);
    }
    else
        ft_putnbr(0);
    write (1, "\n", 1);
}