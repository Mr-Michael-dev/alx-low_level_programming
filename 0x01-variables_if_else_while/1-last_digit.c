#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/*
 * main - Entry point
 * @n is a variable of type int
 * @n_last variable of type int, stores last digit of n
 *
 * Description: This program will assign a random number
 * to the variable n each time it is executed.
 * The last digit of n is extrated using '%10'
 * and stored in another variable n_last.
 * It uses if_else to check whether the number stored in the variable n_last
 * is greater than or less than 6 and not 0 or is 0
 * Return: Always 0 (exit the program)
 */

int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	int n_last = n % 10;

	if (n_last  > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, n_last);
}
	else if (n_last < 6 && n_last > 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n_last);
}
	else
{
	printf("Last digit of %d is %d and is 0\n", n, n_last);
}
	return (0);
}
