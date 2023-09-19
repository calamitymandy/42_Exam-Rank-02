#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int len = 0;

	if (argc == 3)
	{
		while (argv[2][j] && argv[1][i])
		{
			if (argv[1][i] == argv[2][j])
				i++;
			j++;
		}
		if (!argv[1][i])
			write (1, "1", 1);
		else
			write (1, "0", 2);
	}
	write (1, "\n", 1);
	return (0);
}
