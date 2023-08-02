#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;

    if (argc == 2)
    {
        int start;
        while (argv[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            if (argv[1][i] == ' ')
            {
                start = i + 1;
                while (argv[1][start] != ' ' && argv[1][start])
                {
                    write (1, &argv[1][start], 1);
                    start++;
                }
                write (1, " ", 1);
            }
            else if (i == 0)
            {
                start = i;
                while (argv[1][start] != ' ' && argv[1][start])
                {
                    write (1, &argv[1][start], 1);
                    start++;
                }
            }
            i--;
        }
    }
    write (1, "\n", 1);
    return (0);
}