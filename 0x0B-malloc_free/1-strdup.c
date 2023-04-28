#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - allocates a newly space in memory to duplicate a string
 * @str: the given string to duplicate.
 *
 * Return: a pointer to the duplicated str, NULL if it fails, or str eqauls to NULL.
 */
char *_strdup(char *str)
{
	char *str_2;
	int i = 0;

	if (str == NULL)
		return (NULL);

	str_2 = malloc(strlen(str));
	while (i < (int)strlen(str))
	{
		if (str_2 == NULL)
			return (NULL);
		str_2[i] = str[i];
		i++;
	}
	return (str_2);
}
