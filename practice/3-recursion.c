#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isVowel(char c)
{
	switch (tolower(c))
	{
		case 'a':
		case 'e':
		case 'o':
		case 'u':
			return (1);
		default:
			return (0);
	}
}

int countVowels(char *str)
{
	if (strlen(str) == 0)
		return (0);
	return isVowel(str[0]) + countVowels(str + 1);
}

int main(void)
{
	printf("%i\n", countVowels("promotionAA"));
	return (0);
}
