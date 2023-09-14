#include "main.h"
#include <stdio.h>

/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'Z';
    printf("%c: %d\n", c, _isupper(c));
    c = 'e';
    printf("%c: %d\n", c, _isupper(c));
    return (0);
}
