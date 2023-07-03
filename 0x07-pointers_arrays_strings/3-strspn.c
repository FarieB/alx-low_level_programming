#include "main.h"

/**
  *_strspn - function that gets the length of a prefix substring
  *@s: string to be searched
  *@accept: prefix to be measured
  *Return: number of bytes in string @s
  *containing only bytes from @accept
  */

unsigned int _strspn(char *s, char *accept)

{
	unsigned int bytes = 0;
	int a;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
			if (*s == accept[a])
			{
				bytes++;
				break;
			}
			else if (accept[a + 1] == '\0')

		s++;
	}

	return (bytes);

}
