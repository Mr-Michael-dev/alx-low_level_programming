#include "main.h"

/**
 * _sqrt_recursion - returns the natural square rooy of a number
 * @n: number to be checked
 *
 * Return: sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (0);
	}
	
	return (n / _sqrt_recursion(n - 1));
}
