#include "main.h"
/**
 * main - check whether a character is a lowercase letter from the English alphabet.
 * Return: 1 for lowercase letter, 0 if not lowercase letter.
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
