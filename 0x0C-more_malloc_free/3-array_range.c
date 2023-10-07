#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minimum value
 * @max: maximum value
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *my_array;
	int i;
	int nmemb = (max - min) + 1;

	if (min > max)
	{
		return (NULL);
	}

	my_array = malloc(sizeof(int) * nmemb);

	if (my_array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < nmemb; i++)
	{
		my_array[i] = min + i;
	}

	return (my_array);
}
