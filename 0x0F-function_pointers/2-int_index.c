#include "function_pointers.h"

/**
 * int-index - searches for an integer
 * @array: array to interate over
 * @size: size of the array
 * @cmp: funtion pointer(compares integers)
 *
 * Return: index of first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (!(*cmp)(array[i]))
		{
			return (-1);
		}
	}

	return (i);
}
