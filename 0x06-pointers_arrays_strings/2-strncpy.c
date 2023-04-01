#include "main.h"

/**
 * _strncpy - to copy src into dest
 * @dest: contains the first str that would be set after concatintion
 * @src: contains the second str
 * @n: maximum of copying from src. if n is bigger than the length of src,
 * it will fill the last remaining bytes with NULL chars
 *
 * Return: the value of dest after being set to the concatinated str
 */
char *_strncpy(char *dest, char *src, int n)
{
	int counter = 0;

	while (counter < n)
	{
		if (counter < _strlen(src))
		{
			dest[counter] = src[counter];
			counter++;
		}
		else
			dest[counter++] = '\0';
	}
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
