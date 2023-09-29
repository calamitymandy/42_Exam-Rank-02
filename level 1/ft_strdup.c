#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
	int i = 0;

	while (src[i])
		i++;
	char *dup = malloc(sizeof(char) * (i + 1));
	if (!dup)
		return NULL;
	i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

/*QUIT MAIN
int	main(void)
{
	printf("%s", ft_strdup("Hello gorgeous!"));
}
*/

