#include "main.h"

/**
  **_strpbrk - function that searches a string for any of a set of bytes
  *@s: the string to search
  *@accept: string containing the bytes
  *Return: number of bytes in initial sgement @s
  */

char *_strpbrk(char *s, char *accept)

{
	int x, y;

	for (x = 0; *s != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (*s == accept[y])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
