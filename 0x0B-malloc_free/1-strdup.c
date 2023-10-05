#include "main.h"
#include <string.h>

/**
 * _strdup - alloctaes space in memory which contains a copy of a given string
 * @str: string to be duplicated
 * 
 * Retun: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	char *strNew;
	int length = strlen(str);
	
	if (str == NULL)
	{
		return (NULL);
	}

	strNew = (char *) malloc(sizeof(char) * (length + 1));

	if (strNew == NULL)
	{
		return (NULL);
	}

	strcpy(strNew, str);

	return (strNew);
}
