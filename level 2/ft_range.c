#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int i = 0;
	int len = 0;

	if (start <= end)
		len = end - start;
	else 
		len = start - end;

	int *arr = malloc(sizeof(int) * len);
	if (start <= end)
	{
		while (start <= end)
		{
			arr[i] = start;
			i++;
			start++;
		}
	}
	else
	{
		while (start >= end)
		{
			arr[i] = start;
			i++;
			start--;
		}
	}
	return (arr);
}

/*QUIT MAIN!!!!!!!
int	main(void)
{
	int *range = ft_range(0, -3);
	printf("%d\n", range[0]);
	printf("%d\n", range[1]);
	printf("%d\n", range[2]);
	printf("%d\n", range[3]);
	printf("%d\n", range[4]);
	printf("%d\n", range[5]);
}
*/
