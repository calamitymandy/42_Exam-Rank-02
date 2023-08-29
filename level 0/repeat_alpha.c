#include <unistd.h>
#include <stdio.h>

int main(int argc, char **argv)
{
    int i = 0;
    int mult = 0;

    if (argc == 2)
    {
        while (argv[1][i])
        {
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                mult = (argv[1][i] - 'a');
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                mult = (argv[1][i] - 'A');
            
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z' ||
            argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                while (mult > 0)
                {
                    write(1, &argv[1][i], 1);
                    mult--;
                }
            }

            write(1, &argv[1][i], 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}