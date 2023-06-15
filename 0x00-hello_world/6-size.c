#include <stdio.h>

/**
 * main - entry point
 *
 * Return: always 0 (success)
 */   
int main(void)
{
int intType;
char charType;
long int longIntType;
long long int longLongIntType;
float floatType;

printf("Size of int: %zu bytes\n", sizeof(intType));
printf("Size of char: %zu bytes\n", sizeof(charType));
printf("Size of long int: %zu bytes\n", sizeof(longIntType));
printf("Size of long long int: %zu bytes\n", sizeof(longLongIntType));
printf("Size of float: %zu bytes\n", sizeof(floatType));

return (0);

}

