#include <stdio.h>

int main (void)
{
	int i,j;

	printf("1 2 3 4 5 \n");
	for(j=1; j<=6; j++)
	{
		for(i=0; i<j; i++)
		{
			printf("*");
		}
		printf("\n");
	}
	return(0);
}
