#include <stdio.h>
#include "main.h"

/**
* positive_or_negative - It will check n positive or negative
* @n: value to be checked
* Return: 0
*/
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
}
