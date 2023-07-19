#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that repeats an array
 * @array: the array
 * @size: size of the array
 * @action: pointer to the fucntion
*/

void array_iterator(int *array, size_t size, void (*action)(int))

{
	unsigned int i;

	if (array == NULL)
		return;
	if (action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
