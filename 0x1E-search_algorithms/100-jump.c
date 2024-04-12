#include "search_algos.h"
#include <math.h>

/**
 * jump_search - searches for a value in an array of integers
 * @array: pointer the the first elemant of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located or -1 is not present
 */


int jump_search(int *array, size_t size, int value)
{
	size_t a = 0, i = 0;
	size_t b = floor(sqrt(size));

	if (!array)
	{
		return (-1);
	}

	while (b < size && array[b] < value)
	{

		printf("Value checked array[%ld] = [%d]\n", b, array[b]);
		a = b;
		b = b + floor(sqrt(size));

		if (a >= size)
		{
			return (-1);
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);

	for (i = a; i < size && i <= b; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
