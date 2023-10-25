#include <unistd.h>
#include <stdio.h>

void	putnbr(int num)
{
	char	to_write;
	if (num > 9)
		putnbr(num / 10);
	to_write = num % 10 + '0';
	write (1, &to_write, 1);
}

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	while (str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res);
}

int is_prime(int num)
{
	int i = 2;
	if (num == 0 || num == 1)
		return (0);
	while (i < num)
	{
		if (num % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int i = 1;
	int num = 0;
	int res = 0;
		
	if (argc == 2 && argv[1][0] != '-')
	{
		num = ft_atoi(argv[1]);
		while (i <= num)
		{
			if (is_prime(i))
				res += i;
			i++;
		}
		putnbr(res);
	}
	else 
		write (1, "0", 1);
	write (1, "\n", 1);
	return (0);
}
