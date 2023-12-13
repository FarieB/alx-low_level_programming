#include "main.h"

/**
* _strncat - concatenate strings, defining the size of second string.
* @dest: string pointer to the destination
* @src: string to be concatenated
* @n: size of second string
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
int LengthX, LengthY;

LengthX = 0;
LengthY = 0;

while (*(dest + LengthX) != '\0')
LengthX++;

while (*(src + LengthY) != '\0' && LengthX < 97 && LengthY < n)
{
*(dest + LengthX) = *(src +  LengthY);
LengthX++;
LengthY++;
}
*(dest + LengthX) = '\0';
return (dest);
}
