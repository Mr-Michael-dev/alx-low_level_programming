#include "main.h"

/**
 * flip_bits - returns the number of bits needed to flip from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: bits flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flip;
	unsigned int flipped = 0;

	flip = n ^ m;

	while (flip > 0)
	{
		if (flip & 1)
		{
			flipped++;
		}
		flip >>= 1;
	}

	return flipped;
}
