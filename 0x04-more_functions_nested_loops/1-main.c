#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char c;

    c = 'r';
    printf("%c: %d\n", c, _isdigit(c));
    c = '2';
    printf("%c: %d\n", c, _isdigit(c));
    return (0);
}
