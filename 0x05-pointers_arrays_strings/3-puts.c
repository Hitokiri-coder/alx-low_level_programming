#include "main.h"

/**
 * _put - to print strings (similar to puts in the standard library)
 * @str: contains the whole string.
 */
void _puts(char *str)
{
	int counter = 0;

	while (str)
	{
		if (str[counter] == '\0')
			break;
		_putchar(str[counter++]);
	}
}
