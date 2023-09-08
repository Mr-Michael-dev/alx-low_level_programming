#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 * @n is a variable of type int
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * It uses if_else to check whether the number stored
 * in the variable n is positive or negative.
 *
 * Return: Always 0 (exit the program)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)
{
	printf("%d is positive\n", n);
}
	else if (n < 0)
{
	printf("%d is negative\n", n);
}
	else
{
	printf("%d is zero\n", n);
}

	return (0);
}
