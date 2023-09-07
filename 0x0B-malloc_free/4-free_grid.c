#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free a function
 * @grid: pointer to grid
 * @height: integer variable
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
