#include "main.h"

/**
 * print_rev - prints string it points to in reverse
 * @s: pointer to the string to be printed
 *
 * Return: void
 */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
