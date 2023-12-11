#include "main.h"

/**
 * _memset - fills memory it points to with a constant byte
 * @s: pointer to memory
 * @b: byte to be filled
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
