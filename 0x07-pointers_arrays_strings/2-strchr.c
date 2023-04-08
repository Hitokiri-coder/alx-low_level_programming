#include "main.h"

/**
 * _strchr - check if a letter is exists
 * @s: contains the string.
 * @c: contains the given char.
 *
 * Return: the first occurrence found blabla
 */
char *_strchr(char *s, char c)
{
	int counter = 0;

	while (counter < _strlen(s))
	{
		if (s[counter] == c)
			return (s+counter);
		counter += 1;
	}
	return ('\0');
}

/**
 * _strlen - calculate the length of a given string
 * @s: fixed var that contains the passed string.
 *
 * Return: returns the number of the given characters
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s)
	{
		if (s[counter] == '\0')
			break;
		counter++;
	}
	return (counter);
}
