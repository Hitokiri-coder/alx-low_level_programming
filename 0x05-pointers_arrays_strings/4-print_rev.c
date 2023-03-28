#include "main.h"

/**
 * print_rev - to print a reversed string
 * @str: contains the whole string.
 */
void print_rev(char *str)
{
	int counter = _strlen(str);

	while (counter--)
		_putchar(str[counter]);
	_putchar('\n');
}

/**
 * _strlen - calculate the length of a given string
 * @s: fixed var that contains the passed string.
 */
int _strlen(char *s)
{
	int counter = 0;
	while (s)
	{
		if (s[counter] == '\0')
			break;
		else
			counter++;
	}
	return (counter);
}

