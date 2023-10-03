#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int value = 0;

	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				value = argv[1][i] - 'a';
				while (value >= 0)
				{
					write (1, &argv[1][i], 1);
					value--;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				value = argv[1][i] - 'A';
				while (value >= 0)
				{
					write (1, &argv[1][i], 1);
					value --;
				}
			}
			else
				write (1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
