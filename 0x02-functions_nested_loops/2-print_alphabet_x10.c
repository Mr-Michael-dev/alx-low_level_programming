#include "main.h"

/**
 * print_alphabet_x10 - function entry point
 *
 * Description: This function prints lower case alphabets 10 times
 *
 * Return:  void
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}

		_putchar('\n');
	}
}
