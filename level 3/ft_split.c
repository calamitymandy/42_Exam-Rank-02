#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
    int i = 0;
    int word = 0;
    char **split;

    if (!(split = malloc(sizeof(char *) * 1000)))
        return NULL;

    while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
        i++;
    
    while (str[i])
    {
    int letter = 0;
        if (!(split[word] = malloc(sizeof(char) * 4096)))
            return NULL;
        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            split[word][letter++] = str[i++];
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        split[word][letter++] = '\0';
        word++;
    }
    split[word] = NULL;
    return (split);
}

/*
int main(void)
{
    char **split = ft_split("      a   ver que     tal  hop ");
    
    printf("%s\n", split[0]);
    printf("%s\n", split[1]);
    printf("%s\n", split[1]);
    printf("%s\n", split[3]);
    printf("%s\n", split[4]);
}
*/