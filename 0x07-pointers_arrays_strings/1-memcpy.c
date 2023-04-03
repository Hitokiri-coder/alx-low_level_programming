#include "main.h"

/**
 * _memcpy - copys an array to a specific destnation.
 * @dest: the destnation
 * @src: the array that would be copyed to dest
 * @n: bytes
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int counter = 0;

	while (counter < n)
	{
		dest[counter] = src[counter];
		counter += 1;
	}
	return (dest);
}
