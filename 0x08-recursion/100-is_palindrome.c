#include "main.h"

/**
 * is_palindrome - returns 1 if a string is a palindrome otherwise 0
 * @s: string to be checked
 *
 * Return: 1 if palindrome or 0 if not
 */

int _strlen(char *s);
int is_palindrome_helper(char *s, int start, int end);

int is_palindrome(char *s)
{
	int length = _strlen(s);

	return (is_palindrome_helper(s, 0, length - 1));
}

/**
 * _strlen - returns the length of a string
 * @s: pointer to string
 *
 * Return: length
 */

int _strlen(char *s)
{
	int length = 0;

	if (*s == '\0')
	{
		return (0);
	}
	length = 1 + _strlen(s + 1);

	return (length);
}

/**
 *  is_palindrome_helper -  checks if palindrome
 *  @s: pointer to string to be printed
 *  @start: start of string
 *  @end: end of string
 *
 *  Return: 1
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}

	return (is_palindrome_helper(s, start + 1, end - 1));
}
