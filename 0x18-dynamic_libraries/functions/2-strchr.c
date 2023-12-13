#include "main.h"

/**
  **_strchr - function to locate a character in a string
  *@s: string to search
  *@c: character to search for
  *Return: c in the string s, or NULL if not found
  */

char *_strchr(char *s, char c)

{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (s + a);
	}
	return ('\0');
}
