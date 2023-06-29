#include "main.h"

/**
* cap_string - capitalizes all the words in a string.
* @strng: the string
* Return: capitalized string.
*/

char *cap_string(char *strng)
{
int x, y;
int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

x = 0;
while (*(strng + x) != '\0')
{
if (*(strng + x) >= 'a' && *(strng + x) <= 'z')
{
if (x == 0)
{
*(strng + x) = *(strng + x) -32;
}
else
{
for (y = 0; y <= 12; y++)
{
if (a[y] == *(strng + x - 1))
{
*(strng + x) = *(strng + x) -32;
}
}
}
}
x++;
}
return (strng);
}
