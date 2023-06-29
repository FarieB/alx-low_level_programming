#include "main.h"

/**
 * leet - changing vowels to numbers.
 * @strng: the string used
 * Return: String changed to numbers
 */

char *leet(char *strng)
{
	char l[] = "aeotlAEOTL";
	char n[] = "4307143071";
	int i = 0;
	int j;

	while (*(strng + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(strng + i) == l[j])
			{
				*(strng + i) = n[j];
			}
		}
		i++;
	}
	return (strng);
}
