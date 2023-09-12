#include "main.h"

/**
 * print_alphabet - entry point
 *
 * Description: The function prints the alphabet a-z with a new line
 *
 * Return: always return 0
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
{
	_putchar(a);
}
	_putchar('\n');
}
