#include <stdio.h>
/**
 *
 * prints the size of various types
 *
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeo	    f(char));
	printf("Size of an int: %d byte(s)\n", sizeo	    f(int));
	printf("Size of a long int: %d byte(s)\n", s	    izeof(long int));
	printf("Size of a long long int: %d byte(s)\	    n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", size	    of(float));
	return(0);
}