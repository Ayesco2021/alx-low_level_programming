#include<stdio.h>

int factorial(int n)
{
	int res;
	int i; 

	res = 1;
	i = 1;

	while (i <= n)
	{
		res = res * i;
		i++;
	}
	return (res);

	if (n == 0)
	{
		return (0);
	}
	return (n * factorial(n - 1));
}

int main(void)
{
	int f;

	f = factorial(5);
	printf("5! = %d\n", f);
	return (0);
}
