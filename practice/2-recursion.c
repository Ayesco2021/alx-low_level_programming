#include <stdio.h>

unsigned int sumdigit(unsigned int num)
{
	/** base value */
	if (num == 0)
		return (0);
	return ((num % 10) + sumdigit(num / 10));
}

int main(void)
{
	printf("%d\n", sumdigit(256));
	return (0);
}
