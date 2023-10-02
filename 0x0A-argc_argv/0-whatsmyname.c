#include <stdio.h>

/**
 * main - prints the program's name followed by a new line
 * @ac: nunber of arguments
 * @av: array of arguments
 *
 * Return: 0 always
 */

int main(int ac, char *av[])
{
	(void)ac;
	printf("%s \n", av[0]);

	return (0);
}
