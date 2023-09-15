#include "main.h"

/**
 * more_numbers - print 10 times the numbers
 * from 0 to 14 followed by a new line
 *
 * Return: void
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i < 10; i++)
	{
		for (k = 0; k < 15; k++)
		{
			_putchar('0' + k);
		}
		_putchar('\n');
	}
}
