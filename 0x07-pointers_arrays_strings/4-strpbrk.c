#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: contains the string.
 * @accept: set of bytes.
 *
 * Return: the first occurrence of found blabla
 */
char *_strpbrk(char *s, char *accept)
{
	int counter = 0;

	while (counter < _strlen(s))
	{
		if (char_in_str(s[counter], accept))
			return (s + counter);
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

/**
 * char_in_str - to check if a letter is in an string
 * @letter: contains the given letter.
 * @string: contains the given string.
 *
 * Return: 1 if the letter found, other wise 0.
 */
int char_in_str(char letter, char *string)
{
	int counter = 0;

	while (counter < _strlen(string))
	{
		if (string[counter] == letter)
			return (1);
		counter++;
	}
	return (0);
}
