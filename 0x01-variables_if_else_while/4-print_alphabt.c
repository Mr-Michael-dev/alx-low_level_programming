#include <stdio.h>

/**
 * main - Entry point
 * @q is a variable of type char
 *
 * Description: This program prints the alphabet in lowercase
 * and return a new line except letters q and e
 *
 * Return: Always 0 (exit the program)
 */

int main(void)
{
	char q;

	q = 'a';

	while (q <= 'z')
{
	if (q != 'q' && q != 'e')
{
	putchar(q);
}
	q++;
}
	putchar('\n');
	return (0);
}
