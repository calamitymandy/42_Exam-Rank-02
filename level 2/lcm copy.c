#include <stdio.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	int num = 0;
	if (a == 0 || b == 0)
		return (0);
	if (a >= b)
		num = a;
	else 
		num = b;
	while (num % a != 0 || num % b != 0)
		num++;

	return(num);
}

/*QUIT MAINNNNNN

int main(void)
{
	printf("%d", lcm(1, 2));
}
*/
