#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the number of arg followed by a new line
 * @a: number to multiply
 * @b: number to multiply
 *
 * Return: 0 always
 */

int multiply(int a, int b);

int main(int argc, char *argv[])
{
	int arg1;
	int arg2;
	int result;

	if (argc == 3)
	{
		arg1 = atoi(argv[1]);
		arg2 = atoi(argv[2]);
		result = multiply(arg1, arg2);

		printf("%d\n", result);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}


/**
 * multiply - multiplies two numbers
 * @a: number to multiply
 * @b: number to multiply
 *
 * Return: result
 */

int multiply(int a, int b)
{
	int result = a * b;

	return (result);
}
