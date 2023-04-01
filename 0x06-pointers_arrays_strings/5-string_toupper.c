#include "main.h"
#include <stdio.h>

/**
 * string_toupper - convert to upper case.
 * @str: contains the string.
 *
 * Return: Always str.
 */
char *string_toupper(char *str)
{
	int counter = 0;

	while (counter < (int)sizeof(str))
	{
		if (str[counter] >= 97)
			str[counter] = str[counter] - 97 + 65;
		counter++;
	}
	return (str);
}
