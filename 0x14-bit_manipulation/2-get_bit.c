#include "main.h"

/**
 * get_bit - get the bit of a value and given index
 * @n: value
 * @index: index
 *
 * Return: value of the bit or -1 if fail
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = 1UL << index;
	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

