#include "main.h"

/**
 * _strcat - to concatinate two strings and set them to the first one
 * @dest: contains the first str that would be set after concatintion
 * @src: contains the second str
 *
 * Return: the value of dest after being set to the concatinated str
 */
char *_strcat(char *dest, char *src)
{
	int src_index = 0;
	int last_index = _strlen(dest);

	while (src_index < _strlen(src))
		dest[last_index++] = src[src_index++];
	return (dest);
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
