#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char of size
 * and initiallize it with a specific char
 * @size: size of array to be initiallized
 * @c: the character to initialize with
 *
 * Return: pointer to the array or NULL if it fails
 */

char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(sizeof(char) * size);

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
	arr[i] = c;
	}

	return (arr);
}
