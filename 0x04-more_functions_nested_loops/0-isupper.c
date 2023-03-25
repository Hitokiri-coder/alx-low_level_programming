#include "main.h"
#include <stdio.h>

/**
 * _isupper - to check if a letter is upper case
 * @c: contains the given letter.
 * Return: returns 1 if c is upper, and returns 0 otherwise.
 */
int _isupper(int c)
{
	int result = 0;

	if (c >= 65 && c <= 90)
	{
		result = 1;
	}
	return (result);
}
