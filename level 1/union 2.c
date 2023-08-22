#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 1;
    int used[256] = {0};

    if (argc == 3)
    {
        while (i < 3)
        {
            int j = 0;
            while (argv[i][j])
            {
                if (!used[argv[i][j]])
                {
                    used[argv[i][j]] = 1;
                    write(1, &argv[i][j], 1);
                }
                j++;
            }
            i++;
        }
    }
    write(1, "\n", 1);
    return (0);
}