#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - concatenates 2 strings in a newly allocated space
 * @s1: the 1st given string
 * @s2: the 2nd given string
 *
 * Return: a pointer to the result.
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	int length = 0;
	int i = 0;

	if (s1 == NULL)
	{
		length += 1;
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
		length += 1;
	}
	if (s1 != NULL && s2 != NULL)
		str = malloc(strlen(s1) + strlen(s2)  + 1);
	while (i < (int)strlen(s1))
	{
		if (str == NULL)
			return (NULL);
		str[i] = s1[i];
		i++;
	}

	i = 0;
	while (i < (int)strlen(s2))
	{
		if (str == NULL)
			return (NULL);
		str[strlen(s1) + i] = s2[i];
		i++;
	}
	return (str);
}
