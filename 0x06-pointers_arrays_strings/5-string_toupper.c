#include "main.h"

/**
 * string_toupper - changes lowercase letters of a string to uppercase
 * @strng: analized string.
 * Return: String with all letters Uppercased.
 */

char *string_toupper(char *strng)

{
	int i = 0;

	while (*(strng + i) != '\0')
	{
		if (*(strng + i) >= 'a' && *(strng + i) <= 'z')
		{
			*(strng + i) = *(strng + i) - 32;
		}
		i++;
	}
	return (strng);
}
