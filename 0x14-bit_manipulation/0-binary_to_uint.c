#include "main.h"

/**
 * binary_to_uint - converts a binary to an unsigned int
 * @b: pointer to the binary string7
 *
 * Return: the converted unsigned int
 */


unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	unsigned int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		decimal = (decimal << 1) | (b[i] - '0');
	}

	return (decimal);
}
