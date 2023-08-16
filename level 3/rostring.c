#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int start;
    int end;

    i = 0;
    if (argc >= 2)
    {
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        start = i;
        while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
            i++;
        end = i;
        while (argv[1][i] == ' ' || argv[1][i] == '\t')
            i++;
        while (argv[1][i])
        {
            while ((argv[1][i] == ' ' || argv[1][i] == '\t') && (argv[1][i + 1] == ' ' || argv[1][i + 1] == '\t'))
            {
                if (argv[1][i + 1] == '\t')
                    argv[1][i + 1] = ' ';
                i++;
            }
            write(1, &argv[1][i], 1);
            i++;
        }
        if ((argv[1][end -1] != argv[1][i -1]) && argv[1][i - 1] != ' ')
            write (1, " ", 1);
        while (start < end)
        {
            write (1, &argv[1][start], 1);
            start++;
        }
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    return (0);
}