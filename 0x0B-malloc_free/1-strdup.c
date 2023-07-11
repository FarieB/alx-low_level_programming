#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * *_strdup - unction that returns a pointer
  * to a newly allocated space in memory
  * @str: string
  * @malloc: obtains memory of the new string
  * @free: frees up memory
  * Return: NULL if str = NULL
  * pointer to the duplicated string on success
  */

char *_strdup(char *str)

{
	char *duplicate;
	int ratio, i = 0;

	if (str == NULL)
		return (NULL);

	for (ratio = 0; str[ratio]; ratio++)
		i++;

	duplicate = malloc(sizeof(char) * (i + 1));

	if (duplicate == NULL)
		return (NULL);

	for (ratio = 0; str[ratio]; ratio++)
		duplicate[ratio] = str[ratio];

	duplicate[i] = '\0';

	return (duplicate);
}
