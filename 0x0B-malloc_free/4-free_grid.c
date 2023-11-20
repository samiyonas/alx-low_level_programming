#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free allocated memory
 * @alloc_grid: pointer to 2D array
 * @height: number of row of 2D array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
