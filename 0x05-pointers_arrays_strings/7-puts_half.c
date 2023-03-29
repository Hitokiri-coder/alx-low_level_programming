#include "main.h"

/**
 * puts_half - prints the half of a str followed by a new line
 * @str: contains the passed string.
 */
void puts_half(char *str)
{
	int index = _strlen(str) / 2;

	while (index < _strlen(str))
		_putchar(str[index++]);
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
