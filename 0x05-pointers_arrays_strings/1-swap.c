#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to the first value be swapped
 * @b: pointer to the second value to be swapped
 *
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	int h = *a;

	*a = *b;
	*b = h;
}
