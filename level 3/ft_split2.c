#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int	ft_wordlen(char *str)
{
	int i = 0;

	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char    **ft_split(char *str)
{
    int i;
    int letter;
    int word;
    char    **split;

    i = 0;
    word = 0;
    if (!(split = malloc(sizeof(char *) * ft_strlen(str) +1)))
        return (NULL);
    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    while (str[i])
    {
        letter = 0;
        if (!(split[word] = malloc(sizeof(char *) * ft_wordlen(str) +1)))
            return (NULL);
        while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            split[word][letter++] = str[i++];
        while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
            i++;
        split[word][letter] = '\0';
        word++;
    }
    split[word] = 0;
    return (split);
}

int main(void)
{
    char **word_split = ft_split("      a   ver que     tal  hop ");
    printf("%s\n", word_split[0]);
    printf("%s\n", word_split[1]);
    printf("%s\n", word_split[2]);
    printf("%s\n", word_split[3]);
    printf("%s\n", word_split[4]);
    printf("%s\n", word_split[5]);
    printf("%s\n", word_split[6]);
}