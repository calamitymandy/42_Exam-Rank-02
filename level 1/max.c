#include <stdio.h>

int max(int *tab, unsigned int len)
{
    int i;
    int num;

    i = 1;
    num = tab[0];
    if (len == 0)
        return (0);
    while (i < len)
    {
        if (num < tab[i])
            num = tab[i];
        i++;
    }
    return (num);
}


/*int main(void) {
    int tab[] = {-56, -50, 0, -56};
    printf("%d", max(tab, 4));
}*/
