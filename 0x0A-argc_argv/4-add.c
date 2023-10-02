#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/**
 * main - adds positive numbers
 * @argc: argument count
 * @argv: array of arguments
 *
 * Return: 0 always
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int num;
	int sum = 0;
	char *arg;

	if (argc == 1)
	{
		printf("0\n");
	} else if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			arg = argv[i];

			for (j = 0; arg[j] != '\0'; j++)
			{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
			}

			num = atoi(arg);
			sum += num;
		}
		printf("%d\n", sum);
	}
	return (0);
}
