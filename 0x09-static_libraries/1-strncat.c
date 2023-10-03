#include "main.h"

/**
 * _strncat - concatenates atmost n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: the number of strings to print
 *
 * Return: concat
 */

char *_strncat(char *dest, char *src, int n)
{
	char *concat = dest;
	int nBytes = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0' && nBytes < n)
	{
		*dest = *src;
		dest++;
		src++;
		nBytes++;
	}

	*dest = '\0';

	return (concat);
}
