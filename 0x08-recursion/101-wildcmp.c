#include "main.h"

/**
 * wildcmp - returns 1 if s1 is considered identical to s2
 * @s1: string to be checked
 * @s2: string to be checked
 *
 * Return: 1 if identical or 0 if not
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == *s2) {
		if (*s1 == '\0')
		{
			return (1);
		}
		return (wildcmp(s1 + 1, s2 + 1));
	} else if (*s2 == '*'){
		if (*s1 == '\0')
		{
			return (0);
		}
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	} else if (*s1 == '\0') {
		return (*s2 == '\0' || *s2 == '*');
	} else {
		return (0);
	}
}
