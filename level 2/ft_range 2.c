#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int len = 0;
	int i = 0;

	if (end > start)
		len = end - start;
	else
		len = start - end;

	int *arr = malloc(sizeof(int) * len);
	
	if (end > start)
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

/*QUIT MAIN!!!!!!!!
int	main(void)
{
	int *arr = ft_range(1, 4);
	
	printf("%d", arr[0]);
	printf("%d", arr[1]);
	printf("%d", arr[2]);
	printf("%d", arr[3]);
	printf("%d", arr[4]);
	printf("%d", arr[5]);
}
*/
