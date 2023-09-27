#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int num1 = atoi(argv[1]);
		int num2 = atoi(argv[2]);
		int res = 0;

		if (num1 < num2)
			res = num1;
		else 
			res = num2;

		while (res != 0)
		{
			if (num1 % res == 0 && num2 % res == 0)
			{
				printf("%d", res);
				break;
			}
			res--;
		}
	
	}
	printf("\n");
	return (0);
}
