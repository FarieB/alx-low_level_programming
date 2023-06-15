#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */
int main(void)
{
char charType;
int intType;
long int longIntType;
long long int longLongIntType;
float floatType;

printf("Size a of char: %zu byte(s)\n", sizeof(charType));
printf("Size an of int: %zu byte(s)\n", sizeof(intType));
printf("Size a of long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size a of long long int: %zu byte(s)\n", sizeof(longLongIntType));
printf("Size a of float: %zu byte(s)\n", sizeof(floatType));

return (0);

}

