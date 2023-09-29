#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int end = 0;

	if (argc == 2)
	{
		while (argv[1][i])
			i++;
		end = i - 1;
		while (end >= 0 && (argv[1][end] == ' ' || argv[1][end] == '\t'))
			end--;
		i = 0;
		while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i++;
			while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			{
				write (1, &argv[1][i], 1);
				i++;
			}
			if (argv[1][i] && i < end)
				write (1, " ", 1);
		}
	}
	write (1, "\n", 1);
	return (0);
}
