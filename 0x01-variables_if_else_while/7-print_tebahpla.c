#include <stdio.h>

/**
 * main - Entry point
 * @alpha is a variable of type char
 *
 * Description: This program prints the lowercase  alphabet
 * in reverse form and return a new line
 *
 * Return: Always 0 (exit the program)
 */

int main(void)
{
	char alpha;

	alpha = 'z';

	while (alpha >= 'a')
{
	putchar(alpha);

	alpha--;
}

	putchar('\n');
	return (0);
}
