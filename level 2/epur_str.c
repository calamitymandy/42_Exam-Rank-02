#include <unistd.h>
#include <stdio.h>

/**
 * First find the end without spaces.
 * Then find the start of the forst word.
 * finally do the loop to write the string, whith inside another loop 
 * to go on when there is spaces, until i + 1 is different of ' ' && '\t'
 * BE CAREFUL THIS TIME IT'S && and not ||
 */
int main(int argc, char **argv)
{
    int i;
    int end;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i])
                i++;
        while (argv[1][i -1] == ' ' || argv[1][i -1] == '\t')
            i--;
        end = i -1;
        i = 0;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
        i++;
        while (argv[1][i] && i <= end)
        {
            while (argv[1][i] == ' ' || argv[1][i] == '\t')
            {
                if (argv[1][i + 1] != ' ' && argv[1][i + 1] != '\t')
                    write (1, " ", 1);
                i++;
            }
            write (1, &argv[1][i], 1);
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}