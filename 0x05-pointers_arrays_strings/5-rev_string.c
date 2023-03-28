#include "main.h"

/**
 * rev_string - revers a string (affect the real value in the memory)
 * @str: contains the whole string.
 */
void rev_string(char *s)
{
	int max_index = _strlen(s) - 1;
	int counter = 0;

	while (counter <= max_index / 2)
	{
		char max_cpy = s[max_index - counter];
		s[max_index - counter] = s[counter];
		s[counter] = max_cpy;
		counter++;
	}
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
		counter++;
	}
	return (counter);
}

