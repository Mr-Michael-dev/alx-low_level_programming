#include "main.h"

/**
 * jack_bauer - prints every minute of the day from 00:00
 * @i, j, k, l: first integer 0
 *
 * Return: always void
 */

void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 3; j++)
		{
		for (k = 0; k <= 5; k++)
		{
		for (l = 0; l <= 9; l++)
		{
			_putchar('0' + i);
			_putchar('0' + j);
			_putchar(':');
			_putchar('0' + k);
			_putchar('0' + l);
			_putchar('\n');
		}
		}
		}
	}
}
