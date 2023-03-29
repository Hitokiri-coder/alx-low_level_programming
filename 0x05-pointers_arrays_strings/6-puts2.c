#include "main.h"

/**
 * puts2 - print char and skip the other (starting from the first one).
 * @str: contains the whole string.
 */
void puts2(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}
