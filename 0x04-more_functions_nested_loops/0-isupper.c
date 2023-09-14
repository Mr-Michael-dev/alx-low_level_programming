#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: parameter to be checked
 *
 * Return: 1 if argument is uppercase otherwise 0
 */

int _isupper(int c)
{
	int i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (c == i)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
