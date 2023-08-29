#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int start = 0;

    if (argc == 2)
    {
        while (argv[1][i])
            i++;
        i--;
        while (i >= 0)
        {
            if (i > 0 && argv[1][i] == ' ')
            {
                i++;
                start = i - 1;
                while (argv[1][i] && argv[1][i] != ' ')
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
                i = start;
            }
            if (i == 0)
            {
                while (argv[1][i] && argv[1][i] != ' ')
                {
                    write(1, &argv[1][i], 1);
                    i++;
                }
                i = 0;
            }
            i--;
        }
    }
    write(1, "\n", 1);
    return (0);
}