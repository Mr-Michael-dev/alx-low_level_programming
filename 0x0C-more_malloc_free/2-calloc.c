#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates mem for an array using malloc
 * @nmemb: n member of elements
 * @size: size in bytes of each element
 *
 * Return: pointer to allocated mem
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	unsigned int i;
	char *byte_ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	mem = malloc(size * nmemb);

	if (mem == NULL)
	{
		return (NULL);
	}

	byte_ptr = (char *)mem;

	for (i = 0; i < (size * nmemb); i++)
	{
		byte_ptr[i] = 0;
	}

	return (mem);
}
