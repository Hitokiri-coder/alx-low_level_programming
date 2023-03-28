#include "main.h"

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
