#include "main.h"
#include <stdio.h>

/**
 * _isdigit - to check if the passed value is digit
 * @c: contains the given value.
 * Return: returns 1 if c is digit, and returns 0 otherwise.
 */
int _isdigit(int c)
{
	int result = 0;

	if (c >= 48 && c <= 57)
	{
		result = 1;
	}
	return (result);
}
