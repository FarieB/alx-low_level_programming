#include "main.h"

/**
 * get_endianness - function that checks the endianness
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)

{
	unsigned int num = 1;
	unsigned char *c = (unsigned char *) &num;

	return (*c == 1);
}
