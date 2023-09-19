#include "main.h"

/**
 * _strlen - uses pointer to get the size of a string
 * @s: pointer to the string to be checked
 *
 * Return: size of the string
 */

int _strlen(char *s)
{
	int leng = 0;
	int i = 0;
	
	while(s[i] != '\0')
	{
		leng ++;
		i ++;
	}
	return (leng);
}
