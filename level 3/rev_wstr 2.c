#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int start;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i + 1])
            i++;
        while (i >= 0)
        {
            while (argv[1][i - 1] != ' ' && argv[1][i - 1] != '\t' && i > 0)
                i--;
            start = i;
            while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t' )
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            i = start;
            if (i != 0)
                write (1, " ", 1);
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}