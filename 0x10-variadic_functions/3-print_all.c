#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - prints anything specified
 * @format: format specifiers
 *
 * Return: nothing
 */


void print_all(const char * const format, ...)
{
	int j = 0;
	char *sep = ", "
	va_list arg;

	va_start(arg, format);
	while (format && format[j])
	{
		while (format[j] == 'c' || format[j] == 'i' || format[j] == 'f' || format[j] == 's')
		{
			if (format[i] == 'c'
		}
	}
	va_end(arg);
	printf("\n");
}
