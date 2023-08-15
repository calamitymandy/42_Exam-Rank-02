#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int end;

    i = 0;
    if (argc == 2)
    {
        while (argv[1][i + 1])
            i++;
        while ((argv[1][i] == ' ' || argv[1][i] == '\t') && i >= 0)
            i--;
        end = i;
        i = 0;
        while (i <= end && argv[1][i])
        {
            while ((argv[1][i] == ' ' || argv[1][i] == '\t'))
                i++;
            while (argv[1][i] && i <= end && argv[1][i] != ' ' && argv[1][i] != '\t')
            {
                write(1, &argv[1][i], 1);
                i++;
            }
            if ((argv[1][i] == ' ' || argv[1][i] == '\t') && i <= end)
                write(1, " ", 1);
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}