#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while(s[i])
    {
        while (reject[j])
        {
            if (s[i] == reject[j])
                return (i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}

/*
int main (void)
{
    printf("%lu", ft_strcspn("ttttttestttt", "es"));
    printf("%lu", strcspn("ttttttestttt", "es"));
}
*/