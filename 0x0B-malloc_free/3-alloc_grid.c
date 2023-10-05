#include "main.h"

/**
 * alloc_grid - returns a pointer to a two dimensional array of integers
 * @width: number of row of the two_d_array
 * @height: number of columns of the two_d_array
 *
 * Return: pointer to array or NULL if width or height is < 0
 */


int **alloc_grid(int width, int height)
{
	int i;
	int j;
	int **two_d_array;

	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}

	two_d_array = (int **)malloc(sizeof(int *) * height);
	
	if (two_d_array == NULL)
	{
		return (NULL);
	}
	

	for (i = 0; i < height; i++)
	{
		two_d_array[i] = (int *)malloc(sizeof(int) * width);
		if (two_d_array[i] == NULL)
		{
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			two_d_array[i][j] = 0;
		}
	}

	return (two_d_array);
}
