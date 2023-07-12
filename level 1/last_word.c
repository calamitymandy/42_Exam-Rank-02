#include <unistd.h>
#include <stdio.h>

int    ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i])
        i++;
    return(i);
}

int main(int argc, char **argv)
{
    if (argc == 2)
    {
        int len;
        
        len = ft_strlen(argv[1]) -1;
        while (argv[1][len] == ' ' || argv[1][len] == '\t')
            len--;
        while (argv[1][len])
        {
            if (argv[1][len -1] == ' ' || argv[1][len -1] == '\t' || len == 0)
            {
                while (argv[1][len] != '\0' && argv[1][len] != ' ')
                {
                    write(1, &argv[1][len], 1);
                    len++;
                }
                write (1, "\n", 1);
                return (0);
            }
            len--;
        }
        return (0);
    }
    else
    write (1, "\n", 1);
    return (0);
}