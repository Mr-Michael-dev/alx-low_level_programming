#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * print_strings - print strings followed by new line
 * @n: number of parameters
 * @separator: string to be printed between numbers
 *
 * Return: nothing
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	unsigned int i;
	char *string;


	va_start(arg, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(arg, char *);
		(string == NULL) ?
		printf("(nil)") :
		printf("%s", string);

		if (i < n - 1 && separator != NULL)
		{
		printf("%s", separator);
		}
	}
	va_end(arg);

	printf("\n");
}
