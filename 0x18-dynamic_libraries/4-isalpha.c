#include "main.h"

/**
 * _isalpha - function entry point
 * @c: The character to be checked
 *
 * Description: checks for alphabetical character
 *
 * Return: 1 if c is lowercase or uppercase letter otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
