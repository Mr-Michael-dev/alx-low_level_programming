#include "main.h"

/**
 * _puts - uses pointer to print the string its points to, to stdout
 * @str: pointer to the string to be printed
 *
 * Return: void
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
