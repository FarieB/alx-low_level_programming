#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function for pointer to a 2 dimensional array of integers
* @width: wdth of 2 dimensional array
* @height: height of 2 dimensional array
* Return: NULL on failure
* NULL If width or height is 0 or negative
*/

int **alloc_grid(int width, int height)
{
	int hyt_index, wth_index;
	int **grid;

	/* check if width or height is negative or zero */
	if (width <= 0 || height <= 0)
		return (NULL);

	/* allocate memory to the grid */
	grid = malloc(sizeof(int *) * height);

		if (grid == NULL)
			return (NULL);

	/* allocate memory for each row of the grid */
	for (hyt_index = 0; hyt_index < height; hyt_index++)
	{
		grid[hyt_index] = malloc(sizeof(int) * width);

		if (grid[hyt_index] == NULL)
		{
			for (; hyt_index >= 0; hyt_index--)
				free(grid[hyt_index]);

			free(grid);
			return (NULL);
		}
	}

	for (hyt_index = 0; hyt_index < height; hyt_index++)
	{
		for (wth_index = 0; wth_index < width; wth_index++)
			grid[hyt_index][wth_index] = 0;
	}
	return (grid);
}
