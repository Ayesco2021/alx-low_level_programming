#include <stdio.h>

/**
*prints all single digit numbers of base 10 starting fr*om 0, followed by a new line
*main: print 0123456789 using putchar
*Return: Always 0 (success)
*/

int main(void)

{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

