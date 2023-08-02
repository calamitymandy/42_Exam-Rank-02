#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int bignum;
    int smallnum;
    int res;

    if (argc == 3)
    {
        if ((atoi(argv[1])) < (atoi(argv[2])))
        {
            smallnum = atoi(argv[1]);
            bignum = atoi(argv[2]);
        }
        else
        {
            smallnum = atoi(argv[2]);
            bignum = atoi(argv[1]);
        }
        res = smallnum;
        
        while (res > 0)
        {
            if ((bignum % res == 0) && (smallnum % res == 0))
            {
                printf("%d\n", res);
                return (0);
            }
            res--;
        }
    }
    else
        write (1, "\n", 1);
    return (0);
}
