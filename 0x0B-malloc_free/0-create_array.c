#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of size chars.
 * @size: the size of the array.
 * @c: the repeated char.
 *
 * Return: a pointer to the array, NULL if it fails, or size is 0.
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	str = malloc(size);
	while (i < size)
	{
		if (str == NULL)
			return (NULL);
		str[i] = c;
		i++;
	}
	return (str);
}
