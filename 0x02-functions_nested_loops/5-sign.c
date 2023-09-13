#include "main.h"

/**
 * print_sign - function entry point
 * @n: The number to be checked
 *
 * Description: checks the sign of a number
 *
 * Return: 1 if positive, 0 if 0 and -1 if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
