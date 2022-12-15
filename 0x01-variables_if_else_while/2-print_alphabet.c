#include <stdio.h>
/**
 * main - main block
 * Description: Use `putchar` function to print alphabet in lowercase.
 * in new line
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
	putchar('\n');

	return (0);
}
