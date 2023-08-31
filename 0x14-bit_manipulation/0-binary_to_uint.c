#include "main.h"

/**
* binary_to_uint - converts a binary number to unsigned int
* @b: pointer to the string
*
* Return: the converted number, or 0 if
* there is one or more chars in the string b that is not 0 or 1
*/

unsigned int binary_to_uint(const char *b)

{
	unsigned int result = 0;

	do {

		if (*b < '0' || *b > '1')
			return (0);
	result = 2 * result + (*b - '0');
	b++;

	} while (*b != '\0');

return (result);
}

