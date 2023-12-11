#include "main.h"

/**
 * _strcpy - copies from a string to another
 * @dest: destination string
 * @src: source string
 *
 * Return: copy
 */

char *_strcpy(char *dest, char *src)
{
	char *copy = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (copy);
}
