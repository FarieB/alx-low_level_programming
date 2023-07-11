#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *str_concat - function that concatenates two strings
  * @s1: string to be linked
  * @s2: second string to be linked
  * Return: NULL is string is empty
  * pointer to the location of newly linked strings
  */

char *str_concat(char *s1, char *s2)

{
	char *concat_str;
	int ratio, concat_ratio = 0, strlen = 0;

/* checke if s1 is null, if yes treat as an empty string */
	if (s1 == NULL)
		s1 = "";

/* checks if s2 is null, if yes treat as an empty string */
	if (s2 == NULL)
		s2 = "";

/* calculates the length of the string */
	for (ratio = 0; s1[ratio] || s2[ratio]; ratio++)
		strlen++;

	concat_str = malloc(sizeof(char) * strlen);

	if (concat_str == NULL)
		return (NULL);

/* copies s1 to the beginning of the result string */
	for (ratio = 0; s1[ratio]; ratio++)
		concat_str[concat_ratio++] = s1[ratio];

/* copies s2 to the end of the result string */
	for (ratio = 0; s2[ratio]; ratio++)
		concat_str[concat_ratio++] = s2[ratio];

	return (concat_str);
}
