#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 and exits the code
 */

int main(void)
{
	printf("Size of char: %zu bytes\n", sizeof(char));
	printf("Size of int: %zu bytes\n", sizeof(int));
	printf("Size of long int: %zu bytes\n", sizeof(long int));
	printf("Size of long long: %zu bytes\n", sizeof(long long));
	printf("Size of float: %zu bytes\n", sizeof(float));
	printf("Size of double: %zu bytes\n", sizeof(double));
	printf("Size of long double: %zu bytes\n", sizeof(long double));
	printf("Size of pointer: %zu bytes\n", sizeof(void*));
	return 0;
}

