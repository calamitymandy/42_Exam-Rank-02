#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
    int num1 = atoi(&argv[1][0]);
    int num2 = atoi(&argv[2][0]);
    int lowest = 0;
    int highest = 0;
    int result = 0;

    if (argc == 3)
    {
        if (num2 <= num1)
        {
            lowest = num2;
            highest = num1;
        }
        else
        {
            lowest = num1;
            highest = num2;
        }
        while (lowest != 0)
            {
                if ((highest % lowest == 0) && (num2 % lowest == 0))
                {
                    printf("%d", lowest);
                    printf("\n");
                    printf("fuck");
                    return (0);
                }
                if ((highest % lowest == 0) && (num1 % lowest == 0))
                {
                    printf("%d", lowest);
                    printf("\n");
                    return (0);
                }
                lowest--;
            }
    }
    printf("\n");
    return (0);
}
