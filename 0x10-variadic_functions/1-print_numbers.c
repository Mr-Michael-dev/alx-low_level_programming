#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_numbers - print numbers followed by new line
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: nothing
 */


void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;


	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(arg, int));

		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(arg);

	printf("\n");
}
