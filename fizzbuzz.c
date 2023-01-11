#include <unistd.h>
#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int k;

    i = 1;
    while (i <= 100)
    {
        if (i)
        if (i < 10)
        {
            j = i + 48;
            write(1, &j, 1);
        }
        else if (i > 10)
        {
            j = i / 10 + 48;
            k = i % 10 + 48;
            write (1, &j, 1);
            write (1, &k, 1);
        }
        write(1, "\n", 1);
        i++;
    }
    
}