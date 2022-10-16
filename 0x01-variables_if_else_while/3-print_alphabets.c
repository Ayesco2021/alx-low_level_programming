#include <stdio.h>

/**
*main - print alphABET (upper and lower case)
*Print a new line
*Return: Always 0 (success)
*/

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');

	return (0);
}

