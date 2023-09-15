#include <unistd.h>
#include <stdio.h>

void	print_bits(unsigned char octet)
{
	int i = 8;
	unsigned char bit = 0;

	while (i--)
	{
		if (octet & 1 << i)
			write (1, "1", 1);
		else
			write (1, "0", 1);
	}
}

/*
int main(void)
{
	unsigned char octet = 3;
	print_bits(octet);
}
*/
