#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverse the string it points to
 * @s: pointer to the string to be reversed
 *
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int start = 0;
	int end;

	while (s[i] != '\0')
	{
		i++;
	}

	end = i - 1;

	while (start < end)
	{
		char newEnd = s[start];

		s[start] = s[end];
		s[end] = newEnd;

		start++;
		end--;
	}
}
