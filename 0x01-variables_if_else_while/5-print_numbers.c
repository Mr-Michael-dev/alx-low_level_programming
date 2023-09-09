#include <stdio.h>

/**
 * main - Entry point
 * @num is a variable of type int
 *
 * Description: This program prints single digit numbers of base 10
 * start from 0 and return a new line
 *
 * Return: Always 0 (exit the program)
 */

int main(void)
{
	int num;

	num  = 0;

	while (num < 10)
{
	printf("%d", num);

	num++;
}

	putchar('\n');
	return (0);
}
