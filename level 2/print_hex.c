#include <unistd.h>
#include <stdio.h>

int ft_atoi(char *str)
{
	int i = 0;
	int res = 0;
	int neg = 1;

	if (str[i] == '-')
	{
		neg = -1;
		i++;
	}
	while (str[i])
	{
		res *= 10;
		res += str[i] - '0';
		i++;
	}
	return (res * neg);
}

void putnbr_hex(int num)
{
	char hex[] = "0123456789abcdef";
	char to_write;
	if (num > 16)
		putnbr_hex(num / 16);
	to_write = hex[num % 16];
	write (1, &to_write, 1);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		int num = ft_atoi(argv[1]);
		putnbr_hex(num);
	}
	write (1, "\n", 1);
	return (0);
}
