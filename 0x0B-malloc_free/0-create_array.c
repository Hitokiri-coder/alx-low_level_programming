#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size chars.
 * @size: the size of the array.
 * @c: the repeated char.
 *
 * Retrun: a pointer to the array, NULL if it fails, or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	str = malloc(size);
	while (i < size)
	{
		str[i] = c;
		i++;
	}
	return (str);
}
