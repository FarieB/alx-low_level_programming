#include "main.h"

/**
* *_strcpy - fucntion that copies a string
* @dest: points to destination value
* @src: points to a string
* Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)

{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

return (dest);

}
