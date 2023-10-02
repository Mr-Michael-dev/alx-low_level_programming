#include <stdio.h>

/**
 * main - prints all arguments it receives followed by a new line
 * @argc: nunber of arguments
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}

	return (0);
}
