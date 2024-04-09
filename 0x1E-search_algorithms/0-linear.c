#include "search_algos.h"
/**
 * linear_search - searches for a value in an array of integers
 * @array: pointer the the first elemant of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located or -1 is not present
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
