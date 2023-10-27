#include "main.h"

/**
 * clear_bit - sets the bit of a value at given index to 0
 * @n: value
 * @index: index
 *
 * Return: 1 if success or -1 if fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	*n = *n & ~mask;
	return (1);
}

