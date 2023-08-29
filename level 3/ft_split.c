#include <stdlib.h>
#include <stdio.h>

char **ft_split(char *str)
{
    char **split;
    int i = 0;
    int word = 0;

    if (!(split = malloc(sizeof(char *) * 1000)))
        return (NULL);

    while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;

    while (str[i])
    {
        int letter = 0;
        if (!(split[word] = malloc(sizeof(char) * 4096)))
            return (NULL);

        while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
            split[word][letter++] = str[i++];
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        split[word][letter] = '\0';
        word++;
    }
    split[word] = 0;
    return (split);
}

/*
// QUIT MAIN!!!!!
int main(void)
{
    char **split = ft_split("ceci    est un   test");
    printf("%s\n", split[0]);
    printf("%s\n", split[1]);
    printf("%s\n", split[2]);
    printf("%s\n", split[3]);
    printf("%s\n", split[4]);
    printf("%s\n", split[5]);
}
*/