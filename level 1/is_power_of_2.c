#include <stdio.h>

int	is_power_of_2(unsigned int n)
{
	if (n  == 0)
		return (0);
	while (n > 1)
	{
		if (n % 2 == 0)
			n /= 2;
		else
			return (0);
	}
	return (1);
}

/*QUIT MAIN!!!!!!!!!
int	main(void)
{
	printf("%d", is_power_of_2(1));
}
*/
