#include <unistd.h>

int	main(int argc, char **argv)
{
	int i = 0;
	int used[256] = {0};

	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (!used[argv[1][i]])
			{
				used[argv[1][i]] = 1;
				write (1, &argv[1][i], 1);
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (!used[argv[2][i]])
			{
				used[argv[2][i]] = 1;
				write (1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
