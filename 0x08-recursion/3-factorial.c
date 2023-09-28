#include "main.h"

/**
 * factorial - returns the factorial of a given number
 * @n: number to be factored
 *
 * Return: factorial
 */

int factorial(int n)
{
	int facto;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}

	facto = n * factorial(n - 1);

	return (facto);
}
