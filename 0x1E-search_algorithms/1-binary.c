#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer the the first elemant of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: first index where the value is located or -1 is not present
 */

int binary_search(int *array, size_t size, int value)
{
	size_t i;
	size_t low = 0;
	size_t high = size - 1;
	size_t mid = 0;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
			{
				printf(", ");
			}
		}
		printf("\n");

		mid = (low + high) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		else if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}

	return (-1);
}
