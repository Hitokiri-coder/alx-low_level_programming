#include "main.h"

/**
 * _strlen - fuccccccccccc
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
