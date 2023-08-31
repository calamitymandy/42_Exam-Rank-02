#include <stdlib.h>
#include <stdio.h>


int main(int argc, char **argv)
{
    int i = 2;
    int num;

    if (argc == 2)
    {
        num = atoi(argv[1]);
        if (num == 1)
            printf("1");
        while (i <= num)
        {
            if (num % i == 0)
            {
                printf("%d", i);
                if (i == num)
                    break;
                printf("*");
                num /= i;
                i = 1;
            }
            i++;
        }
    }
    printf("\n");
}