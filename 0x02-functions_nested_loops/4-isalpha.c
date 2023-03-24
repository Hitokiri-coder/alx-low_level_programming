#include <stdio.h>
#include "main.h"

/**
 * _isalpha - check only for letters
 * @c: contains the passed letter.
 * Return: returns 1 if it is letter, and 0 if else.
 */

int _isalpha(int c)
{
	int result = 0;

	if (c >= 97 && c <= 122 || c >= 65 && c <= 90)
		result = 1;
	return (result);
}
