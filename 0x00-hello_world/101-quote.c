#include <stdio.h>
#include <unistd.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always return 1
 */

int main(void)
{
	const char *quote = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, quote, strlen(quote));

	return (1);
}
