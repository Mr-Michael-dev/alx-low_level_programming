#include <stdio.h>
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_binary(0);
    printf("\n");
    print_binary(1);
    printf("\n");
    print_binary(2);
    printf("\n");
    print_binary(10);
    printf("\n");
    print_binary((1 << 10) + 1);
    printf("\n");
    return (0);
}
