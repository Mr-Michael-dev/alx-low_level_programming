#include "main.h"

/**
 * positive_or_negative - Entry point
 * @n is a variable of type int
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * It uses if_else to check whether the number stored
 * in the variable n is positive or negative.
 *
 * Return: Always 0 (exit the program)
 */

void positive_or_negative(int i)
{
	if (i > 0)
{
	printf("%d is positive\n", i);
}
	else if (i < 0)
{
	printf("%d is negative\n", i);
}
	else
{
	printf("%d is zero\n", i);
}
}
