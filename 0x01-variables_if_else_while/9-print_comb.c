#include <stdio.h>

/**
 * main - Entry point
 * @num1 and @num2 are variables of type int
 *
 * Description: This program prints all possible combinations of
 * single-digits number
 *
 * Return: Always 0
 */

int main(void)
{
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = 0; num2 <= 9; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);

		if (num1 != 9 || num2 != 9)
		{
			putchar(',');
			putchar(' ');
		}
		}
	}
	putchar('\n');
	return (0);
}
