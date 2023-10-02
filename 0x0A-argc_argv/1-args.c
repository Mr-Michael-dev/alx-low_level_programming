#include <stdio.h>

/**
 * main - prints the number of arg followed by a new line
 * @argc: nunber of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void)argv;
	if (argc > 1)
	{
	printf("%d \n", argc);
	}

	return (0);
}
