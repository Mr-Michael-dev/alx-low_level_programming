#include "main.h"

/**
 * _sqrt_recursion - returns the natural square rooy of a number
 * @n: number to be checked
 * @guess: guess sqrt
 *
 * Return: sqrt
 */

int _sqrt_helper(int n, int guess);

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt_helper(n, 0));
}


/**
 * _sqrt_helper - helper function to checks the sqrt of n
 * @n: number to be check
 * @guess: guess sqrt
 *
 * Return: recursive
 */

int _sqrt_helper(int n, int guess)
{
	if (guess * guess == n)
	{
		return (guess);
	}
	if (guess * guess > n)
	{
		return (-1);
	}

	return (_sqrt_helper(n, guess + 1));
}
