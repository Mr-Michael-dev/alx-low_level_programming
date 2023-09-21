#include "main.h"

/**
 * _strncpy - copies n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: the number of strings to copy
 *
 * Return: copy
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *copy = dest;
	int nBytes = 0;

	while (*src != '\0' && nBytes < n)
	{
		*dest = *src;
		dest++;
		src++;
		nBytes++;
	}

	*dest = '\0';

	return (copy);
}
