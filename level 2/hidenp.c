#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int count = 0;
    int len = 0;

    if (argc == 3)
    {
        while (argv[1][i])
            i++;
        len = i;
        i = 0;
        while (argv[1][i] && count < len)
        {
            while (argv[2][j])
            {
                if (argv[1][i] == argv[2][j])
                {
                    count++;
                    i++;
                    j++;
                }
                else
                    j++;
            }
            i++;
        }
        if (count == len)
            write (1, "1", 1);
        else
            write (1, "0", 1);
    }
    write (1, "\n", 1);
    return (0);
}