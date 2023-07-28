#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i;
    int end;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        end = i - 1;
        while (argv[1][end] == ' ' || argv[1][end] == '\t')
            end--;
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i] && i <= end)
        {
            if (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                write (1, "   ", 3);
                while (argv[1][i] == ' ' || argv[1][i] == '\t')
                    i++;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}