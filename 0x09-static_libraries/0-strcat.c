#include "main.h"

/**
* _strcat - concatenates two strings.
* @dest: string pointer to the destination
* @src: string to be concatenated
* Return: pointer to the resulting string dest
*/

char *_strcat(char *dest, char *src)

{
int StringLengthX, StringLengthY;

StringLengthX = 0;
StringLengthY = 0;

while (*(dest + StringLengthX) != '\0')
StringLengthX++;

while (*(src + StringLengthY) != '\0' &&  StringLengthX < 97)
{
*(dest + StringLengthX) = *(src +  StringLengthY);
StringLengthX++;
StringLengthY++;
}

*(dest +  StringLengthX) = '\0';
return (dest);
}
