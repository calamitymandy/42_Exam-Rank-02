#include <unistd.h>

void putnbr(int num)
{
    char to_write;

    if (num > 9)
        putnbr(num / 10);

    to_write = num % 10 + '0';
    write (1, &to_write, 1);
}

int main(int argc, char **argv)
{
    (void)argv;
    putnbr(argc -1);
    write(1, "\n", 1);
}