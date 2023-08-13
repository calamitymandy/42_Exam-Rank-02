#include <unistd.h>

int main(int argc, char **argv)
{
    int i;
    int j;

    i = 1;
    j = 0;

    if (argc >= 2)
    {
        while (argv[i])
        {
            while(argv[i][j])
            {
                if (argv[i][j] >= 'A' && argv[i][j] <= 'Z' 
                && argv[i][j - 1] != ' ' && argv[i][j - 1] != '\t' 
                && j != 0)
                    argv[i][j] += 32;
                else if ((argv[i][j] >= 'a' && argv[i][j] <= 'z') 
                && (argv[i][j - 1] == ' ' || argv[i][j - 1] == '\t' || j == 0))
                    argv[i][j] -= 32;
                write (1, &argv[i][j], 1);
                j++;
            }
            j = 0;
            write(1, "\n", 1);
            i++;
        }
    }
    else 
        write(1, "\n", 1);
    return (0);
}