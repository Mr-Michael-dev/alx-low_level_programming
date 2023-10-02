#include <stdio.h>

/**
 * main - prints the program's name followed by a new line
 * @argc: nunber of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);

	return (0);
}
