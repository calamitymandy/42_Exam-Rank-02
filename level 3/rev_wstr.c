#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int start = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			i++;
			start = i - 1;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			i = start;
			if (start >= 0)
				write (1, " ", 1);
			i--;
		}
	}
	write (1, "\n", 1);
	return (0);
}
