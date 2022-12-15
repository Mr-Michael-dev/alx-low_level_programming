#include <stdio.h>
/**
 * main - main block
 * Discription: prints the aphabeth in lower case
 * then in upper case and add a new line
 * Return: 0
 */
int main(void)
{
	char alpha = 'a';

	while (alpha <= 'z')

	{
	putchar(alpha);
	alpha++;
	}
	alpha = 'A';
	while (alpha <= 'Z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');

	return (0);
}
