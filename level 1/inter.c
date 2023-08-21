/**
 * Prints the characters from the first argument that are also present 
 * in the second argument.
 * 
 * The first loop iterates through each character in argv[2] and
 * `used[(int)argv[2][i]] = 1;` sets to 1 the value of the `used` array 
 * at the index corresponding to the ASCII value of character `argv[2][i]`.
 * 
 * The 2nd loop iterates through each character in argv[1] and
 * checks if it was set to 1 in the `used` array (meaning it exists in argv[2])
 * and if that is the case, it sets it to 0 to avoid doubles in argv[1] 
 * and write it.
 * 
 */
#include <unistd.h>

int main(int argc, char **argv)
{
    int i = 0;
    int used[256] = {0};

    if (argc == 3)
    {
        while (argv[2][i])
        {
            used[(int)argv[2][i]] = 1;
            i++;
        }
        i = 0;
        while (argv[1][i])
        {
            if (used[(int)argv[1][i]])
            {
                used[(int)argv[1][i]] = 0;
                write (1, &argv[1][i], 1);
            }
            i++;
        }
    }
    write (1, "\n", 1);
    return (0);
}