#include "function_pointers.h"

/**
 * array_iterator - iterates over an array and executes given function
 * @array: array to interate over
 * @size: size of the array
 * @action: funtion pointer(points to function to execute)
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
