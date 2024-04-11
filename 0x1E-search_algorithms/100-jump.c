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
	size_t a = 0;
	size_t b = sqrt(size);

	while (array[b - 1] < value && b < size)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a = b;
		b = b + sqrt(size);
	}

	printf("Value found between indexes [%ld] and [%ld]\n", a, b);


	while (a < b && array[a] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", a, array[a]);
		a += 1;
	}

	if (array[a] == value)
	{
		return (a);
	}

	return (-1);
}
