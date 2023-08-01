/* limits.h to know the INT_MIN || INT_MAX if needed.
 * num = (num * 10) + (str[i] - '0'):
 * Convert a character digit to its corresponding integer value 
 * and add it to the `num` variable. (num * 10) is used to get 
 * the current number and then add the next character digit to the int
 */

#include <stdio.h>
#include <limits.h>


int	ft_atoi(const char *str)
{
    int i = 0;
    int num = 0;
    int neg = 1;

    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg = - 1;
        i++;
    }

    while (str[i] && str[i] >= '0' && str[i] <= '9')
    {
        num = (num * 10) + (str[i] - '0'); 
        i++;
    }
    return (num * neg);
}

/*
int main(void)
{
    printf("%d\n", ft_atoi("-123894"));
    printf("%d", INT_MIN);
}
*/