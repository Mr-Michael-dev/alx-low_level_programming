#include <stdio.h>

/**
 * main - prints number from 1 - 100 followed by a new line
 * for multiples of 3 print Fizz
 * for multiples of 5 print Buzz
 * for multiples of 3 and 5 print FizzBuzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
