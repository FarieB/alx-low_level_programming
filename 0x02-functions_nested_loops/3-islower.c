#include "main.h"
/**
 * _islower - check whether a character is a lowercase.
 * Return: 1 for lowercase letter, 0 if not lowercase letter.
 */
int _islower(int c)
	int c;
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
