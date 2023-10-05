#include "main.h"
#include <string.h>

/**
 * str_concat - alloctaes space in memory which contains concatenated string
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 *
 * Return: pointer to newly allocated space
 */

char *str_concat(char *s1, char *s2)
{
	char *strNew;
	int length1 = (s1 != NULL) ? strlen(s1) : 0;
	int length2 = (s2 != NULL) ? strlen(s2) : 0;

	strNew = (char *) malloc(sizeof(char) * (length1 + length2 + 1));

	if (strNew == NULL)
	{
		return (NULL);
	}

	if (s1 != NULL)
	{
		strcpy(strNew, s1);
	} else
	{
		strNew[0] = '\0';
	}

	if (s2 != NULL)
	{
		strcat(strNew, s2);
	}

	return (strNew);
}
