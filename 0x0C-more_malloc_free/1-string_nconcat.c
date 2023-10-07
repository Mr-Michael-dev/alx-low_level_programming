#include "main.h"
#include <string.h>

/**
 * string_nconcat - alloctaes space in memory containing concatenated string
 * @s1: string to be concatenated
 * @s2: string to be concatenated
 * @n: number of string to be concatenated
 *
 * Return: pointer to newly allocated space which contains s1 and s2
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *strNew;
	unsigned int length1 = (s1 != NULL) ? strlen(s1) : 0;
	unsigned int length2 = (s2 != NULL) ? strlen(s2) : 0;
	unsigned int totalLength = length1 + ((n < length2) ? n : length2);


	strNew = (char *) malloc(sizeof(char) * (totalLength + 1));

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

	if (s2 != NULL && n > 0)
	{
		if (n >= length2)
		{
			if (strcat(strNew, s2) == NULL)
			{
				return (NULL);
			}
		} else
		{
			if (strncat(strNew, s2, n) == NULL)
			{
				return (NULL);
			}
		}
	}


	return (strNew);
}
