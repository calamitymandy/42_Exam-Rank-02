#include <stdio.h>

int	max(int* tab, unsigned int len)
{
	int i = 1;
	int res = tab[0];

	if (len == 0)
		return (0);
	while (i < len)
	{
		if (tab[i] >= res)
			res = tab[i];
		i++;
	}
	return (res);
}

/*QUIT MAIN!!!!!!
int	main(void)
{
	int arr[] = {-12, -5, 2, -3, 1256, 0};
	printf("%d", max(arr, 5));
}
*/
