#include <unistd.h>
#include <stdio.h>

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

void putnbr(int num)
{
	char to_write;

	if (num > 9)
		putnbr(num / 10);
	to_write = num % 10 + '0';
	write (1, &to_write, 1);
}

int main(int argc, char **argv)
{
	int i = 2;
	int num = 0;
	int sum = 0;

	if (argc == 2 && argv[1][i] != '-')
	{
		num = ft_atoi(argv[1]);
		while (i <= num)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
		putnbr(sum);
		write (1, "\n", 1);
	}
	else
		write (1, "0\n", 2);
	return (0);
}
