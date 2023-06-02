#include <unistd.h>

void    ft_putnbr(int num)
{
    char digit;

    if (num >= 10)
        ft_putnbr(num / 10);
    
    digit = (num % 10) + 48;
    write(1, &digit, 1);
}

int main(int argc, char **argv)
{
    (void)argv;

    ft_putnbr(argc -1);
    write(1, "\n", 1);

    return (0);
}