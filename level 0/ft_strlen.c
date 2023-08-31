#include <stdio.h>

int	ft_strlen(char *str)
{
    int i = 0;

    while (str[i])
        i++;
    return (i);
}

/*
//QUIT MAIN!!!!!!!
int main(void)
{
    printf("%d", ft_strlen(""));
}
*/