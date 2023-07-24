#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i;
    int j;

    i = 0;
    j = 0;
    while (s[i] != '\0')
    {
        while (reject[j] != '\0')
        {
            if (reject[j] == s[i])
                return (i);
            j++;
        }
        j = 0;
        i++;
    }
    return (i);
}

/*int main()
{
    printf("%zu\n", ft_strcspn("etadtrtestytytyty", "ae"));
    printf("%zu\n", strcspn("etadtrtestytytyty", "ae"));
}*/