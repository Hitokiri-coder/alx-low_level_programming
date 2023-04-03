#include "main.h"

/**
 * _memset - to set first n bytes in an array
 * @s: the array
 * @b: the char that would be set n times
 * @n: bytes
 *
 * Return: the array after it is being set.
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int counter = 0;
	const char bb = b;

	while (counter < n)
	{
		s[counter] = bb;
		counter += 1;
	}
	return (s);
}
