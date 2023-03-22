#include <stdio.h>

unsigned int    lcm(unsigned int a, unsigned int b)
{
    int n;

    if (a == 0 || b == 0)
        return (0);

    if (a > b)
        n = a;
    else
        n = b;
    
    while (a != '\0')
    {
        if (n % a == 0 && n % b == 0)
            return (n);
        n++;
    }
    return (0);
}

/*int main(void)
{
    printf("%d", lcm(3, 8));
}*/