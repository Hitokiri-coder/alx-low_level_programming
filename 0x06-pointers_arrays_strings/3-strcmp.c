#include "main.h"

/**
 * _strcmp - compares s1 with s2
 * @s1: contains the first str
 * @s2: contains the second str
 *
 * Return: positive if s1 > s2, negetive if less and 0 if they are the same.
 */
int _strcmp(char *s1, char *s2)
{
	int result = (int)s1[0] - (int)s2[0];

	return (result);
}
