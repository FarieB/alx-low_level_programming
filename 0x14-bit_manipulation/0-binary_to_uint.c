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
	int a = 0;
	unsigned int result = 0;

	if (!b)
		return (0);

	do {
		if (b[a] < '0' || b[a] > '1')
			return (0);
	result = 2 * result + (b[a] - '0');
	a++;

	} while (b[a]);

return (result);
}

