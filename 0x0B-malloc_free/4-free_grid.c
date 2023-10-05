#include "main.h"

/**
 * free_grid - frees the memory to a two dimensional array of integers
 * @grid: grid to be freed
 * @height: number of columns of the grid
 *
 * Return: void
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
