#include "main.h"

/**
 * reverse_array - reverse the content of an array of integers
 * @a: array to be reversed
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int strt = 0;
	int stop = n - 1;
	int tmp;

	while (strt < stop)
	{
		tmp = a[strt];
		a[strt] = a[stop];
		a[stop] = tmp;

		strt++;
		stop--;
	}
}
