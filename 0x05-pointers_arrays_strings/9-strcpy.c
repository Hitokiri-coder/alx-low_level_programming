#include "main.h"

/**
 * _strcpy - copy src into dest.
 * @dest: the array that we intend to set.
 * @src: the value that we are going to use.
 *
 * Return: the pointer to *dest.
 */
char *_strcpy(char *dest, char *src)
{
	int counter = 0;

	while (src[counter] != '\0')
	{
		dest[counter] = src[counter];
		counter++;
	}
	dest[counter] = '\0';
	return (dest);
}
