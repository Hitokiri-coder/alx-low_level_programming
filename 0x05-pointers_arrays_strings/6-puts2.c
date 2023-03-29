#include "main.h"

/**
 * puts2 - print char and skip the other (starting from the first one).
 * @str: contains the whole string.
 */
void puts2(char *str)
{
	int counter = 0;

	while (counter < _strlen(str))
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
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
