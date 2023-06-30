#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @strng: the string.
 * Return: String with letters in rot13.
 */

char *rot13(char *strng)

{
	char l[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0;
	int j;

	while (*(strng + i) != '\0')
	{
		for (j = 0; j <= 51; j++)
		{
			if (*(strng + i) == l[j])
			{
				*(strng + i) = rot13[j];
				break;
			}
		}
		i++;
	}
	return (strng);
}
