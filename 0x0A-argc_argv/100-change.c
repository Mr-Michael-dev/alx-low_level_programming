#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change forcam amount
 * @argc: number of CL argumemts
 * @argv: array of arguments
 *
 * Return: total number of cents
 */


int main(int argc, char *argv[])
{
	int cents;
	int coin_values[] = {25, 10, 5, 2, 1};
	int coin_counts[5] = {0};
	int total_coins = 0;
	int i;
	int j;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5; i++)
	{
		while (cents >= coin_values[i])
		{
			cents -= coin_values[i];
			coin_counts[i]++;
		}
	}

	for (j = 0; j < 5; j++)
	{
		total_coins += coin_counts[j];
	}

	printf("%d\n", total_coins);

	return (0);
}
