#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: pointer to memory to be filled
 * @src: pointer to byte to be copied
 * @n: number of bytes to be filled
 *
 * Return: pointer to the memory area s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
