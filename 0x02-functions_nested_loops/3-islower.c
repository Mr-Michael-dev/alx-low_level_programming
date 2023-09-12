#include "main.h"

/**
 * _islower - function entry point
 * @c is a parameter of type int
 *
 * Description: checks for lowercase character
 *
 * Return: 1 if c is lowercase otherwise 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
