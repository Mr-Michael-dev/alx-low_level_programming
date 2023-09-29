#include "main.h"

/**
 * is_prime_number - returns 1 of n is prime number otherwise 0
 * @n: number to be checked
 * @denominator: number to divide the guess
 *
 * Return: sqrt
 */

int _is_prime_helper(int n, int denominator);

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (_is_prime_helper(n, 2));
}


/**
 * _is_prime_helper - helper function to checks if n is prime
 * @n: number to be check
 * @denominator: number to divide the guess
 *
 * Return: recursive
 */

int _is_prime_helper(int n, int denominator)
{
	if (denominator * denominator > n)
	{
		return (1);
	}
	if (n % denominator == 0)
	{
		return (0);
	}

	return (_is_prime_helper(n, denominator + 1));
}
