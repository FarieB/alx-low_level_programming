#include "main.h"

/**
 * _isupper - chacks if character is uppercase
 * @c: character variable
 *
 * Description: "the function checks if the character value is uppercase"
 *
 * Return: return 1 if uppercase or 0 if not
 *
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
