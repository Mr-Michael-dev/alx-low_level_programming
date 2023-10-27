#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 1 if little endianness and 0 if big endianness
 */

int get_endianness(void)
{
	int num = 1;
	char *byte = (char *)&num;

	if (*byte == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
