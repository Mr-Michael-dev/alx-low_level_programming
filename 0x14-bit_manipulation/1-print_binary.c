#include "main.h"

/**
 * print_binary - prints binary representation of a number
 * @n: number to be converted
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	if (n > 1)
	{
		print_binary(n >> 1);
	}

	_putchar('0' + (n & 1));
}
